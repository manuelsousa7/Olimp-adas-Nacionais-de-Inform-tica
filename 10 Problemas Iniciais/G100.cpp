#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){

        int n,nn[101],i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&nn[i]);
        sort(nn,nn+n);
        printf("%d\n",n);
        for(i=0;i<n;i++)
            printf("%d\n",nn[i]);
        return 0;
}
