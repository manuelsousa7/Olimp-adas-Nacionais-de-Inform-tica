#include <stdio.h>
#include <string.h>

void str_reverse(char* str)
{
  char caracter;
  int a, b;

  for(a = 0, b = strlen(str) - 1;  a < b;  ++a, --b)
  {
    caracter = str[a];
    str[a] = str[b];
    str[b] = caracter;
  }
}

int main(){

        int n,i;
        char var[101][5],string[51],string1[51];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                  scanf("%s",string);
                  strcpy(string1,string);
                  str_reverse(string);
                  if(strcmp(string,string1)==0)
                  strcpy(var[i],"Sim");
                  else
                  strcpy(var[i],"Nao");
        }
        printf("%d\n",n);
        for(i=0;i<n;i++)
        printf("%s\n",var[i]);
        return 0;
}
