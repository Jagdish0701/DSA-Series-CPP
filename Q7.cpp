#include<iostream>
using namespace std;

int main(){
	
	int x,y;
	
	cout<<"enter x point: ";
	cin>>x;
	
	cout<<"enter y point: ";
	cin>>y;
	
	if(x==0 && y==0){
		cout<<"point lie on the origin"<<endl;
	}
	else if(x!=0 && y==0){
		cout<<"point lie on the x-axis"<<endl;
		
	}
	else if(x==0 && y!=0){
		cout<<"point lie on the y-axis"<<endl;
	}
	else if(x!=0 && y!=0){
		cout<<"point lie on the plane "<<endl;
	}
	
	
}
