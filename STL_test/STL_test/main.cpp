#include<algorithm>
#include <vector>
#include<queue>
#include<iostream>
#include<map>
#include<stack>
#include<random>
using namespace std;
struct TreeNode{
	TreeNode *left;
	TreeNode *right;
	int data;
	TreeNode(int i):left(NULL),right(NULL){
		data = i;
	}

};
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
int getHeight(TreeNode *root){
	if(root==NULL) return 0;
	int h1= getHeight(root->left);
	int h2 = getHeight(root->right);
	if(h1==-1||h2==-1) return -1;
	if(abs(h1-h2)>1) return -1;//²»Æ½ºâ
	else{
		return 1+max(h1,h2);
	}
}

TreeNode *createTree(int a[],int len,int index)
{
	TreeNode *root = NULL;

	if(index<len)
	{
		root = new TreeNode(a[index]);
		root->left = createTree(a,len,2*index+1);
		root->right = createTree(a,len,2*index+2);

	}
	return root;

}

void PreOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		PreOrder(root->left);
		PreOrder(root->right);
	}

}

void MidOrder(TreeNode *root)
{

	if(root!=NULL)
	{
		MidOrder(root->left);
		cout<<root->data<<" ";
		MidOrder(root->right);
	}
}

void PreOrder_Non(TreeNode *root)
{

	stack<TreeNode *> s;
	s.push(root);
	while(!s.empty())
	{
		TreeNode* temp = s.top();
		s.pop();
		while(temp!=NULL)
		{

			cout<<temp->data<<" ";
			s.push(temp->right);
			temp = temp->left;
		}


	}
}
void midOrder_non(TreeNode *root)
{

	stack<TreeNode *> s;
	TreeNode *p = root;
	while(p!=NULL||!s.empty())
	{
		while(p!=NULL)
		{
			s.push(p);
			p = p->left;
		}
		if(!s.empty())
		{
			p = s.top();
			cout<<p->data<<" ";
			s.pop();


			p = p->right;


		}
	}
}

TreeNode *createBSTree(int a[],int start,int lastindex)
{
	TreeNode *root = NULL;
	if(start<=lastindex)
	{
		int mid = (start+lastindex)/2;
		root = new TreeNode(a[mid]);
		root->left = createBSTree(a,start,mid-1);
		root->right = createBSTree(a,mid+1,lastindex);
	}
	return root;

}

int BS(int a[],int x,int start,int end)
{
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid]<x){
			start = mid +1;
		}
		else{
			end = mid -1;
		}
	}
	return -1;
}


void get(TreeNode *root,int dep,ListNode* &list){
	if(root==NULL||dep<=0) return;
	if(dep==1){
		ListNode *l = new ListNode(root->data);
		list->next = l;
		list = list->next;
	}
	else{
		//dep  = dep-1;
		get(root->left,dep-1,list);
		cout<<"show list "<<list->val<<endl;
		get(root->right,dep-1,list);
		cout<<"show list "<<list->val<<endl;
	}
}
ListNode* getTreeLevel(TreeNode* root, int dep) {
	// write code here
	if(root==NULL||dep==0) return NULL;
	ListNode *list = new ListNode(-1);
	ListNode *listHead = list;
	get(root,dep,list);
	return listHead->next;
}

bool checkBST(TreeNode* root) {

	// write code here
	if(root==NULL) return true;
	if(root->left==NULL&&root->right==NULL) return true;
	if(root->left==NULL&&root->right!=NULL) return (root->right->data>=root->data)&&checkBST(root->right);
	if(root->left!=NULL&&root->right==NULL) return (root->left->data<=root->data)&&checkBST(root->left);
	if(root->left!=NULL&&root->right!=NULL){
		return (root->right->data>=root->data)&&(root->left->data<=root->data)&&checkBST(root->right)&&checkBST(root->left);
	}

	return false;
}

void  printTree(vector<int> &res,TreeNode *root,int level){
	if(root==NULL) return;
	if(root->left!=NULL)
	{
		res.push_back(root->left->data);
		cout<<root->left->data<<" ";
	}
	if(root->right!=NULL)
	{
		res.push_back(root->right->data);
		cout<<root->right->data;
	}
	cout<<endl;
	cout<<"level "<<level<<endl;
	printTree(res,root->left,level+1);
	printTree(res,root->right,level+1);
}
vector<int> PrintFromTopToBottom(TreeNode* root) {
	vector<int> res;
	if(root==NULL) return res;
	res.push_back(root->data);
	printTree(res,root,1);
	return res;
}
int main()
{
	int a[8] = {1,2,3,4,5,6,7,8};

	//TreeNode *r = createBSTree(a,0,7);
	TreeNode *r = createTree(a,8,0);
	//TreeNode *r =createTree(a,10,0);
	PreOrder(r);
	cout<<endl;
	//midOrder_non(r);
	//cout<<endl;
	//MidOrder(r);
	//PreOrder_Non(r);
	
	//cout<<endl;
	//cout<<"height "<<getHeight(r)<<endl;

	/*int dep = 2;
	ListNode *head = getTreeLevel(r,dep);
	while(head!=NULL){
		cout<<head->val<<" ";
		head = head->next;
	}*/
	vector<int> res;
	res = PrintFromTopToBottom(r);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}
