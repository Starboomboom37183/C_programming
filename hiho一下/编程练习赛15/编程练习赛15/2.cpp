#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
#define SIZE 1000
struct EdgeNode{
	int adjvex;
	int weight;//±ßÈ¨Öµ
	EdgeNode *next;
};

struct Vertex{
	int data;
	EdgeNode *FirstEdge;
};

struct Graph{
	Vertex G[SIZE];
	int iVexNum;
	int iEdggNum;
};

int main(){
	int N,M,Q;
	cin>>N>>M>>Q;
	int x,y,s;
	Graph gGraph;
	for(int i=0;i<M;i++){
		cin>>x>>y>>s;
		EdgeNode *p = new EdgeNode;
		p->adjvex = y;
		p->weight = s;
		p->next = gGraph.G[x].FirstEdge;
		gGraph.G[x].FirstEdge  = p;
	}
	bool *visit = new bool[N+1];
	for(int i=0;i<Q;i++){
		cin>>x>>y;
		for(int k=0;k<N;k++){
			visit[k] = false;
		}
		queue<int> q;
		q.push(x);
		bool flag = false;
		while(!q.empty()){
			int no = q.front();
			q.pop();
			visit[no] =true;

			EdgeNode *temp = gGraph.G[no].FirstEdge;
			while(temp!=NULL){
				if(!visit[temp->adjvex]){
					if(temp->adjvex==y){
						flag = true;
						break;
					}
					else{
						q.push(temp->adjvex);
					}
				}
			}
		}
	}


}