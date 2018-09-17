//#include<iostream>
//#include<algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//bool cmp(const pair<int,int> &a,const pair<int,int> &b){
//	return a.second<b.second;
//}
//int main(){
//	int N,M,L;
//	cin>>N>>M>>L;
//	vector<pair<int,int> > res;
//	int h = 0;
//	for(int i=0;i<N;i++){
//		cin>>h;
//		res.push_back(make_pair(0,h));
//	}
//	for(int i = 0;i<M;i++){
//		cin>>h;
//		res.push_back(make_pair(1,h));
//	}
//	for(int i=0;i<L;i++){
//		cin>>h;
//		res.push_back(make_pair(2,h));
//	}
//	sort(res.begin(),res.end(),cmp);
//	int min= 10000000;
//	int l1,l2,l3;
//	l1= l2 = l3 = 0;
//	while(l3<res.size()){
//		l2 = l1;
//		while(l2<res.size()&&res[l2].first==res[l1].first) l2++;
//		l3 = l2;
//		while(l3<res.size()&&(res[l3].first==res[l2].first||res[l3].first==res[l1].first)) l3++;
//		if(l2>=res.size()||l3>=res.size()) break;
//		int temp = 2*(res[l3].second-res[l2-1].second);
//		if(temp<min) min = temp;
//
//		l1 = l2;
//
//	}
//	cout<<min<<endl;
//	return 0;
//}