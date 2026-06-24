// Print  the table of a number by the user//

// #include<stdio.h>
// int main() {
// int n;
//     printf("enter number : ");
//     scanf("%d", &n);

//     for(int i=1 ;i<=10;i++) {
//         printf("%d \n" , n*i);
//     }


//     return 0;
// }

//Keep taking nos. as input from user until user enters an odd number//

#include<stdio.h>
int main() {
    int n;
    do {
        printf("enter number :");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%2 != 0) {
            break;    
        }
    } while(1); 
    printf("Thank you");    
    
    return 0;
}