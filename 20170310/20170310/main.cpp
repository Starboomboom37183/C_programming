#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		vector<int> a;
		int t;
		for(int i=0;i<N;i++){
			cin>>t;
			a.push_back(t);
		}
		sort(a.begin(),a.end());
		map<int,int> m;
		int min = abs(a[0]-a[1]);
		for(int i=0;i<N-1;i++)
		{
			m[abs(a[i]-a[i+1])]++;
			if(abs(a[i]-a[i+1])<min){
				min = abs(a[i]-a[i+1]);
			}
		}
		int res_min = 0;
		if(m[0]==0){
			res_min = m[min];
		}
		else
		{
			for(int i=0;i<N;i++){
				int count = 0;
				while(i+1<N&&a[i]==a[i+1]&&i<N){
					i++;
					count++;
				}
				res_min+=count*(count+1)/2;
			}
		}
		int Min = a[0],Max = a[N-1];
		int M_C = 0;
		int N_C = 0;
		for(int i=0;i<N;i++)
		{
			if(a[i]==Min) M_C++;
			if(a[i]==Max) N_C++;

		}

		cout<<res_min<<" "<<M_C*N_C<<endl;
		m.clear();
		a.clear();

	}
	return 0;
}