/*#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
bool is_same(string s1,string s2){
	if(s1.size()!=s2.size()) return false;
	if(s1==s2) return true;
	return false;
}
int main(){
	int N;
	string s;
	map<string,int> m;
	while(cin>>N){
		for(int i=0;i<N;i++){
			cin>>s;
			sort(s.begin(),s.end());
			m[s]++;	
		}
		int count = 0;
		for(map<string,int>::iterator it = m.begin();it!=m.end();++it){
			count++;
		}
		cout<<count<<endl;
		
	}
}*/