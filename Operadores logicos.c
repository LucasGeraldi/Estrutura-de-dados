#include <stdio.h>

// && OPERADOR E
// || OPERADOR OU
// ! OPERADOR de negação não inverte o valor logico da operação

int main() {
  int a, b, c;
  printf("Digite um número");
  scanf("%d" ,&a);
printf("Digite outro número");
  scanf("%d", &b);
  printf("Digite outro número");
  scanf("%d", &c);

  if (a==b && b==c)
  {
      printf("Os valores das variaveis a, b, c são iguais");
  }
  else
  {
    printf("Os valores das variaveis tem valores diferentes");
  }
  return 0;
}