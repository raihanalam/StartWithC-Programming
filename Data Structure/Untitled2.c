#include<stdio.h>
int main()
{
    int n,rs100,rs50,rs20,rs10,rs5,rs2,rs1;

    scanf("%d",&n);

    rs100=n/100;
    rs50=n%100;
    rs20=rs50%50;
    rs50=rs50/50;
    rs10=rs20%20;
    rs20=rs20/20;
    rs5=rs10%10;
    rs10=rs10/10;
    rs2=rs5%5;
    rs5=rs5/5;
    rs1=rs2%2;
    rs2=rs2/2;

    printf("%d\n",n);
    printf("%d nota(s) de R$ 100.00\n",rs100);
    printf("%d nota(s) de R$ 50.00\n",rs50);
    printf("%d nota(s) de R$ 20.00\n",rs20);
    printf("%d nota(s) de R$ 10.00\n",rs10);
    printf("%d nota(s) de R$ 5.00\n",rs5);
    printf("%d nota(s) de R$ 2.00\n",rs2);
    printf("%d nota(s) de R$ 1.00\n",rs1);

    return 0;
}
