#include<iostream>

using namespace std;

int main()
{  int i=8,*p;
p=&i;
cout<<i<<"  "<<p<<endl;
(*p)++;    //�ı�ָ����ָ�����ֵ��*pҪ�����Ų��ܱ�ʾָ��ָ�����ִ��++������ 
cout<<i<<"  "<<p<<endl;
p++;       //�ı�ָ���ֵ 
cout<<i<<"  "<<p<<endl;	
	
	
	return 0;
 } 
