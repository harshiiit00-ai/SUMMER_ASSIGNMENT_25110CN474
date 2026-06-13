//code34 reverse number triangle
#include<stdio.h>
int main(){
    int i,j;
    int rows=5;
    for(i=rows;i>=i;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}