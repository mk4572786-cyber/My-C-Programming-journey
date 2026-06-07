 // Use of Condtional Statements in C program//
 /*#include <stdio.h>
   
int main() {
    int age;
    printf("Enter age :");
    scanf("%d", &age);
    
    if (age>=18)
    {
        printf("Adult \n");
    }
    else  if (age >13 && age<=18){
        printf("Teenager \n");
    }
    printf("Thank You");
    return 0;
}*/

/*#include <stdio.h>
   //Ternary operator use in previous//
int main() {
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    
    age>=18 ? printf("Adult\n"):printf("Not Adult");
    return 0;
}*/


// Switch use//
#include<stdio.h>
int main (){
    int day; //1-mon,2-tues,3-wed,4-thurs,5-Fri,6-sat,7-Sun//
    printf("Enter Day(1-7):");
    scanf("%d",&day);
     switch(day){
        case 1 : printf("Monday\n");
                break;
        case 2 : printf("Tuesday\n");
                break;
        case 3 : printf("Wednesday\n");
                break;
        case 4 : printf("Thursday\n");
                break;
        case 5 : printf("Friday\n");
                break;
        case 6 : printf("Saturday\n");
                break;
        case 7 : printf("Sunday\n");
                break;
        default : printf("Not a Valid Day ! \n");                                                        
     }
    return 0;
}