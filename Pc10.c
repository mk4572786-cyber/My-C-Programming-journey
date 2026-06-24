//Print all numbers from 1 to 10 except 6 using continue statement//

/*#include<stdio.h>
int main() {
    for(int i=1; i<=10; i++) {
        if(i==6) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}*/

//Print all the odd numbers from 5 to 50//

#include<stdio.h>
int main() {
    for (int i=5; i<=50 ; i++) {
        if (i % 2 ==0) {
            printf("%d\n", i);
        }// odd
    }
    return 0;
}