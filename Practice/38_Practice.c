 
#include<stdio.h> 


void countdown(int n){
      if(n == 11){
        return;
      }
      printf("%d \n",n);
      countdown(n+1);
}


   int main(){
         countdown(1);
   return 0;
}