#include<iostream>
#include<string>
using namespace std;

int do_xiaochu(string s){
	int count =0;
	while(true){
		string ss = "";
	
		int i =0;
		while(i<s.size()){
			int j = i+1;
			while(j<s.size()&&s[j]==s[i]){
				j++;
			}
			if(j-i==1) ss.append(1,s[i]);
			else
				count+=j-i;
			i = j;
		}
		if(s==ss) break;
		else
			s =ss;
	}
	return count;
}
int main(){
	int T;
	cin>>T;
	string s;
	for(int i=0;i<T;i++){
		cin>>s;
		int max_count = 0;
		for(char c= 'A';c<='C';c++){
			for(int i=0;i<s.size();i++){
				s.insert(i,1,c);
				int count = do_xiaochu(s);
				if(count>max_count) max_count = count;
				s.erase(i,1);
			}


		}
		cout<<max_count<<endl;
	}
	
	return 0;
}