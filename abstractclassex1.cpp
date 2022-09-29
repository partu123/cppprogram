/* wap to create the abstract class name as arrayfinding with abstract method name as
     void findkth(int arr[],int k)it is abstract method we have to ovveride the method 
     in child class name as findelemnt and find the kth elemnt from array*/
     #include<iostream>
     #include<string.h>
     using namespace std;
     class arrayfinding
     {
     	public:
     		virtual void findkth(int arr[],int k)=0;
	 };
	 class findelement
	 {
	 	
	 	public:
	 	void findkth(int *ptr,int size)
		 {      
		  int temp,i,j,flag=0;
		 	   for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+i)<*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	//
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ptr[i]!=ptr[j]&& flag==0)
			{
				printf("second largest =%d",ptr[j]);
				flag=1;
				break;
			}
		}
	}
		 	
			 }
			 	
	 };
	 int main()
	 {
	 	int a[90],size,i;
	 	   cout<<"enter the size:";
	 	   cin>>size;
	 	   cout<<"enter the array element:";
	 	   for(i=0;i<size;i++)
	 	   {
	 	   	    cin>>a[i];
			}
			findelement f;
			f.findkth(a,size);
	 }
