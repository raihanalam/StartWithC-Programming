#include &lt;stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num>80 && num<100)
    printf("CGPA 4.00");
       else if(num>70 && num<79)
          printf("CGPA 3.50");
       else if(num>60 && num<69)
          printf("CGPA 3.00");
       else if(num>50 && num<59)
          printf("CGPA 2.50");
       else if(num>40 && num<49)
          printf("CGPA 2.00");
    else
    printf("Failed");
   return 0;
}