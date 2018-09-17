#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int translate(char c){
	int res = 0;

	return res;
}
bool cmp(const pair<int,char> &t1,const pair<int,char> &t2){
	return t1.first<t2.first;
}

bool is_xunzi(const vector<pair<int,char> > &res){
	int i = 0;
	for(i=1;i<res.size()-1;i++){
		if(res[i].first!=res[i-1].first+1||res[i].second!=res[i-1].second) break;
	}
	if(i==res.size()) return true;
	else
	{
		return false;
	}
}
int main(){
	int n = 0;
	char s1,s2;
	vector<pair<int,char> > res;
	while(n<5){
		cin>>s1>>s2;
		cout<<translate(s1)<<endl;
		res.push_back(make_pair(translate(s1),s2));
		n++;
	}
	sort(res.begin(),res.end(),cmp);

	if(is_xunzi(res)) cout<<"tonghuaxun"<<endl;
	else{
		cout<<"bushi"<<endl;
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i].first<<" "<<res[i].second<<endl;
	}
	res.clear();
	return 0;
}