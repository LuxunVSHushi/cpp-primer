#include<iostream>


using namespace std;


int main()
{ int i,&ri=i;//引用绑定了ri和i值。 
i=5;ri=10;
cout<<i<<" "<<ri<<endl;
	
	
return 0;	
}
