#include<iostream>
using namespace std;
int max_AB(int *a,int A,int B){
	int max = 0;
	for(int i=A;i<=B;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int N,M;
	while(cin>>N>>M){
		int *bg = new int[N];
		for(int i=0;i<N;i++)
			cin>>bg[i];
		char c;
		int A,B;
		for(int i=0;i<M;i++){
			cin>>c>>A>>B;
			if(c=='U'){
				bg[A-1] = B;
			}
			else if(c=='Q'){
				cout<<max_AB(bg,A-1,B-1)<<endl;
			}
		}
	}
	
	return 0;
}