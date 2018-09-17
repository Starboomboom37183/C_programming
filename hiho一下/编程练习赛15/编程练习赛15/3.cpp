//#include<iostream>
//using namespace std;
//#define size 1000
//int main(){
//	int N,M,Q;
//	cin>>N>>M>>Q;
//	int **G = new int *[N];
//	for(int i=0;i<N;i++){
//		G[i] = new int[N];
//	}
//
//	for(int i=0;i<N;i++){
//		for(int j=0;j<N;j++){
//			G[i][j] = 10000;
//		}
//	}
//	int x,y,s;
//	for(int i=0;i<M;i++){
//		cin>>x>>y>>s;
//		G[x-1][y-1] = s;
//		G[y-1][x-1] = 0-s;
//	}
//	for(int i=0;i<N;i++){
//		for(int j = 0;j<N;j++){
//			if(G[i][j]!=10000){
//				for(int k = 0;k<N;k++){
//					if(G[j][k]!=10000){
//						G[i][k] = G[i][j]+G[j][k];
//					}
//				}
//			}
//		}
//	}
//
//	for(int i=0;i<Q;i++){
//		cin>>x>>y;
//		if(G[x-1][y-1]==10000) cout<<-1<<endl;
//		else{
//			cout<<G[x-1][y-1]<<endl;
//		}
//	}
//	return 0;
//}