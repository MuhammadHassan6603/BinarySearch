#include<stdio.h>
int low,high,mid,key,value;
int BinarySearch(int a[],int low,int high,int key)
{
	mid=(low+high)/2;
	while(low<=high) // or -> for(mid=(low+high)/2 ; low<=high ; mid=(low+high)/2)
	{
		if(key==a[mid])
		{
			return mid;
		}
		if(key<a[mid])
		{
			high =mid-1;
		}
		if(key>a[mid])
		{
			low=mid+1;
		}
	}
}
void main()
{
	int a[6]={10,15,20,45,50,60};
	low=0;
	high=5;
	key=20;
	value=BinarySearch(a,low,high,key);
	printf("Value is at Index %d",value);
}
