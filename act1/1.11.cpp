#include<iostream>

using namespace std;
int  main()
{
	int a,b,min,max;
	cout<<"Please input two numbers:"<<endl;
	cin>>a>>b;
	if(a>=b)
	{min=b;
	max=a;
	}
	else{
		min=a;
		max=b;
	}
//	while((max-min)>=0)//while���д�Ĳ��� 
//	{
//		cout<<min<<endl;
//		++min; 
//	}

for(;min<=max;min++) //for���д�Ĳ��� 
	{
			
			cout<<min<<endl;
	}

	return 0;
}
