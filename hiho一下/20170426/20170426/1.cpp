#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

/*请完成下面这个函数，实现题目要求的功能*/
/*当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ */
/******************************开始写代码******************************/
double StockGod(int n, int m, double p, const vector<vector<double>>& prices)
{
	double result = 1.0;
	int last_max_j = 0;
	for(int i=1;i<m;i++){
		int max = 0;	
		int max_j = 0;
		int j = 0;
		double temp;
		for(j = 0;j<n;j++){
			temp = result/prices[i-1][j]*(prices[i][j]-prices[i-1][j]);
			if(temp>max){
				max = temp;
				max_j = j;
			}
		}
		if(max==0){
			last_max_j = 0;
			continue;
		}
		if(max_j==last_max_j){
			double t = (result/(1-p)+prices[i][max_j]-prices[i-1][max_j]);
			result = t*(1-p);
		}
		else{
			result = (result+temp)*(1-p);
			last_max_j = max_j;
		}

	}
	return result;

}
/******************************结束写代码******************************/


int main()
{
	int n = 0;
	int m = 0;
	double p = 0;
	cin >> n >> m >> p;

	vector<vector<double>> prices;
	for(int i = 0; i < m; ++i) {
		prices.push_back(vector<double>());
		for(int j = 0; j < n; ++j) {
			double x = 0;
			cin >> x;
			prices.back().push_back(x);
		}
	}

	double final = StockGod(n, m, p, prices);
	printf("%.1f\n", final);

	return 0;
}