#include<iostream>
#include<string>
using namespace std;
int main()
{int a,b,min,max;
cin>>a>>b;
if(a>=b)
{max=a;
min=b;
}
else{
	min=a;
	max=b;
	
}	
	while((max-min)>=0)
	{cout<<min<<endl;
	min++;
	}
	return 0;
}
