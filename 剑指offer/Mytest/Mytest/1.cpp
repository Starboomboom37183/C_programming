#include<iostream>
#include<memory>
using namespace std;
int main(){
	
	auto_ptr<int> p;//Ĭ����δ�󶨹���
	//*p = 1024;
	if(p.get())
		*p = 1024;

	//cout<<*p<<endl;


	
}