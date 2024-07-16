#include<iostream>
using namespace std;
void swap(int *x,int *y){
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
int main(){
	int a,b;
	a=4;
	b=6;

	swap(&a,&b);
	cout<<"the values of a and b "<<a<<" "<<b;
	return 0;
}
