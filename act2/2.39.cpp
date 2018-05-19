#include<iostream>
#include<string>

using namespace std;

struct Sales_data{
	
	string bookName;
	unsigned int number;
	
	double price;
	
	
};
//struct Foo{
//}     //expexted ';' after struct definition;
int main()
{
	Sales_data book1,book2;
	cout<<"Please enter book1's name sold number and price:"<<endl;
	cin>>book1.bookName>>book1.number>>book1.price;
	cout<<"This book's name is: "<<book1.bookName<<",and sold:"<<book1.number<<",the price is:"
	    <<book1.price<<"."<<endl;	
	cout<<"Please enter book2's name sold number and price:"<<endl;
	cin>>book2.bookName>>book2.number>>book2.price;
	cout<<"This book's name is: "<<book2.bookName<<",and sold:"<<book2.number<<",the price is:"
	    <<book2.price<<"."<<endl;
		
		if(book1.bookName==book2.bookName)
		{
		  cout<<"Those total are:"<<book1.number*book1.price+book2.number*book2.price<<endl;	
			
		}
	return 0;
}
