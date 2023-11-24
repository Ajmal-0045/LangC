#include<stdio.h>

int main(){
   int count = 0;
   while(count < 10){
    count++;
    if (count % 2 == 0){
    printf("%d\n",count);
    }
   }
    return 0;
}