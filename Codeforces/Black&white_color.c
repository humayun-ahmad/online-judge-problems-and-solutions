#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
   char ch;
   int count=0,row,column,i,j;

   scanf("%d %d",&row,&column);

   for(i = 0;i < row;i++){
        for(j = 0;j < column;j++){
            scanf(" %c", &ch);
            if(ch=='C'){
                count=1;
            }
            else if(ch=='M'){
                count=1;
            }
            else if(ch=='Y'){
                count=1;
            }

        }
   }

   if(count == 1){
    printf("#Color\n");
   }
   else if(count==0)
    printf("#Black&White\n");


    return 0;
}
