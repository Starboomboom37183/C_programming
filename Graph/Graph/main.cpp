#include<iostream>
#include <queue>
#include<deque>
#include<string>
using namespace std;
#define  N 6
struct Node{
	int adj_weight;
	Node *next;
};


struct adj_list{
	int vertex;
	struct Node *first;
};

adj_list a[6];

struct adj_matrix{
	int vertex[N];
	int edges[N][N];
};
struct adj_matrix matrix = {  
	{1, 2, 3, 4, 5, 6},  

	{{0, 1, 0, 1, 0, 0},  
	{0, 0, 0, 0, 1, 0},  
	{0, 0, 0, 0, 1, 1},  
	{0, 1, 0, 0, 0, 0},  
	{0, 0, 0, 1, 0, 0},  
	{0, 0, 0, 0, 0, 1}}  
}; 
int visit[N] = {0,0,0,0,0,0};

void dfs_visit(adj_matrix *G,int u){
	visit[u] = 1;
	cout<<G->vertex[u]<<endl;
	for(int i=0;i<N;i++){
		if(G->edges[u][i]==1&&visit[i]!=1){
			dfs_visit(G,i);
		}
	}
}
void dfs(adj_matrix *G){
	int u;
	for(u=0;u<N;u++){
		if(!visit[u]){
			dfs_visit(G,u);
		}
	}
}
void bfs_visit(adj_matrix *G,int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x  =q.front();
		visit[x] =1;
		cout<<G->vertex[x]<<endl;
		q.pop();
		for(int i=0;i<N;i++){
			if(G->edges[x][i]==1&&visit[i]!=1){
				q.push(i);
			}
		}

	}

}
void bfs(adj_matrix *G){
	int u ;
	for(u=0;u<N;u++){
		if(!visit[u]){
			bfs_visit(G,u);
		}
	}
}


int main(){
	//dfs(&matrix); 
	//bfs(&matrix);
	//bfs_visit(&matrix,0);
	deque<int> d;
	string s;
	s = "D:\\Program Files (x86).\\KuGou\\.KGMusic.\\kugou.exe";
	cout<<s<<endl;
	int j = s.rfind('\\');
	cout<<j<<endl;
	int last = s.size();
	/*string sss= s.substr(j+1,last-j-1);
	cout<<sss<<endl;*/
	vector<string> res;
	
	while(j!=-1){
		cout<<j<<endl;
		string ss = s.substr(j+1,last-j-1);

		res.push_back(ss);
		//s.erase(j,last-j);
		last = j;
		j = s.rfind('\\',j-1);
	}
	res.push_back(s.substr(0,last));
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" "<<endl;
	}
	
	return 0;
}