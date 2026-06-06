// To check student is Pass or failed//
#include<stdio.h>
int main(){
int marks;
printf("Enter Marks(0-100) :");
scanf ("%d",&marks);

if ( marks >=0 && marks <= 30){
     printf("Fail\n");
 } else if(marks > 30 && marks<=100) {
     printf ("Pass\n");
 }else {
     printf("Wrong Answer\n");
 }

    return 0;
}