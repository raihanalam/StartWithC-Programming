#include &lt;stdio.h>
int main()
{
    int i,num[6]={7,10,12,4,9,5};
    
    for(i=0;i<=6;i++)
    {
        if(num[i]%2!==0)
           printf("%d",num[i]);
    }
    
   return 0;
}