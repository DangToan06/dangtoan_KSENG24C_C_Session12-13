#include<stdio.h>
#include<math.h>

int primeNumber(int number){
    if(number <= 1){
        return 0;
    }
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t = 2;
    while(t--){
        int n;
        scanf("%d", &n);
        if(primeNumber(n)){
            printf("True\n");
        }else{
            printf("False\n");
        }
    }
    return 0;
}