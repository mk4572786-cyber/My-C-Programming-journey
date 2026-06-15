// Print the sum of 1st n natural nos, also put them in reverse//

#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i=1, j=n ; i<=n &&j>=1 ; i++,j--) {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("sum is %d\n", sum);

    // for(int i=n; i>=1; i--) {
    //     printf("%d\n", i);
    // }
    
    return 0;
} 