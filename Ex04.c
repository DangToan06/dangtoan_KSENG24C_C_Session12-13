#include<stdio.h>
#include<limits.h>

int maxNumber(int array[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", maxNumber(arr, n));
}