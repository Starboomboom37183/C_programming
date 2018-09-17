#include<iostream>
#include<cctype>
using namespace std;
class String{
	char *m_data;
public:
	String(const char *str);
	String(const String &s);
	~String();
	String & operator =(const String &other);
};

String::String(const char *str){
	if(str==NULL){
		m_data = new char[1];
		m_data[1] = '\0';
	}
	else{

		int len = strlen(str);
		m_data= new char[len+1];

		strcpy(m_data,str);

	}

}
String::~String(){
	delete []m_data;
};
String::String(const String &s){
	int len = strlen(s.m_data);
	m_data = new char[len+1];
	strcpy(m_data,s.m_data);
}

String &String::operator=(const String &other){
	if(this==&other) return *this;
	delete []m_data;
	int len = strlen(other.m_data);
	m_data = new char[len+1];
	strcpy(m_data,other.m_data);
	return *this;
}