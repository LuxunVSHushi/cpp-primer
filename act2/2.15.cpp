#include<iostream>

using namespace std;



int main()
{int ival=1.01;//�Ϸ�

//int &rval1=1.01;//���Ϸ������õ����͵ĳ�ʼֵ������һ������
int &rval2=ival;//�Ϸ�
//int &rval3;//���Ϸ������ñ����ʼ�� 
	
cout<<rval2<<endl;	
	return 0;
}
