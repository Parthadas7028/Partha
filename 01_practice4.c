# include<stdio.h>

int main(){
    int principal=85000, rate=4 , years=3;
    int simpleInterest = (principal*rate*years)/100 ;
    printf("The value of simpleInterest is %d", simpleInterest);
    return 0;
}