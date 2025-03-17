#include<iostream>
using namespace std;

int main(){
	
	int n1,n2,d1,d2;
	
	cout<<"n1 is: ";
	cin>>n1;
	
	cout<<"d1 is: ";
	cin>>d1;
	
	cout<<"n2 is: ";
	cin>>n2;
	
	cout<<"d2 is: ";
	cin>>d2;
	
	cout<<"fraction1 is: "<<n1<<"/"<<d1<<endl;
	cout<<"fraction2 is: "<<n2<<"/"<<d2<<endl;
	
	float sum=(float)(n1*d2+d1*n2)/(d1*d2);
	
	cout<<"sum of fraction1 and fraction2 is: "<<sum;
	
	
	
}
