#include <stdio.h>
#include <string.h>
void removeDuplicate(char str[])
{
    int i,j,k;
    for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}

	printf("String after removing duplicate characters: %s\n", str);

}

int main()
{
  	char str[100];

  	printf("Input String :  ");
  	gets(str);
  	removeDuplicate(str);

  	return 0;
}
