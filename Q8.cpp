#include<iostream>
using namespace std;

int main(){
	
	int x1,x2,x3,y1,y2,y3;
	
	cout<<"three points are: "<<endl;
	
	cout<<"x1 is: ";
	cin>>x1;
	
	cout<<"y1 is: ";
	cin>>y1;
	
	cout<<"x2 is: ";
	cin>>x2;
	
	cout<<"y2 is: ";
	cin>>y2;
	
	cout<<"x3 is: ";
	cin>>x3;
	
	cout<<"y3 is: ";
	cin>>y3;
	
	int s1=(y2-y1)/(x2-x1);
	int s2=(y3-y2)/(x3-x2);
	
	if(s1==s2){
	 cout<<"points are fall on one straight line"<<endl;	
	}
	else{
		
		cout<<"points are fall on different line"<<endl;
		
	}
	
}
