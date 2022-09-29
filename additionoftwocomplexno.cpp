#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
	float real,img;
	public:
		complex(float real,float img )
		{
			this->real=real;
			this->img=img;
		}
		complex()
		{
			
		}
		complex operator +(complex p)
		{
			complex temp;
			temp.real=this->real+p.real;
			temp.img=this->img+p.img;
			return temp;
		}
		void show()
		{
			cout<<"output is:"<<real<<"+"<<img<<"i";
		}
};
int main()
{
	float real,img;
	cout<<"enter the real and img:";
	cin>>real>>img;
	complex p1(real,img);
	cout<<"enter te real and img:";
	cin>>real>>img;
	complex p(real,img);
	complex temp;
	temp=p1+p;
	temp.show();
}
