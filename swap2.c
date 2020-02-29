//swap two variable using 2 variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("\n\n\t ENTER a : ");
	scanf("%d",&a);
	printf("\n\n\t ENTER b : ");
	scanf("%d",&b);
	
	printf("\n\n------BEFORE SWAPPING---------------\n");
	printf("\n\t a : %d",a);
	printf("\n\t b : %d",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n------AFTER SWAPPING---------------\n");
	printf("\n\t a : %d",a);
	printf("\n\t b : %d",b);
	getch();
}
