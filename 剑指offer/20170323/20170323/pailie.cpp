/*#include<iostream>
#include<vector>
using namespace std;
//递归写出全排列，这个题目的启发很大
void getQuanPaiLie(vector<vector<int> >&r,vector<int> &t,int n,bool *flag,int *a,int pos){
	if(t.size()==n){
		r.push_back(t);
	}
	for(int i=1;i<=n;i++){
		if(a[pos]!=0&&i!=a[pos]){
			continue;
		}
		if(flag[i-1]){
			t.push_back(i);
			flag[i-1] = false;
			getQuanPaiLie(r,t,n,flag,a,pos+1);
			t.pop_back();
			flag[i-1] = true;
		}
		
	}

}
//这种全排列方法更好
void QPL(vector<vector<int> > &res,vector<int> &v,int pos){
	if(pos==v.size()){
		res.push_back(v);
	}
	else{
		for(int i =pos;i<v.size();i++){
			swap(v[i],v[pos]);
			QPL(res,v,pos+1);
			swap(v[i],v[pos]);
		}
	}

}

 
int count_nixu(int *a,int n){
	int k = 0;
	for(int i=0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(a[j]>a[i]) k++;
		}
	}
	return k;
}
void tianchong(int *a,int n,vector<int> &v,vector<int> &pos){
	for(int i=0;i<pos.size();i++){
		a[pos[i]] = v[i];
	}
}
bool find(int *a,int k,int n){
	for(int i=0;i<n;i++){
		if(a[i]==k) return true;
	}
	return false;
}
int main(){
	int n,k;
	cin>>n>>k;
	
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<vector<int> >res ;
	vector<int> t;
	bool *flag = new bool[n];
	for(int i=0;i<n;i++){
		flag[i] = true;
	}
	getQuanPaiLie(res,t,n,flag,a,0);
	int count = 0;
	for(int i=0;i<res.size();i++){
		if(count_nixu(res[i])==k){
			count++;
		}
		//cout<<endl;
	}
	cout<<count<<endl;

	vector<int> v;

	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> vpos;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			vpos.push_back(i);
		}
	}
	for(int i=1;i<=n;i++){
		if(!find(a,i,n)){
			v.push_back(i);
		}
	}
	vector<vector<int> >res ;
	QPL(res,v,0);
	int count =0;
	for(int i=0;i<res.size();i++){
		tianchong(a,n,res[i],vpos);
		if(count_nixu(a,n)==k) count++;
	}

	cout<<count<<endl;


	return 0;

}*/