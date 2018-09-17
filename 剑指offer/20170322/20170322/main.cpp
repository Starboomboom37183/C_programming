#include<iostream>
#include<stack>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x=0) : val(x), next(NULL) {}
}; 


bool isPalindrome(ListNode* pHead) {
		// write code here
		if(pHead==NULL||pHead->next==NULL) return true;

		ListNode *p = pHead;
		ListNode *pp = pHead;
		stack<int> s;
		while(pp!=NULL&&pp->next!=NULL){
			s.push(p->val);
			p = p->next;

			pp = pp->next->next;
		}
		if(pp!=NULL)
			p = p->next;
		while(p!=NULL){
			int t = s.top();
			s.pop();
			if(p->val!=t) return false;
			p = p->next;
		}

		return true;
}
int main(){
	int n;
	cin>>n;
	ListNode *head = new ListNode(0);
	ListNode *q = head;
	for(int i=0;i<n;i++){
		ListNode *p = new ListNode();
		cin>>p->val;
		if(head->next==NULL){
			head->next = p;
			q = p;
		}
		else
		{
			q->next = p;
			q  = p;
		}

	}

	if(isPalindrome(head->next)) cout<<"yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}