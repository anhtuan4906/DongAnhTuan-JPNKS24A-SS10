#include <stdio.h>
int main (){

    int arr[5] = {1, 9, 3, 6, 2};
    int answer;
    printf(" Mang ban dau la\t");
    for( int i = 0; i <5; i ++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf(" Nhap vao 1 phan tu bat ki\n");
    scanf("%d", &answer);
    int count = 0;
    for( int i = 0; i <5; i++){
        if(answer == arr[i]){
            printf(" Phan tu nam o vi tri thu %d cua mang\n", i+1);
            count ++;
        }
    }
    if( count == 0){
        printf(" Phan tu khong ton tai trong mang\n");
    }

    return 0;
}