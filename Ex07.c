#include<stdio.h>

void enterRowsColumns(int rows, int cols, int array[100][100]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &array[i][j]);
        }
    }
}

int main(){
    int arr[100][100], rows, cols;
    scanf("%d %d", &rows, &cols);
    enterRowsColumns(rows, cols, arr);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}