//Print the nos. from 0 to 10//
 #include<stdio.h>
  int main (){
     for(int i=0; i<=10; i=i+1){
         printf("%d\n",i);
    }
    return 0;
  } 

// While LOOP use, Print nos from 0 to n

#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf ("%d",&n);
    int i=0;
    while(i<=n) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}