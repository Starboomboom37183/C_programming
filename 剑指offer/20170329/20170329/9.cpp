#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	int min = s.size()+1;
	for(int i=0;i<s.size();i++){
		if(s[i]!='h'&&s[i]!='o'&&s[i]!='h') continue;
		int h_count = 0;
		int i_count=0;
		int o_count = 0;
		int j = i;
		for(;j<s.size();j++){
			if(s[j]=='h') h_count++;
			if(s[j]=='i') i_count++;
			if(s[j]=='o') o_count++;
			if(h_count>2||i_count>1||o_count>1) break;
			if(h_count==2&&i_count==1&&o_count==1) break;
		}

		if(h_count==2&&i_count==1&&o_count==1){
			if(min>(j-i+1)) min = j-i+1;
		}
	}

	if(min==s.size()+1) cout<<-1<<endl;
	else cout<<min<<endl;


	return 0;
}