#include<iostream>

using namespace std;

int main()
{
	int i=0;
//	double* dp=&i;//非法.类型不一致
	
//	int *ip=i;//非法。把int变量赋值给指针是错误的，即使int变量的值恰好等于0页不行
	int *p=&i;//合法 
	
	cout<<i<<" "<<*p<<" "<<p<<endl;
	
	return 0;
 } 
