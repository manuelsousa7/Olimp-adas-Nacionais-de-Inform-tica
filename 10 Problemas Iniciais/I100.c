#include <stdio.h>
#include <string.h>

int main(){
        char *numeros[][7] = { {".##.", "#..#", "#..#", "....", "#..#", "#..#", ".##."},{"....", "...#", "...#", "....", "...#", "...#", "...."},{".##.", "...#", "...#", ".##.", "#...", "#...", ".##."},{".##.", "...#", "...#", ".##.", "...#", "...#", ".##."},{"....", "#..#", "#..#", ".##.", "...#", "...#", "...."},{".##.", "#...", "#...", ".##.", "...#", "...#", ".##."},{".##.", "#...", "#...", ".##.", "#..#", "#..#", ".##."},{".##.", "#..#", "#..#", "....", "...#", "...#", "...."},{".##.", "#..#", "#..#", ".##.", "#..#", "#..#", ".##."},{".##.", "#..#", "#..#", ".##.", "...#", "...#", ".##."},{0, 0} };


        char string[10];
        int imprimir[15],ii,i;
        scanf("%s",string);
        for(i=0;i<strlen(string);i++)
        {
            if(string[i]=='0')
            imprimir[i]=0;
            else
            if(string[i]=='1')
            imprimir[i]=1;
            else
            if(string[i]=='2')
            imprimir[i]=2;
            else
            if(string[i]=='3')
            imprimir[i]=3;
            else
            if(string[i]=='4')
            imprimir[i]=4;
            else
            if(string[i]=='5')
            imprimir[i]=5;
            else
            if(string[i]=='6')
            imprimir[i]=6;
            else
            if(string[i]=='7')
            imprimir[i]=7;
            else
            if(string[i]=='8')
            imprimir[i]=8;
            else
            if(string[i]=='9')
            imprimir[i]=9;

        }
        for(i=0;i<7;i++)
        {
                    for(ii=0;ii<strlen(string);ii++)
                    if(ii+1!=strlen(string))
                    printf("%s ",numeros[imprimir[ii]][i]);
                    else
                    printf("%s",numeros[imprimir[ii]][i]);
                    printf("\n");

        }
        return 0;
}
