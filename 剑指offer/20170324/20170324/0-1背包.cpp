#include<iostream>  
using namespace std;  
#define MAX 256  
int min(int a,int b);  
int max(int a,int b);  
void Knapsack(int n,int c,int v[],int w[],int m[][MAX]); // 求最优值，价值最大   
void Traceback(int n,int c,int w[],int x[],int m[][MAX]);  // 求最优解，具体哪件物品被放入   

int min(int a,int b){  
	return a<b?a:b;  
}  

int max(int a,int b){  
	return a>b?a:b;  
}  

// 逆推法，从m(n,c)-->m(n-1,c)--------->m(1,c)  
// 求得最优值，及所得最大价值   
void Knapsack(int n,int c,int v[],int w[],int m[][MAX]){ // n物品数，c背包容量，v各物品价值,w各物品重量，m最优解   
	// m(n,c)   
	int jMax = min(w[n],c); // 先验条件,j的最大取值范围   
	for(int j=0; j<jMax; j++){  
		m[n][j] = 0;  
	}  
	for(int j=w[n];j<=c;j++){  
		m[n][j]=v[n];  
	}  

	// m(2,c)  
	for(int i=n-1; i>1;i--){  
		jMax = min(w[n],c);  
		for(int j=0; j<jMax; j++){  
			m[n][j] = m[n+1][j];  
		}  
		for(int j=w[i];j<=c;j++){  
			// max(第i个物品未被选上，第i个物品被选上）   
			m[i][j] = max(m[i+1][j],m[i+1][j-w[i]]+v[i]);  
		}  
	}  

	// m(1,c)  
	m[1][c] = m[2][c];  
	if(c > w[1]){  
		m[1][c] = max(m[1][c],m[2][c-w[1]]+v[1]);  
	}  

	// 输出   
	int x[MAX];   
	Traceback(n,c,w,x,m);  
	cout << "最大物品价值为：" <<endl;  
	cout << m[1][c]<<endl;  
}   

// 求得最优解，即具体每个背包是否放入   
// x[i]表示第i个物品是否被选上，值为1则选上，为0则弃   
void Traceback(int n,int c,int w[],int x[],int m[][MAX]){  
	for(int i=1; i<n; i++){  
		if(m[i][c] == m[i+1][c]){ // 第i个物品没被选上   
			x[i] = 0;  
		}  
		else{ // 第i个物品被选上  
			x[i] = 1;  
			c -= w[i];  
		}  
	}  

	x[n]= (m[n][c])?1:0; // 若第n个物品的价值存入m,则被选上   

	cout << "选中的物品是:"<<endl;   
	cout << "第" ;   
	for(int i=1; i<=n; i++){  
		if(x[i] == 1){  
			cout << i << " ";  
		}  
	}  
	cout << "件物品" << endl;  
}  

// 测试用例  
int main(){  
	int n; // 物品数   
	int c; // 背包容量   
	int w[MAX]; // 各物品的重量   
	int v[MAX]; // 各物品的价值   
	int m[MAX][MAX]={0}; // 保存的当前最大价值，例m[2][c]表示去掉第1个物品后的最大价值   
	cout << "请输入背包的最大容量："<<endl;  
	cin >> c;   
	cout << "请输入物品的个数："<<endl;   
	cin >> n;  
	cout << "请分别输入物品的重量："<<endl;   
	for(int i=1; i<=n; i++){  
		cin >> w[i];  
	}  
	cout << "请分别输入物品的价值："<<endl;   
	for(int i=1; i<=n;i++){  
		cin >> v[i];  
	}  
	Knapsack(n,c,v,w,m);      
	return 0;  
}   