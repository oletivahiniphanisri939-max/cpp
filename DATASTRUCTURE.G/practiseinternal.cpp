#include<stdio.h>
int divide(int a[],int low,int high);
void quicksort(int a[],int low,int high);
int main()
{
	int a[50],i,n;
	printf("Enter the number of elements to be sorted:");
	scanf("%d",&n);
	printf("Enter %d elements to be sorted:\n",n);
	for(i=0;i<n;i++){
		printf("a[%d]=\t",i);
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("After applying quick sort");
	for(i=0;i<n;i++)
    {
    	printf("%d  ",a[i]);
	}
	printf("\n");
	return 0;
}
int divide(int a[],int low,int high){
	if(low<high){
		int j=divide(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j,high);
}}
void quicksort(int a[],int low,int high){
	int i,j,pvt,temp;
	if(low<high){
		pvt=low;
		i=low;
		j=high;
	while(i<j){
		while(a[i]<=a[pvt]&&i<=high){
			i++;
		}
		while(a[j]>a[pvt]&&j>=low){
			j--;
		}
		if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	temp=a[j];
	a[j]=a[pvt];
	a[pvt]=temp;
}
}
