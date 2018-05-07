# include <iostream>
# include <string>
#include<vector>

using namespace std;

class Person
{
		typedef string::size_type index;
	public:
		Person(index ht=0,index wd=0):contents(ht*wd,'A'),cursor(0),hight(ht),width(wd)
		{
		};
		char get()const
		{
			return contents[cursor];
		};
		char get(string::size_type r,string::size_type c)const
		{
			string::size_type row=r*width;
			return contents[row+c];
		}


	private:
		string contents;
		string::size_type cursor;
		string::size_type hight,width;
};

int main()
{
	Person a(10,100);
	cout<<a.get()<<endl;
	cout<<a.get(2,8)<<endl;
	cout<<"²âÊÔÒ»ÏÂ"<<endl;
	return 0;
}
