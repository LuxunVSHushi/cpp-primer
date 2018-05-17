#include<iostream>

using namespace std;

std::string global_str;//初始化为空字符串 
int global_int;//初始化为0； 

int main()
{
int local_int;//初始化为0；
std::string local_str;//初始化为空字符串 

cout<<global_str<<endl;;
cout<<global_int<<endl;
cout<<local_int<<endl;
cout<<local_str<<endl;


return 0;
}
