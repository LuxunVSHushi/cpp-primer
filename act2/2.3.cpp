#include<iostream>
using namespace std;

int main()
{  unsigned u=10,u2=42;
cout<<u2-u<<endl;//输出32 
cout<<u-u2<<endl;//输出的是一个大于0的模
int i=10,i2=42;
cout<<i2-i<<endl;//输出32
cout<<i-i2<<endl;//输出-32
cout<<i-u<<endl;//输出0
cout<<u-i<<endl;//输出0	
	
	
	return 0;
}
