#include<stdio.h>
int main(){
		struct student{
	int marks;
	char name[10];
}s[5];
int i;
float sum=0,avg=0;
for(i=0;i<3;i++){
scanf("%d",s[i].marks);
printf("for roll number %d:",s[i].marks);
scanf("%s",s[i].name);}
for(i=0;i<3;i++){
	sum=sum+s[i].marks;}
	avg=sum/3;
	printf("%f\t",sum);
	printf("%.f\t",avg);
		printf("\n");
return 0;
	}

