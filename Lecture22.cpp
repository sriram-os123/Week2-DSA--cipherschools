#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"the address of a"<<&a<<endl;
	cout<<"the address of a"<<&b<<endl;
	a=1;
	b=4;
	int *p;
	int *q;
	p=&a;
	q=&b;
	cout<<*p+*q;

}
