
/*

本程序符合现实中的输入习惯。随便输入一本书的ISBN，能够做到自动存储，最后遍历搜索
一个存储数据的数组，然后求出某一个ISBN共卖出去多少本。。 

*/


#include<iostream>

#include"Sales_item.h"

using namespace std;

int main () 
{  
	Sales_item book1, book[100]={};
int i=0,j=0;
cin>>book1;
book[0]=book1;
while((cin>>book1)&&(book1.isbn()!="qq"))//输入qq退出输入 
	{
		for( j=0;j<=i;++j)
		{ if(book1.isbn()==book[j].isbn())
			    {book[j]+=book1;
			    break;
				 } 
			
		}
		if(j==i+1)
		{i++;
		book[i]=book1;
		j=0;
		}
		
				
	}
	
	for(j=0;j<=i;j++)
	cout<<book[j]<<endl;
	return 0;
}
