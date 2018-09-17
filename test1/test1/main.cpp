#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]>='A'&&s[i]<='Z'){
				if(i==s.size()-1) continue;
				else
				{
					int j = i+1;
					while(j<s.size()&&s[j]>='a'&&s[j]<='z')
					{
						swap(s[i],s[j]);
						i++;
						j++;
					}
				}
			}
		}

		cout<<s;
	}

	return 0;
}