#include<iostream>
using namespace std;

int main(){
	
	int choice;
	
	cout<<"enter choice"<<endl;
	cin>>choice;
	
	cout<<"1. cm to ft"<<endl<<"2. km to miles"<<endl<<"3. USD to INR"<<endl<<"4.exit"<<endl;
	
	switch(choice){
		case 1:{
			float cm,ft;
			cout<<"enter the length of cm: ";
			cin>>cm;
			
			ft=cm/30.48;
			cout<<"fit is: "<<ft;
			
			break;
		}
		
		case 2:{
			float km,miles;
			cout<<"enter km: ";
			cin>>km;
			
			miles=km/1.609;
			cout<<"miles is: "<<miles<<endl;
			
			break;
		}
		
		case 3:{
			float USD,INR;
			cout<<"enter USD: ";
			cin>>USD;
			
			INR=USD*86.95;
			cout<<"INR is: "<<INR<<endl;
			
			break;
		}
		
		default:{
			
			break;
		}
	}
	
	
}
