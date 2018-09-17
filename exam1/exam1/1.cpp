#include<iostream>
#include<vector>
#include<string>
using namespace std;
long long C(int m,int n)
{
	long long a = 1;
	long long b = 1;
	for(int i=1;i<=n;i++)
	{
		a = a*(m-i+1);
		b = b*i;

	}
	return a/b;
}
int main()
{
	int n;
	cin>>n;
	long long sum = 0;
	cout<<"haha"<<n<<endl;
	for(int i=1;i<n-2;i++)
	{
		cout<<i<<endl;
		//sum+=(i*C(n-1,n-i-2)*(n-i-2))%1000000007;
		//sum = sum%1000000007;
	}
	cout<<sum;
	return 0;

}

/***
	string s;
	string s;
	cin>>s;
	int a[10];
	int sum = 0;
	int count = 1;
	for(int i=0;i<s.size()-1;++i)
	{
		if(s[i]=='-')
			continue;
		else
		{
			a[count-1] = s[i]-'0';
			sum += a[count-1]*count;
			count++;
		}
	}
	a[9] = s[s.size()-1]-'0';
	int res = sum%11;
	char c = (res==10)?'X':(res+'0');
	if(a[9]==res)
		cout<<"Right";

	else
	{

                s[12] = c;
                cout<<s;

	}

    return 0;
***/