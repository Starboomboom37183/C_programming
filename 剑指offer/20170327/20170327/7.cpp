#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char s[51];
	int X, N, M, n[21] = { 0 }, m[21] = { 0 }, dp[501][501] = { 0 };   
	cin >> X >> N >> M;
	for (int i = 1; i <= X; i++){
		cin >> s;
		for (int j = 0; j < strlen(s); j++){
			if (s[j] == '0')
				n[i]++;
			else
				m[i]++;
		}
	}
	//解释一下为何逆序
	for (int i = 1; i <= X; i++) 
		for (int j = N; j >= n[i]; j--)
			for (int k = M; k >= m[i]; k--)
				dp[j][k] = max(dp[j][k], dp[j - n[i]][k - m[i]] + 1);
	//二维背包，使用动态规划求dp数组
	cout << dp[N][M];
	return 0;
}
