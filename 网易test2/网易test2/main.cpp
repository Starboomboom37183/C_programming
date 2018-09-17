#include<iostream>
using namespace std;
void scan(int **a,int N,int M,int first[]){
	
	for(int i=0;i<N-2;i++){
		for(int j=0;j<M-2;j++){
			int sum = 0;
			for(int m=i;m<i+3&&m<N;m++){
				for(int n=j;n<j+3&&n<M;n++){
					if(a[m][n]>0){
						sum++;
					}
				}
			}

			if(sum>first[0]){
				first[0] = sum;
				first[1] = i;
				first[2] = j;
			}
		}
	}
}
int main(){
	int N,M,K;
	while(cin>>N>>M>>K){


		if(N<3) N =3;
		if(M<3) M = 3;
		int **a = new int*[N];
		for(int i=0;i<N;i++){
			a[i]= new int[M]();
		}
		int x,y;
		for(int i=0;i<K;i++){
			cin>>x>>y;
			a[x-1][y-1]++;
		}


		int first[3] = {0,0,0};
		int second[3] ={0,0,0};

		scan(a,N,M,first);

		for(int i = first[1];i<first[1]+3;i++){
			for(int j = first[2];j<first[2]+3;j++){
				a[i][j]--;
			}
		}

		scan(a,N,M,second);

		cout<<first[0]+second[0]<<endl;


	}


	return 0;
}