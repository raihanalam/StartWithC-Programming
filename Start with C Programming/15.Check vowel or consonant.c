#include &lt;stdio.h>
int main()
{
    char l;
    printf("Enter a letter: ");
    scanf("%c",&l);
    if((l=='a')||(l=='e')||(l=='i')||(l=='o')||(l=='u'))
       printf("Vowel");
    else
       printf("consonant");
   return 0;
}