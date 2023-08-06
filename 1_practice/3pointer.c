// working with pointers

#include <stdio.h>

int main()
{

    int*pc,c;
    c=22;
    printf("address of c: %p\n", &c);
    printf("value of c: %d\n\n,",c); //22
     
     pc=&c;
     printf("address of pointer pc: %p\n\n,pc");
     printf("content of pointer pc: %d\n\n",*pc); //22

     c=11;
     printf("address of pointer pc:%p\n",pc);
     printf("content of pointer pc: %d\n\n",*pc); //11


     c=11; 
     

}