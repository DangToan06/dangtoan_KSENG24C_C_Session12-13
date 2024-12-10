#include<stdio.h>

void inMang(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int arr[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    inMang(arr, n);
    return 0;
}


