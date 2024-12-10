#include<stdio.h>

int giaiThua(int number){
    if(number == 0){
        return 1;
    }
    return number*giaiThua(number-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", giaiThua(n));
    return 0;
}