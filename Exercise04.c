#include <stdio.h>
int main (){

    int n; 
    int arr[100];
    printf(" Nhap vao so phan tu cua mang\n");
    scanf("%d", &n);
    for( int i=0 ; i < n; i++){
        printf(" Nhap vao phan tu thu %d : \t", i+1);
        scanf("%d", &arr[i]);
    }
    printf(" Mang khi chua duoc sap xep la\n");
    for(int i=0; i<n ; i++){
        printf("%d\t", arr[i]);
    }
    printf(" \nMang sau khi da duoc sap xep la \n");
    for ( int i = 0; i < n-1; i++){
        int minPosition = i;
        // So sanh va gan gia tri min
        for ( int j = i+1; j <n ; j++){
            if(arr[j]< arr[minPosition]){
                minPosition = j;
            }
        }
        // Doi cho cac phan tu
        int temp = arr[i];
        arr[i]= arr[minPosition];
        arr[minPosition]= temp;
    }
    for(int i = 0; i< n; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
