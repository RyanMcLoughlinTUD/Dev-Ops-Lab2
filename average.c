#include <stdio.h>


int main(){
	int a,b,c = 0;
	int sum = 0;
	int average = 0;


	printf("Average Finder");

	scanf("%d",a);
	scanf("%d",b);
	scanf("%d",c);

	sum = a+b+c;
	average = sum/3;

	printf("Average is %d", average);

}
