
/*

�����������ʵ�е�����ϰ�ߡ��������һ�����ISBN���ܹ������Զ��洢������������
һ���洢���ݵ����飬Ȼ�����ĳһ��ISBN������ȥ���ٱ����� 

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
while((cin>>book1)&&(book1.isbn()!="qq"))//����qq�˳����� 
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
