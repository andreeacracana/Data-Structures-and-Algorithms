#include <stdio.h>
#include <stdlib.h>
#include "tabela.h"

void INIT_HASHTABLE(int T[], int m){
   for(int j = 0; j < m; j++){
    T[j] = -1;
   }
}

int HASH_FUNCTION(int k , int m){
   return k % m;
}

int HASH_LINIAR_PROB(int k, int i, int m){
   return (HASH_FUNCTION(k, m) + i) % m;
}

int HASHTABLE_INSERT(int T[], int k, int m){
   int i = 0;
   do{
      int j = HASH_LINIAR_PROB(k , i, m);

       if(T[j] == -1){
           T[j] = k;
           return j;
       }else{
           i = i + 1;
       }
   }while( i < m);

   return -1;
}

void HASHTABLE_PRINT(int T[], int m){
   for(int j = 0; j < m ; j++){
        if(T[j] != -1){
        printf("%d  ", T[j]);
        }else{
        printf("- ");
        }
   }
   printf("\n");
}
