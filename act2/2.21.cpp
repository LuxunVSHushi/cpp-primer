#include<iostream>

using namespace std;

int main()
{
	int i=0;
//	double* dp=&i;//�Ƿ�.���Ͳ�һ��
	
//	int *ip=i;//�Ƿ�����int������ֵ��ָ���Ǵ���ģ���ʹint������ֵǡ�õ���0ҳ����
	int *p=&i;//�Ϸ� 
	
	cout<<i<<" "<<*p<<" "<<p<<endl;
	
	return 0;
 } 
