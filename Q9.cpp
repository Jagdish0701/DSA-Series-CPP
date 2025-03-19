#include<iostream>
using namespace std;

int main(){
	
	char ch;
	
	
	cout<<"enter any character: ";
	cin>>ch;
	
	int a=(int)ch;
	
	
	
	if(a>=48 && a<=57){
			cout<<ch<<" is a digit character"<<endl;
		}
	else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=123 && a<=127) ){
		cout<<ch<<" is a special character"<<endl;
		}
	else{
		cout<<ch<<" is a alphabetic character"<<endl;
	}
}
