#include<iostream>
using namespace std;
class arr
{
	
	public:
		void arroperation(int a[],int size)   //function
		{
			int mid=size/2;
			int i,j,temp;
			j=size-1;
			for(i=0;i<mid;i++) //reverse array
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				j--;
		
			}
			cout<<"display array:";    //display array
			for(i=0;i<size;i++)
			{
				cout<<a[i]<<"\n";
			}
		}
		void arroperation(int size,int a[])   //same name method with different sequance parameter
		{
			int i,j,temp;
			for(i=0;i<size;i++)
			{
				for(j=i+1;j<size;j++)
				{
					if(a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"largest element is:"<<a[0];   //sort array in descending order so a[0] is without but large
		}
		
};
int main()
{
	int size,a[90],i;
	cout<<"enter the size:";
	cin>>size;
	cout<<"enter the array elemnt:";
	for(i=0;i<size;i++)//input array
	{
		cin>>a[i];
	}
	arr ap;//create object
	ap.arroperation(a,size);//call method
	ap.arroperation(size,a);
}
