#include<stdio.h>
	struct student{
	int age;
	char name[10];
	float percent;
};
int main(){
	struct student s1={10,"ravi",90.4};
	struct student s2={14,"raju",93.4};
	printf("the student one details are:");
	printf("%d\t%s\t%.f\n",s1.age,s1.name,s1.percent);
	printf("the student two details are");
	printf("%d\t%s\t%.f\n",s2.age,s2.name,s2.percent);
	return 0;
	}
