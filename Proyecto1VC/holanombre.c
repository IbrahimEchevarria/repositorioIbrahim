#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
    
    for(size_t i = 0; i < argc; i++)
    {
        printf("Hola %s.\n", argv[i]);
    }
    
}
