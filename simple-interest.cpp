#include<iostream>
using namespace std;

int main(){
	
	int p,r,t;
	
	cout<<"enter principal: ";
	cin>>p;
	
	cout<<"enter rate: ";
	cin>>r;
	
	cout<<"enter time: ";
	cin>>t;
	
	int si=p*r*t/100;
	
	cout<<"simple interest is: "<<si<<endl;
}
