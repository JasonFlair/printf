#include "main.h"

int counter(int n)  
{  
    int counter=0;  
    while(n!=0)  
    {  
        n=n/10;  
        counter++;  
    }  
    return counter;  
}