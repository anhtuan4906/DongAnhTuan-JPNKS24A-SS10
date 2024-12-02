#include <stdio.h>
int main (){

    int arr[5] = {9, 10, 6, 3, 7};
    int n = sizeof(arr)/sizeof(int);
    printf(" Mang chua duoc sap xep la\n");
    for( int i = 0; i < n; i ++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf(" Mang sau khi duoc sap xep la\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j ++){
            if(arr[j+1]< arr[j]){
                int temp;
                temp = arr[j+1];
                arr [j+1]= arr[j];
                arr[j] = temp;
            }
        }
    }
    for ( int i = 0; i< n; i ++){
        printf(" %d\t", arr[i]);
    }

    return 0;
}