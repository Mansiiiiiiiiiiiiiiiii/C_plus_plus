#include<stdio.h>

extern a=9;
int main(){
extern int a;
printf("%d",a);
return 0;
}
