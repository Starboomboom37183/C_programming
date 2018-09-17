#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<hash_set>
using namespace std;
int translate(char c){
	if(c=='A') return 1;
	if(c=='J') return 11;
	if(c=='Q') return 12;
	if(c=='K') return 13;
	return (c-'0');
}
bool cmp(const pair<int,char> &t1,const pair<int,char> &t2){
	return t1.first<t2.first;
}

bool is_tonghuaxunzi(const vector<pair<int,char> > &res){
	int i = 0;
	for(i=1;i<res.size();i++){
		if(res[i].first!=res[i-1].first+1||res[i].second!=res[i-1].second) break;
	}
	cout<<i<<endl;
	if(i==5) return true;
	else
	{
		return false;
	}
}
bool is_sitiao(const vector<pair<int,char> > &res,map<int,int> &h){
	for(map<int,int>::iterator it = h.begin();it!=h.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return false;
}

bool is_hulu(const vector<pair<int,char> > &res,const map<int,int> &h){
	return false;
}
int main(){
	int n = 0;
	char s1,s2;
	vector<pair<int,char> > res;
	while(n<5){
		cin>>s1>>s2;
		res.push_back(make_pair(translate(s1),s2));
		n++;
	}
	sort(res.begin(),res.end(),cmp);
	map<int,int> h;
	for(int i=0;i<res.size();i++){
		h[res[i].first]++;
	}
	if(is_tonghuaxunzi(res)) cout<<"1"<<endl;
	else if(is_sitiao(res,h)){
		cout<<"2"<<endl;
	}
	else if(is_hulu(res,h)){
		cout<<"3"<<endl;
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i].first<<" "<<res[i].second<<endl;
	}
	res.clear();
	return 0;
}