#include<iostream>

using namespace std;

int main()
{
	int i=42;
	int*p2=&i;
	void *p=&i;//合法，因为void*可以存放任意对象的地址
//	long *ip=&i;//非法。因为类型不一致
	int *p3=static_cast<int*>(p);//强制类型转换。找到void*中的地址信息。 
	cout<<*p3<<endl;
	cout<<i<<"  "<<p<<"  "<<static_cast<int*>(p)<<"  "<<p2<<endl; 
	
	//输出结果*p3=i;p2= static_cast<int*>(p)
	
	return 0;
 } 
