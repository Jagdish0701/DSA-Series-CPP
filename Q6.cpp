#include<iostream>
using namespace std;

int main(){
	
	int p,c,m;
	
	cout<<"physics: ";
	cin>>p;
	
	cout<<"chemistry: ";
	cin>>c;
	
	cout<<"math: ";
	cin>>m;
	
	int total=(p+c+m);
	cout<<"total marks is: "<<total<<endl;
	
	float per=(float)(p+c+m)/3;
	cout<<"percentage is: "<<per<<endl;
	
	if(per>=60 && per<=100){
		cout<<"first divison"<<endl;
	}
	else if(per>=50 && per<60){
		cout<<"second divison"<<endl;
	}
	else if(per>=36 && per<50){
		cout<<"third division"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
}
