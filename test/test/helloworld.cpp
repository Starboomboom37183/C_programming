#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cout<<"hello,world !"<<endl;
	vector<int> a(10,0);
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<endl;
	}

	for(auto it = a.begin();it!=a.end();it++)
	{
		cout<<*it<<endl;
	}

	return 0;
}