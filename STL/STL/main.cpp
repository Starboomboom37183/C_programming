#include <iostream>
#include <vector>
#include <numeric>
#include<limits>
#include <algorithm>
#include <cassert>
#include <numeric>
#include<limits>
#include <string>
using namespace std;

/** 请完成下面这个函数，实现题目要求的功能 **/
int to_int(string s)
{
	int sum = 0;
	for(int i=0;i<s.size();i++)
	{
		sum = sum*10;

		sum+=s[i]-'0';	

	}

	return sum;
}
vector <string> parseValidateIp(string inputStr) {
	vector<string> res;
	int len = inputStr.size();
	for(int i=0;i<=2&&i<len-3;i++)
	{
		string s1 = inputStr.substr(0,i+1);
		if(s1=="10") continue;
		if(to_int(s1)>255) continue;

		for(int j =i+1;j<=i+3&&j<len-2;j++)
		{
			string s2 = inputStr.substr(i+1,j-i);
			//cout<<s2<<endl;
			if(s1=="172"&&to_int(s2)>=16&&to_int(s2)<=31) continue;
			if(s1=="192"&&s2=="168") continue;
			if(to_int(s2)>255) continue;
			for(int k=j+1;k<=j+3&&k<len-1;k++)
			{

				
				if(len-k-1>0&&len-k-1<=3)
				{

					
					string s3 = inputStr.substr(j+1,k-j);
					string s4 = inputStr.substr(k+1,len-k-1);
					if(to_int(s3)>255||to_int(s4)>255) continue;
					string s = s1+"."+s2+"."+s3+"."+s4;
					res.push_back(s);
				}
				
			}
		}

	}

 	return res;
}

int main() {
	vector <string> res;

	string _inputStr;
	getline(cin,_inputStr);
	//cout<<_inputStr<<endl;
	res = parseValidateIp(_inputStr);
	for(int res_i=0; res_i < res.size(); res_i++) {
		cout<< res[res_i] << endl;;
	}

	return 0;

}