#include <stdio.h>


int main()
{
      float n1;
      scanf("%f",&n1);
      if(n1>=90 && n1<=100)
      printf("Excelente\n");
      else
      if(n1>=75 && n1<90)
      printf("Satisfaz Bastante\n");
      else
      if(n1>=50 && n1<75)
      printf("Satisfaz\n");
      else
      if(n1<50 && n1>=0)
      printf("Nao Satisfaz\n");
      else
      printf("Nota Invalida\n");
      return 0;   
}
