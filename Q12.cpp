#include<iostream>
using namespace std;

int main(){
	
	int x=4;
	int y=2;
	int z;
	
	z=x++ * --y + ++x;
	
	cout<<x<<" "<<y<<" "<<z;
}
