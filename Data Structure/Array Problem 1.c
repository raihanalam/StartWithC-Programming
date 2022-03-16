#include<stdio.h>
int main()
{
    int arr[3][3],i,j,co,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            co=0;
            for(k=2;k<=arr[i][j]/2;k++){
                if(arr[i][j]%k==0){
                    co++;
                    break;
                }
            }
            if(co==0)
                printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}
