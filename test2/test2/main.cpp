#include<iostream>
#include<string>
using namespace std;
struct ZB{
	int mi;
	int *add_z;
	int *cost_m;
	string name;
};
int main(){
	int T;
	while(cin>>T){
		int n,s;
		cin>>n>>s;
		ZB *zb = new ZB[n];
		for(int i=0;i<n;i++){
			cin>>zb[i].name>>zb[i].mi;
			int m = zb[i].mi;
			zb[i].add_z = new int[m];
			zb[i].cost_m = new int[m];
			for(int j=0;j<m;j++){
				cin>>zb[i].add_z[j];
				cin>>zb[i].cost_m[j];
			}

		}






	}
	return 0;
}