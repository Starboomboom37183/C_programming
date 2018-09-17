//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int to_int(const string &s){
//	int sum = 0;
//	for(int i=0;i<s.size();i++){
//		sum = sum*10;
//		sum+=s[i]-'0';
//		
//	}
//	return sum;
//}
//int main(){
//	string s;
//	cin>>s;
//	int pos = 0;
//	int start = 0;
//	vector<int> num;
//	vector<char> op;
//	string s1;
//	while(pos<s.size()){
//		if(s[pos]=='+'||s[pos]=='-'||s[pos]=='*')
//		{
//			op.push_back(s[pos]);
//			s1 = s.substr(start,pos-start);
//			num.push_back(to_int(s1));
//			start = pos+1;
//		}
//		pos++;
//	}
//	s1 = s.substr(start);
//	num.push_back(to_int(s1));
//	int res = num[0];
//	for(int i=1;i<num.size();i++){
//		if(op[i-1]=='+') res+=num[i];
//		else if(op[i-1]=='-') res-=num[i];
//		else if(op[i-1]=='*') res*=num[i];
//	}
//
//	cout<<res<<endl;
//
//	
//}