#include<stdio.h>
int main(){
	struct student{
	int age;
	char name[10];
	float percent;
}s[5];
int i;
for(i=0;i<3;i++){
scanf("%d",&s[i].age);
printf("for roll number %d:",s[i].age);
scanf("%s",s[i].name);
scanf("%f",&s[i].percent);}

	printf("the student details are:");
	for(i=0;i<3;i++){
	printf("%d\t",s[i].name);
	printf("%d\t",s[i].percent);
	printf("%f\t",s[i].percent);}
return 0;
	}
