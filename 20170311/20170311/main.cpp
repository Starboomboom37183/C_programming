#include <iostream>
using namespace std;

int countBitDiff(int m, int n) {
	int x = m^n;
	int count = 0;
	int k = x&(x-1);
	//cout<<k<<endl;
	while(k>=0){
		count++;
		k = k&(k-1);
	}
	return count;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<countBitDiff(m,n);
	return 0;
}