
#ifndef CONFIG_H
#define CONFIG_H

#pragma config FOSC = INTRC_NOCLKOUT // Fonte de clock: oscilador interno
#pragma config WDTE = OFF            // Desabilita watchDog Timer
#pragma config MCLRE = OFF           // Desab. Master Clear via pino
#pragma config LVP = OFF             // Desab. gravação em baixa tensão

#define _XTAL_FREQ 4000000           // Freq. clock interno: 4MHz(padrão)

#endif

 

