#include <stdio.h>

int main(){
        int n,n1,k,nums[1000],menorDiferenca=9999999,maior,menor,i,l,m,asd=0,var[201];
        scanf("%d",&n1);
        
        for(i=0;i<n1;i++){
                scanf("%d",&k);
                for(l=0;l<k;l++){
                        scanf("%d",&nums[l]);
                }
                for(m=0;m<k;m++){
                        for( n=m;n<k;n++){
                                if(nums[m]!=nums[n]){
                                        if(nums[m]>nums[n]){
                                                maior=nums[m];
                                                menor=nums[n];
                                        }else{
                                                maior=nums[n];
                                                menor=nums[m];
                                        }
                                        if(maior-menor<menorDiferenca){
                                                menorDiferenca=maior-menor;
                                        }

                                }
                        }
                }
                var[asd]=menorDiferenca;
                menorDiferenca=9999999;
                asd=asd+1;
        }
        printf("%d\n",n1);
        for (i=0;i<asd;i++)
        printf("%d\n",var[i]);
        return 0;
}
