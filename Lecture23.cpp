//this lecture explains about memory utilization and comparing address types based on data type in form of hexadecimal
#include<iostream>
using namespace std;
int main(){
	int a=5;
	int *b;
	b=&a;
	cout<<"the address of b is stored in b "<<b<<" "<<b+1;
}
