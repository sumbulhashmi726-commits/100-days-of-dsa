#include <stdio.h>

int main() {
    int n, val;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &val);

    int k = 0;  

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  
            k++;
        }
    }


    for (int i = 0; i < k; i++) {
        if (i > 0) printf(" ");
        printf("%d", nums[i]);
    }
    printf("\nk = %d\n", k);

    return 0;
}