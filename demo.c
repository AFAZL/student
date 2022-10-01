#include <stdio.h>

int main() {
    int reg_NO[]={10,20,30},i,n,ch;
    printf("%d\n",reg_NO[0]);
    
    printf("ENTER REG_NO:\n");
    scanf("%d",&n);
        if(n==reg_NO[1]||n==reg_NO[2]||n==reg_NO[0]){
            printf(" CAR MODELS:\n");
        }
        else{
            printf("REG FIRST\n");
        }

    printf("1.AUDI\n");
    printf("2.ABC\n");
    printf("3.ZAQ\n");
    printf("4.BHU\n");
    printf("5.MKO\n");
    
    printf("CHECK STATUS:\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("NOT AVAILABLE\n");
        break;
        case 2:printf("NOT AVAILABLE\n");
        break;
        case 3:printf("AVAILABLE\n");
        break;
        case 4:printf(" AVAILABLE\n");
        break;
        case 5:printf("NOT AVAILABLE\n");
        break;
        default : printf("WRONG CHOICE:\n");
        break;
    }
    
    
    

   return 0;
}