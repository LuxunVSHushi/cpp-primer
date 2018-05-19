#include<iostream>

using namespace std;

int main()
{  int i=8,*p;
p=&i;
cout<<i<<"  "<<p<<endl;
(*p)++;    //改变指针所指对象的值。*p要加括号才能表示指针指向的数执行++操作。 
cout<<i<<"  "<<p<<endl;
p++;       //改变指针的值 
cout<<i<<"  "<<p<<endl;	
	
	
	return 0;
 } 
