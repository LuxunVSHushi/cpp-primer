#include<iostream>


using namespace std;


int main()
{
  int i=3,&r1=i;//�Ϸ�
  double d=4.0,&r2=d;//�Ϸ�
  
  r2=3.14159;//�Ϸ�
  
  cout<<r2<<"  "<<d<<endl;
 r1 =r2;//��Ȼ�ǺϷ��ģ���//���Ϸ�.�������ͱ���һ��
  
  cout<<r2<<"   "<<r1<<endl;
  i=r2;//�Ϸ�
  cout<<i<<"  "<<r2<<endl;
  r1=d;//Ҳ�ǺϷ��ģ�//���Ϸ�,���Ͳ�һ��
  cout<<r1<<"  "<<d<<endl;
 	
	
	
	return 0;
}
