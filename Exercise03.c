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
    for (int i = 1; i < n ; i++){
        int index = arr[i], pos = i - 1;
        while(pos>=0 && index < arr[pos]){
            arr[pos + 1] = arr[pos];
            pos --; 
        }
        arr[pos + 1] = index;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    

    return 0;
}
