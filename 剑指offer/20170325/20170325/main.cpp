#include<iostream>
#include<string>
using namespace std;
void cal_count(int **m,int start,int n,bool is_worked[],int &count,bool *worker){
	if(start==n) count++;
	else{

			for(int j=0;j<6;j++){
				for(int i= start;i<n;i++){
					
					if(!is_worked[j]&&!worker[i]&&m[i][j]==1){
						
						is_worked[j] = true;
						worker[i] = true;
						cal_count(m,start+1,n,is_worked,count,worker);
						is_worked[j] = false;
						worker[i] =false;
					}
					
					
				}
				
			}
			
		

	}
	
}
int main(){
	int n;
	cin>>n;
	int **m = new int*[n];
	for(int i=0;i<n;i++){
		m[i] = new int[6];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<6;j++){
			m[i][j] = 0;
		}
	}
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.size();j++){
			int t = s[j]-'0';//¹¤×÷±àºÅ
			m[i][t] = 1;
		}
	}

	int count = 0;
	bool work[6] = {0,0,0,0,0,0};
	bool *worker = new bool[n];
	for(int i=0;i<n;i++)
		worker[i] = false;
	cal_count(m,0,n,work,count,worker);
	cout<<count<<endl;
	return 0;
}