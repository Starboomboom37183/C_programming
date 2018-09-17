#include<iostream>
#include<vector>
using namespace std;
int findKth(vector<int> &arr1, int start1,vector<int> &arr2, int start2,int kth){
	if(arr1.size()-start1+arr2.size()-start2<kth) return -1;
	if(arr1.size()-start1>arr2.size()-start2) return findKth(arr2,start2,arr1,start1,kth);
	if(arr1.size()-start1==0) return arr2[kth-1];
	if(kth==1) return min(arr1[start1],arr2[start2]);
	int id1 = (kth/2<(arr1.size()-start1))?kth/2:(arr1.size()-start1);
	int id2 = kth - id1;
	if(arr1[start1+id1-1]<arr2[start2+id2-1]){
		return findKth(arr1,start1+id1,arr2,start2,kth-id1);
	}
	else if(arr1[start1+id1-1]>arr2[start2+id2-1]){
		return findKth(arr1,start1,arr2,start2+id2,kth-id2);
	}
	else{
		return arr1[start1+id1-1];
	}


}
int findKthNum(vector<int> &arr1, vector<int> &arr2, int kth) {
	return findKth(arr1,0,arr2,0,kth);
}
int main(){
	vector<int> res1;
	vector<int> res2;
	int m,n;
	cin>>m>>n;
	int x;
	for(int i=0;i<m;i++){
		cin>>x;
		res1.push_back(x);
	}
	for(int i=0;i<n;i++){
		cin>>x;
		res2.push_back(x);
	}
	int kth;
	cin>>kth;
	int k = findKthNum(res1,res2,kth);
	cout<<k<<endl;
}
