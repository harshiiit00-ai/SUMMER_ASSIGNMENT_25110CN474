//code33 reverse star pattern
#include<stdio.h>
int main(){
    int i,j;
    int rows=5;
    for(i=rows;i>=i;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
