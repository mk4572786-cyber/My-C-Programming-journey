/*Write a Function to print "Hot" or "Cold" depending on temperature
user enters*/

#include<stdio.h>

void checkTemperature(float temp) {
    if(temp>=25) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    } 
}
int main () {
    float userInput;
    printf("Enter the temperature :");
    scanf("%f", &userInput);

    checkTemperature(userInput);
    return 0;
}