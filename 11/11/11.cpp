#include<iostream>
#include<vector>
#include<map> 
#include<string> 
#include<set>
#include<stdlib.h>
using namespace std;
int main()
{
	
	string s;
	cin>>s;
	int k1 = 0;
	map<char,int> para;
	while(k1<s.size())
	{
		if(s[k1]==':')
		{
			para[s[k1-1]] = 1;		
		}
		else
		{
			para[s[k1]] = 0;
		}
		
		k1++;	
	}
	
	int n;
	cin>>n;
	cin.get();//为了解决getline一开始多读入一个空行，长知识了 
	vector<string> res;
	
	for(int i=0;i<n;i++)
	{
		string s1;
		getline(cin,s1);
		//cout<<s1<<endl;
		vector<string> re;

		int x1=0;
		int x2=0;
		string temp = "";

		while(x2<s1.size())
		{
			if(s1[x2]==' ')
			{

				temp = s1.substr(x1,x2-x1);
				re.push_back(temp);
				
				x1 = x2+1;
				 
			}
			x2++;
		} 
		temp = s1.substr(x1,x2-x1);
		re.push_back(temp);
		
		
		set<char> h;
		for(int m1=0;m1<re.size();m1++)
		{
			//cout<<re[m1]<<endl;
			if(re[m1]=="ls")
			{
				if(re.size()==1) break;
				else
				{
					continue;
				}
			}
			
			if(re[m1][0]=='-')
			{
				
				if(para.find(re[m1][1])!=para.end())//是参数 
				{
					if(para[re[m1][1]]>0)//带参数
					{
						h.insert(re[m1][1]);
						int t = m1+1;
						para[re[m1][1]] = atoi(re[t].c_str());
						m1 = t;
						
						
					}
					else//不带参数 
					{
						h.insert(re[m1][1]);
					 } 
				}
				else
				{
					break;
				 } 
			}
			else
			{
				break;
			}
		 } 
		//cout<<"size =  "<<h.size()<<endl;
		
		//cout<<"Case "<<i+1<<": ";
		string s_res = "";
		s_res+="Case ";
		//string t = to_string(i+1);
		//s_res+=t;
		s_res+=": ";
		for(set<char>::iterator it = h.begin();it!=h.end();it++)
		{
			if(para[*it]==0)
			{
				//cout<<"-"<<*it<<' ';
				s_res+="-";
				s_res+=*it;
				s_res+=' ';
				
			}
			else
			{
				//cout<<"-"<<*it<<' '<<para[*it]<<' ';
				s_res+="-";
				s_res+=*it;
				s_res+=' ';
				//s_res+=to_string(para[*it]);
				s_res+=' ';
			}
		 } 
		 res.push_back(s_res);
		 //cout<<endl;
		 re.clear();
		 h.clear();
		
	}
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}