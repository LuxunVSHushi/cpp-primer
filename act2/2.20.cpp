#include<iostream>

using namespace std;

int main()
{
	int i=42;
	int *p1=&i;
	cout<<p1<<"  "<<42*42<<endl;
	*p1=*p1**p1; //写的真个性。两个**号连着 
	cout<<i<<"  "<<*p1<<" "<<p1<<endl;	
	
	return 0;
}
