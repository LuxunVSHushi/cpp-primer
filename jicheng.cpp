/**

ѧϰ�̳� 



***/

#include <iostream>

#include <string>
using namespace std;

class Person {
	public:
	//	Person();
		string  getName();
		int getage();
	   void setname(string nam);
		void setage(int ag);
	private:
		string  name;
		int age;	
		
		
};
class Student:public Person{
	public:
	    void setsocre(int soc);
		int getsocre();
	private:
		int score;
	
	
};

		void Person::setname(string nam){
			
			this->name=nam;
		}
		
		
		string Person::getName()
		{
			return this->name;
		 } 
		 
		 
	void Person::setage(int ag)
		{
		 this->age=ag;
		}
		
		
		int Person::getage(){
			
			return this->age;
		}


    void   Student::setsocre(int soc)
		{
			 this->score=soc;
			
		};
		
	int Student::getsocre()
		{
			return this->score;
		}
int main()
{
	Student A;
	string _name;
	int _age,_socre;
	cout<<"���������֣�"<<endl;
	cin>>_name;
	cout<<"���������䣺"<<endl;
	cin>>_age;
	cout<<"������ɼ���"<<endl;
	cin>>_socre;
    A.setname(_name);
   A.setage(_age);
    A.setsocre(_socre);
    cout<<A.getName() <<" ������:"<<A.getage()<<endl;
	 cout<<A.getName() <<" �ɼ���:"<<A.getsocre()<<endl;
	
	
	
	return 0;
}
