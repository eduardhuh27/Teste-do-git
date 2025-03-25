#include <stdio.h>
void main()
{
 int i;
  printf("Entre com a usa idede: ");
  scanf("%d" , &i);

  if (i<12){
  printf("Crianca");
  }
  else  
  {
    if  (i<18){
    printf("Adolecente");
    }
    else{
      printf("Adulto");
    }
  }
}