// Print the factorial of a number n//
 #include<stdio.h>
 int main () {
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    int fact =1;
    for(int i=1; i<=n ; i++){

        fact = fact *i;
    }
    printf("Find factorial is %d", fact);
    return 0;
 }
 // NOT USE FOR BIG numbers because int cannot save so many values 
 // for short numbers only or numbers mainly till 20//