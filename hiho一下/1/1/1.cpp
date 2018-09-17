//#include<iostream>
//#include<vector>
//using namespace std;
//int partion (vector<int> &res,int start,int end){
//	int temp = res[start];
//	int l = start;
//	int r = end;
//	while(l<r){
//		while(r>l&&res[r]>=temp) r--;
//		swap(res[l],res[r]);
//		while(l<r&&res[l]<=temp) l++;
//		swap(res[l],res[r]);
//
//	}
//	return l;
//}
//vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
//	vector<int> res;
//	int temp = partion(input,0,input.size()-1);
//	int start = 0;
//	int end = input.size()-1;
//	while(temp!=k-1){
//		if(temp<k-1){
//			start = temp+1;
//		}
//		else{
//			end = temp - 1;
//		}
//		temp =partion(input,start,end);
//	}
//
//	for(int i=0;i<k;i++){
//		res.push_back(input[i]);
//	}
//	return res;
//}
//
//int main(){
//	vector<int> input;
//	int x;
//	int n;
//	int k;
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>x;
//		input.push_back(x);
//	}
//
//	vector<int> res = GetLeastNumbers_Solution(input,k);
//	for(int i=0;i<res.size();i++){
//		cout<<res[i]<<" ";
//	}
//	cout<<endl;
//}