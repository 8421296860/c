#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int num=rand()%10+1,guess_num=0,chance=0;
    //printf("The number is %d\n",num);
    do{
        if(chance!=0)
        printf("This is your %d chance",chance);
        printf("\nGuess the number between 1 to 10\n");
        scanf("%d",&guess_num);
        chance++;




    }while(num!=guess_num);
    return 0;
}