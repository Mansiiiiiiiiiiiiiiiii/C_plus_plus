#include<stdio.h>
int fib(int a){
	if(a == 0 || a==1)
	return a;
	return fib(a-1)+ fib(a-2);
}
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	printf("The answer is %d",fib(a));
}
