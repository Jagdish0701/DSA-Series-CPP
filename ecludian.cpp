#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int x1,x2,y1,y2;
	
	cout<<"enter value of x1: ";
	cin>>x1;
	
	cout<<"enter value of x2: ";
	cin>>x2;
	
	cout<<"enter value of y1: ";
	cin>>y1;
	
	cout<<"enter value of y2: ";
	cin>>y2;
	
	int distance=sqrt(((x2-x1)*(x2-x1))+(y2-y1)*(y2-y1));
	
	cout<<"distance is: "<<distance;
}
