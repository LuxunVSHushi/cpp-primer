#include <iostream>

using namespace std;

int main()
{
	int i, *p;//i��������Ĭ�ϸ�ֵΪ0 
	p=&i;
	if(p)
	cout<<"hello"<<endl;
	
	if(*p)   //*p=i��Ҳ����0.�������if�жϲ�����������ִ�� 
	cout<<"world!"<<endl;
	
	return 0;
}
