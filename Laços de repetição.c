#include <stdio.h>

int main() {

int a=0;

  printf("\nLaço WHILE\n");
  while(a<5)
    {
      printf("\nA variável a é %d",a);
      a++;
    }

printf("\nLaço FOR\n");

  //  for (inicialização; teste ; incremento  )
  for (int i=0 ; i<4 ; i++)
    {
    printf("\nA variavel 'i é: %d",i);
    }
    
  return 0;
}