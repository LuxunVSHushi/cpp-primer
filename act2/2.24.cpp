#include<iostream>

using namespace std;

int main()
{
	int i=42;
	int*p2=&i;
	void *p=&i;//�Ϸ�����Ϊvoid*���Դ���������ĵ�ַ
//	long *ip=&i;//�Ƿ�����Ϊ���Ͳ�һ��
	int *p3=static_cast<int*>(p);//ǿ������ת�����ҵ�void*�еĵ�ַ��Ϣ�� 
	cout<<*p3<<endl;
	cout<<i<<"  "<<p<<"  "<<static_cast<int*>(p)<<"  "<<p2<<endl; 
	
	//������*p3=i;p2= static_cast<int*>(p)
	
	return 0;
 } 
