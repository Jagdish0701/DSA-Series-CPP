#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int h,m;
	
	cout<<"enter hour: ";
	cin>>h;
	
	cout<<"enter minute: ";
	cin>>m;
	
	int hour_angle=h*30;
	int minute_angle=m*6;
	
	int diff=abs(hour_angle-minute_angle);
	
	if(diff>180){
		diff=360-diff;
	}
	
	cout<<"minimun angle is: "<<diff;
	
	return 0;
	
	
}
