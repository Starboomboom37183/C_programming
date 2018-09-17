//#include<iostream>
//#include<vector>
//using namespace std;
//
//int to_number(vector<int> &res,int n){
//	int count = 0 ;
//	while(n>0){
//		int t = n%10;
//		if(t==0) count++;
//		res.push_back(t);
//		n = n/10;
//	}
//
//	return count;
//}
//
//bool is_balance(vector<int> &res,int count){
//	if(res.size()<=1) return false;
//	if(count!=0&&count%2==0) return true;
//	if(count%2!=0) return false;
//	int l = 0;
//	int r = res.size()-1;
//	int left = res[l];
//	int right = res[r];
//	while(l<r){
//		if(left<right){
//			l++;
//			left = left*res[l];
//		}
//		else if(left>right){
//			r--;
//			right = right*res[r];
//		}
//		else{
//			l++;
//			r--;
//			if(l==r) return false;
//			if(l>r) return true;
//			left*=res[l];
//			right*=res[r];
//		}
//	}
//
//	if(left==right) return true;
//	return false;
//}
//int main(){
//	int n;
//	cin>>n;
//	vector<int> res;
//	int count = to_number(res,n);
//
//	if(is_balance(res,count)) cout<<"YES"<<endl;
//	else
//		cout<<"NO"<<endl;
//	
//	return 0;
//}