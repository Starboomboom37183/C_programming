#include<iostream>  
using namespace std;  
#define MAX 256  
int min(int a,int b);  
int max(int a,int b);  
void Knapsack(int n,int c,int v[],int w[],int m[][MAX]); // ������ֵ����ֵ���   
void Traceback(int n,int c,int w[],int x[],int m[][MAX]);  // �����Ž⣬�����ļ���Ʒ������   

int min(int a,int b){  
	return a<b?a:b;  
}  

int max(int a,int b){  
	return a>b?a:b;  
}  

// ���Ʒ�����m(n,c)-->m(n-1,c)--------->m(1,c)  
// �������ֵ������������ֵ   
void Knapsack(int n,int c,int v[],int w[],int m[][MAX]){ // n��Ʒ����c����������v����Ʒ��ֵ,w����Ʒ������m���Ž�   
	// m(n,c)   
	int jMax = min(w[n],c); // ��������,j�����ȡֵ��Χ   
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
			// max(��i����Ʒδ��ѡ�ϣ���i����Ʒ��ѡ�ϣ�   
			m[i][j] = max(m[i+1][j],m[i+1][j-w[i]]+v[i]);  
		}  
	}  

	// m(1,c)  
	m[1][c] = m[2][c];  
	if(c > w[1]){  
		m[1][c] = max(m[1][c],m[2][c-w[1]]+v[1]);  
	}  

	// ���   
	int x[MAX];   
	Traceback(n,c,w,x,m);  
	cout << "�����Ʒ��ֵΪ��" <<endl;  
	cout << m[1][c]<<endl;  
}   

// ������Ž⣬������ÿ�������Ƿ����   
// x[i]��ʾ��i����Ʒ�Ƿ�ѡ�ϣ�ֵΪ1��ѡ�ϣ�Ϊ0����   
void Traceback(int n,int c,int w[],int x[],int m[][MAX]){  
	for(int i=1; i<n; i++){  
		if(m[i][c] == m[i+1][c]){ // ��i����Ʒû��ѡ��   
			x[i] = 0;  
		}  
		else{ // ��i����Ʒ��ѡ��  
			x[i] = 1;  
			c -= w[i];  
		}  
	}  

	x[n]= (m[n][c])?1:0; // ����n����Ʒ�ļ�ֵ����m,��ѡ��   

	cout << "ѡ�е���Ʒ��:"<<endl;   
	cout << "��" ;   
	for(int i=1; i<=n; i++){  
		if(x[i] == 1){  
			cout << i << " ";  
		}  
	}  
	cout << "����Ʒ" << endl;  
}  

// ��������  
int main(){  
	int n; // ��Ʒ��   
	int c; // ��������   
	int w[MAX]; // ����Ʒ������   
	int v[MAX]; // ����Ʒ�ļ�ֵ   
	int m[MAX][MAX]={0}; // ����ĵ�ǰ����ֵ����m[2][c]��ʾȥ����1����Ʒ�������ֵ   
	cout << "�����뱳�������������"<<endl;  
	cin >> c;   
	cout << "��������Ʒ�ĸ�����"<<endl;   
	cin >> n;  
	cout << "��ֱ�������Ʒ��������"<<endl;   
	for(int i=1; i<=n; i++){  
		cin >> w[i];  
	}  
	cout << "��ֱ�������Ʒ�ļ�ֵ��"<<endl;   
	for(int i=1; i<=n;i++){  
		cin >> v[i];  
	}  
	Knapsack(n,c,v,w,m);      
	return 0;  
}   