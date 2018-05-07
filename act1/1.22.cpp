#include<iostream>
#include"Sales_item.h"

using namespace std;

int main()
{
	Sales_item book1,book2;
	cin>>book1>>book2;
	while(book2.isbn()==book1.isbn())
	{
		book1+=book2;
		cin>>book2;
	}
	cout<<book1<<endl;
	return 0;
}
