#include<iostream>
using namespace std;
class arrayoperation
{
	int *a,size;
	public:
		arrayoperation(int a[],int size)
		{
			this->a=a;
			this->size=size;
		}
		void arrop()
		{
			int i,j,count,temp;
			for(i=0;i<size;i++)
			{
				for(j=i+1;j<size;i++)   //sort array in ascending order
				{
					if(a[i]>a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"display array:";
			for(i=0;i<size;i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<"repetative no:";
			   count=1;
			for(i=0;i<size;i++)
			{
				if(a[i]==a[i+1])
				{
					++count;
					
				}
				
				else
				{   cout<<count<<"\t";
					if(count>1)
					{
						cout<<a[i]<<"\t";
						
					}
					else
					{
						count=1;
					}
				}
			}
		}
};
int main()
{
	int a[90],size,i;
	   cout<<"enter the array size:";
	   cin>>size;
	     cout<<"enter the array element:";
	     for(i=0;i<size;i++)
	     {
	     	cin>>a[i];
		 }
		 arrayoperation ar(a,size);
	      
		 ar.arrop();
}
