#include <stdio.h>

int main(void) {
  int a;
  printf("digite um numero:  ");
  scanf("%d", &a);

  if (a==0)
  {
    printf("A variavel a é 0");
  }

  else
  {
    printf("A variável a é diferente de 0");
  }
  return 0;
}