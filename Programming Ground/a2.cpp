#include <stdio.h>
int main ()
{
    static int arr1[10][10];
	int i,j,r,c;
	int ctr=0;
    printf("Input the number of rows of the matrix : ");
    scanf("%d", &r);
    printf("Input the number of columns of the matrix : ");
    scanf("%d", &c);
    printf("Input elements in the first matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        if (arr1[i][j]==0)
        {
            ++ctr;
        }
        }
    }
	if (ctr>((r*c)/2))
	{
		printf ("The given matrix is sparse matrix. \n");
	}
	else
		printf ("The given matrix is not a sparse matrix.\n");

	printf ("There are %d number of zeros in the matrix.\n\n",ctr);

	return 0;
}

