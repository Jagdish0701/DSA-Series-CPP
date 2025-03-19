#include<iostream>
using namespace std;

int main(){
	
	char ch;
	cout<<"enter letter in small case: ";
	cin>>ch;
	
	int ch1=(int)ch;
	
	if(ch1>=97 && ch1<=122){
		
		ch1=ch1-32;
		
	}
	
	char ch2=(char)ch1;
	cout<<ch2;
	
	
	return 0;
	
}
