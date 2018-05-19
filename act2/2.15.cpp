#include<iostream>

using namespace std;



int main()
{int ival=1.01;//合法

//int &rval1=1.01;//不合法。引用的类型的初始值必须是一个对象
int &rval2=ival;//合法
//int &rval3;//不合法。引用必须初始化 
	
cout<<rval2<<endl;	
	return 0;
}
