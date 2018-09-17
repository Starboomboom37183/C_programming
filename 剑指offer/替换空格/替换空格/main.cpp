#include<iostream>
#include <string>
using namespace std;
void replaceSpace(char *str,int length){
	int count = 0;
	for(int i=0;i<length;i++){
		if(str[i]==' ')  count++;
	}

	int new_length = length+2*count;
	str[new_length] = '\0';
	int j = new_length -1;
	for(int i = length-1;i>=0;i--){
		if(str[i]!=' '){
			str[j] = str[i];
			j--;
		}
		else{
			str[j] = '0';
			str[j-1] = '2';
			str[j-2] = '%';
			j = j-3;
		}
	}
}
int main(){
	char *c = new char[100];
		
	c ="hello world";
	cout<<c<<endl;
	cout<<strlen(c)<<endl;

	replaceSpace(c,11);
	//cout<<c<<endl;
}