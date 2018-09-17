//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//bool cmp(int a,int b){
//	return a>b;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	vector<int> a;
//	int t;
//	for(int i=0;i<n;i++){
//		cin>>t;
//		a.push_back(t);
//	}
//	sort(a.begin(),a.end());
//	int sum = 0;
//	for(int i=0;i<a.size();i++)
//		sum+=a[i];
//	int l = 0;
//	int r = a.size()-1;
//	int sum1 = 0;
//	int sum2 = sum;
//	
//	//cout<<sum1<<" "<<sum2<<endl;
//	while(sum1<sum2){
//		if(abs(sum1+2*a[l]-sum2)<abs(sum1+2*a[r]-sum2)){
//			sum1 = sum1+a[l];
//			sum2 = sum2-a[l];
//			l++;
//		}
//		else
//		{
//			sum1 = sum1+a[r];
//			sum2 = sum2-a[r];
//			r--;
//		}
//	}
//	int res = min(sum1,sum2+a[r]);
//	cout<<res<<endl;
//	
//}