#include <stdio.h> 

int main(void) 
{ 
int i = 365; 
int j = 7; 
printf("Следующее число после %i, которое разделиться без остатка на %i, это %i.\n",i,j, i+j-i%j); 
int ii = 12258; 
int jj = 23; 
printf("Следующее число после %i, которое разделиться без остатка на %i, это %i.\n",ii,jj, ii+jj-ii%jj); 
int iii = 996; 
int jjj = 4; 
printf("Следующее число после %i, которое разделиться без остатка на %i, это %i.\n",iii,jjj, iii+jjj-iii%jjj); 
return 0; 
}
