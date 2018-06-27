#include "greetings.h"
#include <stdio.h>

void gutenTag()
{
    printf("Guten Tag! \n");
};

void aufWiedersehen() {
    printf("Auf Wiedersehen! \n");
}

void hundertMalGutenTag()
{
    for(int x = 0; x < 100; x = x + 1)
    {
        gutenTag();
        aufWiedersehen();
    }
}