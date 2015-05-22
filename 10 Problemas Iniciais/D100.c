#include <stdio.h>


int main()
{
        int p=0,i,n1;
        scanf("%d",&n1);
        for (i=1 ; i<=n1 ; i=i+1) 
        {
               if ((n1%i)==0) 
                     p=p+1;
        }
        if (p==2)
                     printf("%d e primo\n",n1);
        else 
                     printf("%d nao e primo\n",n1);
        return 0;
}
