#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class shop
{
	int id;
	char name[90];
	public:
		void setId(int id)
		{
			this->id=id;
		}
		int getId()
		{
			return id;
		}
		void setName(char name[])
		{
			strcpy(this->name,name);
		}
		char *getName()
		{
			return name;
		}
		
};
class product
{
	shop *s;
	int size;
	public:
	product(shop s[],int size)
	{
		this->s=s;
		this->size=size;
	}
	void display(int size)
	{
		int i,j,count=0;
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
			
			if(s[i].getId()==s[j].getId())
			{
				count++;
			}
		}
		}
		cout<<"id count is:"<<count;
	}
};
int main()
{
	int id,i,size;
	char name[90];
	cout<<"enter the size:";
	cin>>size;
	shop *s;
	s=(shop*)malloc(sizeof(s)*size);
	for(i=0;i<size;i++)
	{
		cout<<"enter the id:";
		cin>>id;
		cout<<"enter the name:";
		cin>>name;
		s[i].setId(id);
		s[i].setName(name);
	}
	product p(s,size);
	p.display(size);
}
