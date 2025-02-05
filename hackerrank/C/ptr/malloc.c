#include <stdio.h>
#include <stdlib.h>

// malloc : xin cấp phát bộ nhớ với data rác
// calloc : xin cấp phát bộ nhớ với data  = 0
// realloc : cấp phát thêm bộ nhớ, giữ nguyên giá trị của bộ nhớ đã tạo trước đó bằng malloc hoặc calloc

int main(){
    int n = 10;
    int *a = (int*)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Cap phat khong thanh cong !\n");
    }
    else{
        printf("Cap phat thanh cong !\n");
        // thêm giá trị vào mảng a[] với kích thước n * sizeof(int)
        for(int i = 0; i < n; i++){
            *(a + i) = 28 + i; 
            printf ("%d ", *(a+i));
        }
        // duyệt và in ra mảng đã thêm giá trị
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
    }
    return 0;
}