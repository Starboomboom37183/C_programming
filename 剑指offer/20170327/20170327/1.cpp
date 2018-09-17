//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main(){
//	string s1,s2;
//	getline(cin,s1);
//	getline(cin,s2);
//	int m = s1.size();
//	int n = s2.size();
//	int **dp = new int*[m];
//	for(int i=0;i<m;i++){
//		dp[i] = new int[n]();
//	}
//	int max = 0;
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			if(s1[i]==s2[j]){
//				if(i==0||j==0) dp[i][j] = 1;
//				else dp[i][j] = dp[i-1][j-1]+1;
//
//				if(dp[i][j]>max) max = dp[i][j];
//			}
//		}
//		
//	}
//
//
//	cout<<max<<endl;
//}