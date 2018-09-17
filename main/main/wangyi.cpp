#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a<=b){
		if(b%a==0) return a;
		int r = b%a;
		return gcd(r,a);
	}
	else{
		swap(a,b);
	}
}
int main()
{
	int N,a;
	while(cin>>N>>a){
		int *b = new int[N];
		for(int i=0;i<N;i++){
			cin>>b[i];
		}
		int c = a;
		for(int i=0;i<N;i++){
			if(b[i]<=c) c+=b[i];
			else{
				c+=gcd(c,b[i]);
			}
		}

		cout<<c<<endl;
	}
	return 0;
}