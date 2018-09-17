#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
	// write code here
	int temp = 0;

	for(int i=0;i<n/2;i++){
		for(int j = i;j<n-i-1;j++){

			int temp = mat[i][j];
			mat[i][j] = mat[n-j-1][i];
			mat[n-j-1][i] = mat[n-i-1][n-j-1];
			mat[n-i-1][n-j-1] = mat[j][n-i-1];
			mat[j][n-i-1] = temp;

		}

	}

	return mat;
}
int main(){
	//int i = 1;
	vector<vector<int>> mat;
	vector<int> temp;
	for(int i=1;i<=9;i++){
		temp.push_back(i);
		if(i%3==0){
			mat.push_back(temp);
			temp.clear();
		}
	}
	vector<vector<int>> res = transformImage(mat,3);

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}

	
}