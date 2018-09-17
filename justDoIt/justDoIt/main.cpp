#include<iostream>
#include<string>
using namespace std;
string tostring(int i){
	string res;
	while(i>0){
		res.insert(0,1,i%10+'0');
		i = i/10;
	}
	return res;
}
int to_number(string sum){
	int res = 0;
	for(int i=0;i<sum.size();i++){
		res = res*10;
		res+=sum[i]-'0';
		
	}
	return res;
}
int find_begin(int m){
	if(m==1) return 1;
	if(m==2) return 10;
	if(m==3) return 100;
	return 0;
}
int solve(string a,string b,string sum){
	
	int a_size = a.size();
	int b_size = b.size();
	int count = 0;
	int s = to_number(sum);
	for(int i =find_begin(a_size);i<s&&i<find_begin(a_size+1);i++){
		
				
				string s1 = tostring(i);
				

				int k = 0;
				for(k=0;k<a_size;k++){
					if(a[k]=='x') continue;
					else
					{
						if(a[k]!=s1[k])
							break;
					}
				}
				if(k!=a_size) continue;
				int j = s-i;
				string s2 = tostring(j);
	
				if(s2.size()!=b_size){
					continue;
				}
				else{
					
					int k1 = 0;
					for(k1=0;k1<b_size;k1++){
						if(b[k1]=='x') continue;
						else
						{
							if(b[k1]!=s2[k1])
								break;
						}
					}
					if(k1==b_size){
						count++;
						//cout<<i<<" "<<j<<endl;
					}

				
				}
	}
	return count;
}
int main(){
	int T;
	while(cin>>T){
		string a;
		string b;
		string sum;
		for(int i=0;i<T;i++){
			cin>>a>>b>>sum;
			cout<<solve(a,b,sum)<<endl;

		}
	}
	return 0;
}