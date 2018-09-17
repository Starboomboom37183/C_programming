//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//struct Node{
//	bool flag;
//	int  no;
//	Node(bool a,int b):flag(true),no(0){
//		flag = a;
//		no = b;
//	}
//};
//int to_int(const string &s){
//	int sum = 0;
//	for(int i=0;i<s.size();i++){
//		sum*=10;
//		sum+=s[i]-'0';
//	}
//	return sum;
//}
//int main(){
//	vector<vector<Node> > no;//²Ù×÷Êý
//	vector<vector<int> > op;//²Ù×÷·ûºÅ
//	int N;
//	cin>>N;
//	string s;
//	int K_count = 0;
//	bool flag[26] = {false};
//	for(int i=0;i<N;i++){
//		cin>>s;
//		vector<Node > temp;
//		vector<int> sop;
//		int start = 0;
//		for(int k = 0;k<s.size();k++){
//			if(s[k]>='A'&&s[k]<='Z'){
//				 if(!flag[s[k]-'A']){
//					 K_count++;
//					 flag[s[k]-'A'] = true;
//				 }
//				 Node a(false,s[k]-'A');
//				 temp.push_back(a);
//			}
//			else if(s[k]=='<'){
//				if(s[++k]=='=')
//					sop.push_back(2);
//				else
//					sop.push_back(1);
//				k--;
//			}
//			else if(s[k]=='=') continue;
//			else if(s[k]>='0'&&s[k]<='9'){
//				start = k;
//				while(k<s.size()&&s[k]>='0'&&s[k]<='9'){
//					k++;
//				}
//				string s1 = s.substr(start,k-start);
//				Node a1(true,to_int(s1));
//				temp.push_back(a1);
//				//cout<<s1<<endl;
//				k--;
//			}
//
//
//		}
//
//		no.push_back(temp);
//		op.push_back(sop);
//		temp.clear();
//		sop.clear();
//	}
//
//	int M;
//	cin>>M;
//	char c;
//	int t;
//	//cout<<K_count<<endl;
//	
//	for(int i=0;i<M;i++){
//		int char_to_int[26] = {0};
//		for(int j=0;j<K_count;j++){
//			cin>>c;
//			cin>>t;
//			char_to_int[c-'A'] = t;
//		}
//		bool flag_b = false;
//		for(int k1 = 0;k1<no.size();k1++){
//			for(int k2 = 0;k2<no[k1].size()-1;k2++){
//				int a1 = 0;
//				int a2 = 0;
//				a1 = (no[k1][k2].flag==true)?no[k1][k2].no:char_to_int[no[k1][k2].no];
//				a2 = (no[k1][k2+1].flag==true)?no[k1][k2+1].no:char_to_int[no[k1][k2+1].no];
//				if(op[k1][k2]==1){
//					if(a1>=a2){
//						flag_b = true;
//						break;
//					}
//				}
//				else if(op[k1][k2]==2){
//					if(a1>a2){
//						flag_b = true;
//						break;
//					}
//				}
//			}
//			if(flag_b) break;
//		}
//		if(flag_b) cout<<"No"<<endl;
//		else
//			cout<<"Yes"<<endl;
//
//	}
//	return 0;
//}