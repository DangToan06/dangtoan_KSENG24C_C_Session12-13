#include<stdio.h>

int sum(long long a, long long b){
    return a + b;
}

int main(){
    int num1, num2, s;
    printf("Nhap 2 so: ");
    scanf("%d %d", &num1, &num2);
    s = sum(num1, num2);
    printf("Tong hai so la: %d", s);
    return 0;
}