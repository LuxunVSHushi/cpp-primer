#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>

//#include<random>
using namespace std;

char colour[5]={3,4,5,6,'W'};//R=红桃，B黑桃，S=方块，F=梅花，W=大小王 
string number[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
char BOSS[2]={0x2605,42};
 unsigned int cunchu[54]={ 0,1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,
                14,15,16,17,18,19,20,21,22,23,24,25,26,
				27,28,29,30,31,32,33,34,35,36,37,38,39,
				40,41,42,43,44,45,46,47,48,49,50,51,52,
				53	
				};
				
void pullpook() //初始化牌 
{
	for(int i=0;i<54;i++)
	{ int  index1,index2;
	index1=cunchu[i]/13;
	index2=cunchu[i]%13;
	cout<<colour[index1]<<":  ";
	if(index1==4)
		{
		
		cout<<BOSS[index2]<<" ";
	    }
	else
		{
	
		cout<<number[index2]<<" ";	
			
		}	
	}
	
	
}

void washpook()  //洗牌 
{unsigned int index1;

	for(int i=0;i<54;i++)
	{
	srand(time(NULL)+rand());
		index1=rand()%54;
	
	  
	    swap(cunchu[i],cunchu[index1]);
		}

	
	
	
}

double answer(int x)    //计算点数 
{ int a=x;
double b;
	if(x/13==4)
		{b=0.5;
		}
    else if(a%13<=9)	
		{b=a%13+1;
		}
	else
		{b=0.5;
		}
	return b;
}
void pull_one_pook(int i)//发一张牌 
{
int  index1,index2;
	index1=cunchu[i]/13;
	index2=cunchu[i]%13;
	cout<<colour[index1]<<":  ";
	if(index1==4)
		{
		
		cout<<BOSS[index2]<<" ";
	    }
	else
		{
	
		cout<<number[index2]<<" ";	
			
		}	
	
}

int main()
{ int e;
  // default_random_engine e;
	pullpook();
	cout<<endl;
	cout<<endl;
//cout<<e;
	washpook();
	pullpook();
	
	cout<<endl;
		cout<<endl;
	for(e=0;e<10;e++)
	{cout<<endl;	
	   pull_one_pook(e);
		cout<<"  "<<answer(cunchu[e]);
		}

	
	return 0;
}
