#include<stdio.h>

int perfectNumber(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
            if(sum == number){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int t = 2;
    while(t--){
        int n;
        scanf("%d", &n);
        if(perfectNumber(n)){
            printf("True\n");
        }else{
            printf("False\n");
        }
    }
    return 0;
}