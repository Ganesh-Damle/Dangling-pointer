


//  Dangling pointer (part-I)


#include<stdio.h>
int a=10;
int b;
int *iptr=0;

void fun(){
	int x=10;
	printf("%d\n",a);
	printf("%d\n",b);

	iptr=&x;
}

void main(){
	printf("%d\n",a);
	printf("%d\n",b);
	fun();

	//Dangling pointer 
	
	printf("%p\n",iptr);   	//through dangling pointer we can access data or address from another function
	printf("%d\n",*iptr);   // But when accessing value that tie it gives garbage value we see like actual value...
	*iptr=30;
	printf("%d\n",*iptr);

}
	
