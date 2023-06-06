//assigning address to pointers

#include <stdio.h>


int main()
{
    int*pc,c;
    c=5;
    pc=&c;

    printf("value of address of c is given by pointer variable  %p",pc);
    printf("\n value of value of c is given by *pc i.e %d",*pc);
     return 0;
  

}