#include<stdio.h>
int getmax(int a[],int n){
	int max=a[0],i;
	for(i=1;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
void radixsort(int a[],int n){
	int big,nod=0,steps,count[10],i,j,k,bucket[10][n],loc,div=1;
	big=getmax(a,n);
	while(big>0){
		nod++;
		big=big/10;
	}
	for(steps=1;steps<=nod;steps++){
		for(j=0;j<10;j++){
			count[j]=0;
		}
		for(i=0;i<n;i++){
			loc=(a[i]/div)%10;
			bucket[loc][count[loc]++]=a[i];
						
		}
		k=0;
		for(j=0;j<10;j++){
			for(i=0;i<count[j];i++){
				a[k]=bucket[j][i];
				k++;
			}
		}
		div=div*10;
		
	}
}
void printArray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
}

int main(){
	int i,n;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
		printf("Before elements are sorted\n");
		printArray(a,n);
		radixsort(a,n);
		printf("after the elements are sorted using radix sort\n");
		printArray(a,n);
		
		return 0;
}
	

