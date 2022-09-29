#include<iostream>
using namespace std;
class prime
{
	int no; //instance variable
	public:
		void setdata(int no)
		{
			this->no=no;
		}
		void findprime()
		{   
		    if(no==1)
				{
					cout<<"prime no not found your limit";
				}
				else
				  goto findprime;
				  
		  findprime:
			int i,j,count=0;
			for(i=1;i<=no;i++)
			{    count=0;
				for(j=1;j<=i;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					cout<<i<<"\n";
					
				}
				
			
			}
		}
};
int main()
{
	int no;
	cout<<"enter the no :";
	cin>>no;
	prime p; //create object
	p.setdata(no);  //call method
	p.findprime();
}
