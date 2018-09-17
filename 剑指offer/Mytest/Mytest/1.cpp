#include<iostream>
#include<memory>
using namespace std;
int main(){
	
	auto_ptr<int> p;//默认是未绑定过的
	//*p = 1024;
	if(p.get())
		*p = 1024;

	//cout<<*p<<endl;


	
}