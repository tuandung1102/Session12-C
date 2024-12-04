#include <stdio.h>

long long factorial(int n) {
    long long result = 1;

    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am\n");
        return -1;  
    }

    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    
   
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

   
    long long result = factorial(num);
    if (result != -1) {
        printf("Giai thua cua %d la %lld\n", num, result);
    }

    return 0;
}

