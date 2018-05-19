#include<iostream>
#include"Sales_data.h"

#include<string>

using namespace std;

int main()
{
	Sales_data book1;
	cout<<"Please input book1's name sold number and price:";
	cin>>book1.bookName>>book1.number>>book1.price;
	
	cout<<"The book1's name is: "<<book1.bookName<<",sole number is:"<<book1.number
	<<" and its price is:"<<book1.price<<"."<<endl;
	
	
	return 0;
}
