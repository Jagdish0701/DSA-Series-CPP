#include<iostream>
using namespace std;

int main(){
	
	int x,y,z;
	
	cout<<"sides of triangle: "<<endl;
	
	cout<<"x is:";
	cin>>x;
	
	cout<<"y is:";
	cin>>y;
	
	cout<<"z is:";
	cin>>z;
	
	if(x==y && y==z){
		cout<<"Equilateral Triangle"<<endl;
	}
	else if(x==y || y==z || z==x){
		
		cout<<"Isosceles Triangle"<<endl;
		
	}
	else{
		cout<<"Scalene Triangle";
	}
}
