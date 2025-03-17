#include<iostream>
using namespace std;

int main(){
	
	int n;
	
	cout<<"enter the n number: ";
	cin>>n;
	
	int sum=(n*(n+1)*(2*n+1))/6;
	
	cout<<"sum of square of first "<<n<<" natural number is: "<<sum<<endl;
}
