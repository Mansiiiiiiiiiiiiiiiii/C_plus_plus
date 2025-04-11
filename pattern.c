#include<stdio.h>
int main(){
    int A[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("%d",A[j]);
        }
        printf("\n");
    }
    return 0;
}
