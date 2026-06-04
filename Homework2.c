//Print Average of 3 nos
/* #include <stdio.h>
#include<math.h>

int main(){
    int a,b,c;
printf("Enter a :");
scanf("%d",&a);
printf("Enter b :");
scanf("%d",&b);
printf("Enter c :");
scanf("%d",&c);
printf("Average of 3 numbers is : %d", (a+b+c)/3);
return 0;
}*/
 



#include <stdio.h>

int main() {
    char ch;
    int a;

    printf("Enter a character: ");
    scanf("%c", &ch);
    a = (ch >= '0') && (ch <= '9');
    printf("Result (1 for Digit, 0 for Not): %d\n", a);

    return 0;
}
