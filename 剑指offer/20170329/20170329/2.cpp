//#include<iostream>
//#include<string>
//using namespace std;
//
//int shift_to_left(int begin,int end){
//	return begin-end;
//}
//int main(){
//	string s;
//	cin>>s;
//	int count = 0;
//	int pos = 0;
//	for(int i=0;i<s.size();i++){
//		if(s[i]=='G'){
//			count+=shift_to_left(i,pos);
//			pos++;
//		}
//	}
//	int count2 = 0;
//	pos = s.size()-1;
//	for(int i=s.size()-1;i>=0;i--){
//		if(s[i]=='G') {
//			count2+=(pos-i);
//			pos--;
//		}
//	}
//	cout<<min(count,count2)<<endl;
//	return 0;
//}