#include<iostream>

using namespace std;
int _=3.14;//可以这么定义 以下划线开始 
int main()
{
	int j;
	//int catch-22;//不能这么定义
	//int 1_or_2=1; //变量以字母或下划线开始。不能以数字开始
	double Double=3.14; //可以这么定义。以大写字母开始
//	int double=3.14; //不能这么定义。 
	j=0;
	cout<<j<<endl;
	cout<<_<<endl;
	cout<<Double<<endl;
	return 0;
}
