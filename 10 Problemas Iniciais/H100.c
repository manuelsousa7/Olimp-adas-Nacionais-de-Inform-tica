#include <stdio.h>
#include <string.h>



int main(){

        int n,i,ii;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(ii=0;ii<n;ii++)
            {
               //if(i==0 && ii==0 || ii+1>=n || i+1>=n && ii==0 || ii+1>=n )
               if (((ii==0) && (i==0)) || ((ii+1==n) && (i==0))  ||  ((ii==0) && (i+1==n)) || ((ii+1==n) && (i+1==n)))
                    printf("+");
                else
                if((i==0) || (i+1>=n) )
                printf("-");

                if( (((ii==0) && (i!=0)) && (i+1!=n)) ||( ((ii+1==n) && (i!=0)) && (i+1!=n)) )
                    printf("|");
                else
                if((i!=0) && (i+1!=n) )
                printf(".");
            }
            printf("\n");
        }
        return 0;
}
