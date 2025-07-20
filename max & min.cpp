#include <stdio.h>

int main() {
    int a[] = {26,5,6,10,14};
    int i, min = a[0], max = a[0];

    for(i = 1; i < 5; i++) {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    return 0;
}