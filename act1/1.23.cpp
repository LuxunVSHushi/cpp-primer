#include<iostream>
#include"Sales_item.h"

using namespace std;

int main () 
{  
	Sales_item book1, book[100]={};
int i=0,j=0;
while((cin>>book1)&&(book1.isbn()!="qq"))//ÊהÈכqqÍË³צÊהÈכ 
	{
		for( j=0;j<=i;++j)
		{ if(book1.isbn()==book[j].isbn())
			    {book[j]+=book1;
			    break;
				 } 
			
		}
		if(j==i)
		{i++;
		book[i]=book1;
		j=0;
		}
		
				
	}
	
	for(j=0;j<=i;j++)
	cout<<book[j];
	return 0;
}
