#include<iostream>


using namespace std;


int main()
{
  int i=3,&r1=i;//合法
  double d=4.0,&r2=d;//合法
  
  r2=3.14159;//合法
  
  cout<<r2<<"  "<<d<<endl;
 r1 =r2;//居然是合法的，擦//不合法.引用类型必须一致
  
  cout<<r2<<"   "<<r1<<endl;
  i=r2;//合法
  cout<<i<<"  "<<r2<<endl;
  r1=d;//也是合法的！//不合法,类型不一致
  cout<<r1<<"  "<<d<<endl;
 	
	
	
	return 0;
}
