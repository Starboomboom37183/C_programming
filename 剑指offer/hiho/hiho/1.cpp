//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string s;
//	cin>>s;
//	int min = s.size()+1;
//	int j = 0;
//	int h_count = 0;
//	int i_count=0;
//	int o_count = 0;
//	int i=0;
//	while(j<s.size()){
//		while((h_count<2||o_count<1||i_count<1)&&j<s.size()){
//			if(s[j]=='h') h_count++;
//			if(s[j]=='i') i_count++;
//			if(s[j]=='o') o_count++;
//			j++;
//			
//		}
//		if(h_count==2&&i_count==1&&o_count==1){
//			if(min>(j-i)) min = j-i;
//		}
//		if(s[i]=='h') h_count--;
//		if(s[i]=='o') o_count--;
//		if(s[i]=='i') i_count--;
//		i++;
//
//	}
//
//	if(min==s.size()+1) cout<<-1<<endl;
//	else cout<<min<<endl;
//
//
//	return 0;
//}