#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int k,j;
	int arr1[5]={0},arr2[5]={0},merge[10]={0};
	cout<<"Enter the array 1 in sorted manner:";
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter "<<i+1<<"element:";
		cin>>arr1[i];
	}
	cout<<"Enter the array 2 in sorted manner:";
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter "<<i+1<<"element:";
		cin>>arr2[i];
	}
	for(i=0,j=0,k=0;(i<5 && j<5);k++)
	{
		if(arr1[i]<arr2[j])
		{
			merge[k]=arr1[i];
			i++;
		}
		else
		{
			merge[k]=arr2[j];
			j++;
		}
	}
	if(i<5)
	{
		for( ; i<5 ; i++,k++)
		{
			merge[k] = arr1[i];
		}
	}
	if(j<5)
	{
		for( ; j<5 ; j++,k++)
		{
			merge[k] = arr1[j];
		}
	}

	cout<<"Array is:\n";
	for(k=0;k<10;k++)
	{
		cout<<merge[k]<<"\t";
	}
	getch();
}

