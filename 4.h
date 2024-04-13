#pragma once
#ifndef __4_h__
#define __4_h__

/* Inclusões */
#include <stdio.h>

/* Funções */
void ex04()
{
    printf("Considere 1 como interruptor aceso e 0 como apagado. O estado inicial é 000. Meu passo a passo:"
            "\n\t1) 000 -> 100"
            "\n\t2) Conferir uma sala. Se ela estiver acesa, descobri um interruptor."
            "\n\t3) 100 -> 101"
            "\n\t4) Se a premissa anterior for verdadeira, confiro outra sala. Se ela estiver acesa, descobri este interruptor e posso deduzir que o último controla a lâmpada restante."
            "\n\tCaso contrário, confiro a primeira sala. Se agora essa estiver acesa, descobri seu interruptor e posso deduzir que o interruptor restante controla a lâmpada restante.");
}

#endif