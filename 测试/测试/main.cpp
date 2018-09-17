#include<iostream>
#include <string>
#include<map>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<string,int> &a,const pair<string,int> &b){
	return a.second>b.second;
}
int main() {  
	map<string, int> name_score_map;  
	name_score_map["LiMin"] = 90;  
	name_score_map["ZiLinMi"] = 79;  
	name_score_map["BoB"] = 92;  
	name_score_map.insert(make_pair("Bing",99));  
	name_score_map.insert(make_pair("Albert",86));   
	
	vector<pair<string,int>> vec(name_score_map.begin(),name_score_map.end());

	sort(vec.begin(),vec.end(),cmp);

	for(vector<pair<string,int>>::iterator it = vec.begin();it!=vec.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;  
} 