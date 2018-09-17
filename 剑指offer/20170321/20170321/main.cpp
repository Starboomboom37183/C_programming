#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
void getGray(int n,vector<string> &a,string begin,map<string,int> &flag){
	
	a.push_back(begin);
	flag[begin]=1;
	for(int i=n-1;i>=0;i--){
		string temp = begin;
		if(temp[i]=='0') temp[i] = '1';
		else
			temp[i] = '0';
		if(flag[temp]==0)
			getGray(n,a,temp,flag);
	}
}
int main(){
	int n;
	cin>>n;
	vector<string> res;
	string begin(n,'0');
	map<string,int> flag;
	getGray(n,res,begin,flag);

	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
	return 0;
}