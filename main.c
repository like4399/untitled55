#include<stdio.h>
int main() {
    int a[10] = {3, 1, 2, 5, 4, 6, 8, 7, 9, 0};
    int b = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (a[j] > a[j + 1]) {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    for(int i = 0;i<10;++i){
        printf("%d",a[i]);
    }
    return 0;
}