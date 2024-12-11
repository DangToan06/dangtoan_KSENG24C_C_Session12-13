#include<stdio.h>
#include<math.h>

void menu(){
    printf("\n\n\tMENU\n");
    printf("1.Nhap gia tri cac phan tu cua mang\n");
    printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3.In cac phan tu o goc theo ma tran\n");
    printf("4.In ra cac phan tu nam tren duong bien theo ma ra\n");
    printf("5.In ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tra\n");
    printf("6.In ra cac phan tu la so nguyen to theo ma tra\n");
    printf("7.Thoat\n");
    printf("\nNhap lua chon cua ban: ");
}

void checkArray(){
    printf("Chua nhap gia tri nao cho mang");
}

void enterArray(int arr[100][100], int rows, int cols){
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <  cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

void exportArray(int arr[100][100], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <  cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void exportCorner(int arr[100][100], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <  cols; j++){
            if(i == 0 && j == 0 || i == 0 && j == cols-1 || j == 0 && i == rows-1 || i == rows-1 && j == cols-1){
                printf("%d ", arr[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void exportEdge(int arr[100][100], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <  cols; j++){
            if(i == 0 || j == 0 || i == rows-1 || j == cols-1){
                printf("%d ", arr[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void mainDiagonal(int arr[100][100], int rows, int cols){
    for(int i = 0; i < rows ; i++){
        printf("%d ", arr[i][i]);
    }
}

void secondaryDiagonal(int arr[100][100], int rows, int cols){
    for(int i = 0; i < rows ; i++){
        printf("%d ", arr[i][rows - 1 - i]);
    }
}

int primeNumber(int num){    
    if(num <= 1){
        return 0;
    }
    for(int k = 2; k <= sqrt(num); k++){
        if(num % k == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number, arr[100][100], n, m;

    do{
        menu();
        scanf("%d", &number);
    
        switch (number){
        case 1:
            printf("Nhap hang cot cho mang: ");
            scanf("%d %d", &n, &m);
            while(n <= 0 && m <= 0){
                printf("Hang cot khong hop le hay nap lai: ");
                scanf("%d %d", &n, &m);
            }
            enterArray(arr, n, m);
            break;
        case 2:
            printf("Gia tri cua mang la:\n");
            exportArray(arr, n, m);
            break;
        case 3:
            printf("Cac phan tu nam o goc;\n");
            exportCorner(arr, n, m);
            break;
        case 4:
            printf("Cac phan tu nam tren duonwg bien:\n");
            exportEdge(arr, n, m);
            break;
        case 5:
            if(n == m){
                printf("Cac phan tu nam tren duong cheo chinh:\n");
                mainDiagonal(arr, n, m);
                printf("\nCac phan tu nam tren duong cheo phu:\n");
                secondaryDiagonal(arr, n, m);
            }else{
                printf("Khong co dương cheo chinh va phu");
            }
        break;
        case 6:
            printf("Cac so nguyen to trong mang:\n");
            for(int i = 0; i < n; i++){
                for(int j = 0; j <  m; j++){
                    if(primeNumber(arr[i][j])){
                        printf("%d ", arr[i][j]);
                    }
                }   
            }
            break;
        case 7:
            break;
        default:
            break;
        }
    }while(number != 7);
    return 0;
}