#include <stdio.h>

int main() {
    int data=0,kills=11,KD=0;
    printf("RESULT\n");
    printf("###########################\n");
    for(data=0;data<=kills;data++){
    
    if(kills>10){
        printf("VICTORY!\n");
        KD++;
    }
    else{
        printf("LOL");
    }
    }
    printf("*******************************\n");
    printf("STRICK is:%d",KD);
}