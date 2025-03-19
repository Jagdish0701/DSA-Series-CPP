#include<iostream>
using namespace std;

int main(){
	
	int l,b;
	
	cout<<"enter length: ";
	cin>>l;
	
	cout<<"enter breadth: ";
	cin>>b;
	
	int area=(l*b);
	int perim=(2*l+2*b);
	
	cout<<"area of rectangle is: "<<area<<endl;
	cout<<"perimeter of rectangle is: "<<perim<<endl;
}
