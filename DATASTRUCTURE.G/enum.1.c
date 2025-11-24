#include<stdio.h>
enum days{January=0,february,march,april,may,june};
int main(){
	int i;
	for(i=January;i<=june;i++){
		printf("%d ",i);
	}
}
