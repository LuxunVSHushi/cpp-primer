#include <iostream>

using namespace std;

int main()
{
	int i, *p;//i被编译器默认赋值为0 
	p=&i;
	if(p)
	cout<<"hello"<<endl;
	
	if(*p)   //*p=i，也就是0.所有这个if判断不成立，不会执行 
	cout<<"world!"<<endl;
	
	return 0;
}
