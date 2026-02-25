#ifndef TABELA_H_INCLUDED
#define TABELA_H_INCLUDED

void INIT_HASHTABLE(int T[], int m);
int HASH_FUNCTION(int k , int m);
int HASH_LINIAR_PROB(int k, int i, int m);
int HASHTABLE_INSERT(int T[], int k, int m);
void HASHTABLE_PRINT(int T[], int m);

#endif // TABELA_H_INCLUDED
