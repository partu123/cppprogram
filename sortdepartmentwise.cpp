#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class employee
{
	int id;
	char name[90];
	int sal;
	char depart[90];
	public:
		void set(int id,char name[],int sal,char depart[])
		{
			this->id=id;
		strcpy(this->name,name);
		this->sal=sal;
		strcpy(this->depart,depart);

		}
		char *getdepart()
		{
			return depart;
		}
		void show()
		{
			cout<<id<<"\t"<<name<<"\t"<<sal<<"\t"<<depart<<"\n";
		}
};
int main()
{
	int size,i,j;
	int id,sal;
	char name[90],depart[90];
	cout<<"enter the size:";
	cin>>size;
	employee *emp,temp;
	emp=(employee*)malloc(sizeof(emp)*size);
	for(i=0;i<size;i++)
	{
		cout<<"enter the id name sal and depart:";
		cin>>id>>name>>sal>>depart;
		emp[i].set(id,name,sal,depart);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
		    
		     	  if(strcmp(emp[i].getdepart(),emp[j].getdepart())>0)
		     	  {
		     	  	     temp=emp[i];
							emp[i]=emp[j];
							emp[j]=temp; 
				   }
			 
		     
		}
	}
	for(i=0;i<size;i++)
	{
		emp[i].show();
	}
	
	
}
