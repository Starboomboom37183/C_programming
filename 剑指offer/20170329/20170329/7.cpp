//#include<iostream>
//#include<set>;
//using namespace std;
//int gcd(int a,int b){
//
//	if(a%b==0) return b;
//	int c = a%b;
//	return gcd(b,c);
//
//}
//int main(){
//	int w,x,y,z;
//	int d=0;
//	cin>>w>>x>>y>>z;
//	set<pair<int,int>> s;
//	for(int i =w;i<=x;i++){
//		for(int j=y;j<=z;j++){
//			if(i>=j) d = gcd(i,j);
//			else d = gcd(j,i);
//			s.insert(make_pair(i/d,j/d));
//		}
//	}
//
//	cout<<s.size()<<endl;
//	return 0;
//}