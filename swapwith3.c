#include<stdio.h>
int main(){
	int a , b,c;
	printf("Enter the vlaue of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
printf("value of a after swapping is: %d \n", a);
printf("value of b after swapping is: %d", b);
	
	return 0;
		
}
