#include<iostream>
using namespace std;
int main(){
	//declare array name : x
	int x[5];
	
	//input value to array x
	x[0]=10;
	x[1]=12;
	x[2]=20;
	x[3]=30;
	x[4]=50;
	
//	cout<<"x[0]="<<x[0]<<endl;
	for(int i=0;i<5;i++){
		cout<<"x["<<i<<"]="<<x[i]<<endl;
	}
	
	x[2]=40;
	x[4]=80;
	cout<<"After changed value"<<endl;
	for(int i=0;i<5;i++){
		cout<<"x["<<i<<"]="<<x[i]<<endl;
	}
	

	return(0);
}
