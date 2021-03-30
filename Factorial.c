/*
Author:Alphonce F. Stephano
Email/: alphoncesteven@gmail.com
Company-Group: afsaTech || SuperMesh
*/


#include <stdio.h>
int factorial(int numb)
{
if(numb > 1)
{
   return numb*factorial(numb-1);
}
else {
    return 1;
}

}

int main(void)
{
int numb;

tryagain:
printf("Enter an integer number 1 and 10 inclusive:");
scanf("%d",&numb);

if(numb >= 1 && numb <= 10) {
    printf("The factorial of number %d is:%d\n",numb,factorial(numb));
    printf("The square of number %d is:%d\n",numb,numb*numb);
}
else {
    printf("The number is out of the range. Try again\n\n");
    goto tryagain;
}

return 0;
}

