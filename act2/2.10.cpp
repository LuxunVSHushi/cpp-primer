#include<iostream>

using namespace std;

std::string global_str;//��ʼ��Ϊ���ַ��� 
int global_int;//��ʼ��Ϊ0�� 

int main()
{
int local_int;//��ʼ��Ϊ0��
std::string local_str;//��ʼ��Ϊ���ַ��� 

cout<<global_str<<endl;;
cout<<global_int<<endl;
cout<<local_int<<endl;
cout<<local_str<<endl;


return 0;
}
