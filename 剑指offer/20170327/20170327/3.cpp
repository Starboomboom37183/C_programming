//#include<iostream>
//using namespace std;
//int main(){
//	int N;
//	cin>>N;
//	int *a = new int[N];
//	for(int i=0;i<N;i++){
//		cin>>a[i];
//	}
//	int count = 0;
//	for(int i=0;i<N-2;i++){
//		for(int j=i+1;j<N-1;j++){
//			for(int k =j+1;k<N;k++){
//				if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i]){
//					//cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
//					count++;
//				}
//			}
//		}
//	}
//
//	cout<<count<<endl;
//	return 0;
//}