\\ Printing hollow square

#include <stdio.h>

int main() {

   int i,j,rows;
   printf("Enter number of rows:");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++){
       if(i==1||i==rows){
           printf("*****\n");
       }
       else if(i%2==1){
           printf("*   *\n");
       }
       else {
           printf("\n");
       }
   }
}
