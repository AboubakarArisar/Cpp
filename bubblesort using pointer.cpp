#include<iostream>
#include<string>
using namespace std;
int* bubblesort(int *p2, int sz)
{
	int *p3= new int[sz]; //dynamic memory allocation
	for(int b=0; b<sz; b++)
	{
		p3[b]=p2[b];       //assigning values of passed array
	}
	int d;
	for(int i=0; i<sz; i++)
	{
		for(int j=0; j<(sz-1); j++)    //sorting values
		{
			if(p3[j]>p3[j+1])
			{
				d=p3[j];
				p3[j]=p3[j+1];
				p3[j+1]=d;
			}
		}
	}
	return p3;
}
int main()
{
int size;
cout<<"Enter array size  : ";
cin>>size;
int *p1 = new int [size];
for(int i=0; i<size; i++)
{
	cout<<"Enter the value "<<i+1<<" : ";
	cin>>p1[i];
}
cout << endl;
 cout<<"\nUnsorted Array : ";
 for(int a=0; a<size; a++)
 {
 	cout<<p1[a]<<" ";
 }
 int *p4 = bubblesort(p1,size);     //assigning returned value to pointer
 cout<<"\nSorted Array : ";
 for(int a=0; a<size; a++)
 {
 	cout<<p4[a]<<" ";
 }
return 0;
}
