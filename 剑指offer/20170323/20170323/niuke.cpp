/*#include<iostream>
#include<vector>
using namespace std;
bool is_balanced(int x){
	vector<int> res;
	int count = 0;
	while(x>0){
		//cout<<"x "<<x<<endl;
		int t = x%10;
		if(t==0) count++;
		res.push_back(t);
		x = x/10;
	}
	if(count>0&&count%2==0) return true;
	if(count%2==1) return false;
	int l = 0;
	int r = res.size()-1;
	int l_f = res[0];
	int r_f = res[res.size()-1];
	//cout<<l_f<<" "<<r_f<<endl;
	while(l<r){
		if(l_f<r_f){
			l++;
			l_f*=res[l];

		}
		else if(l_f>r_f){
			r--;
			r_f*=res[r];
		}
		else{
			l++;
			r--;
			if(l>r) break;
			if(l==r) return false;
			l_f*=res[l];
			r_f*=res[r];
		}
	}

	if(l_f==r_f) return true;
	return false;


}
int main(){
	int n;
	while(cin>>n){
		if(is_balanced(n)) cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}*/