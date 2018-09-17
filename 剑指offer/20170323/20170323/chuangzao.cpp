#include<iostream>
#include<string>
#include<vector>
struct item{
	int x0;
	int x1;
	item(int x0=0):x1(0){

	}
};
using namespace std;
int main(){
	int x,n,m;
	string s;
	while(cin>>x>>n>>m){
		vector<item> res;
		for(int i=0;i<x;i++){
			cin>>s;
			item temp;
			for(int i=0;i<s.size();i++){
				if(s[i]=='0') temp.x0++;
				if(s[i]=='1') temp.x1++;
			}
			res.push_back(temp);
		}

	}
}