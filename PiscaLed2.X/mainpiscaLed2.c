/*
 * File:   mainpiscaLed2.c
 * Author: 20184384
 *
 * Created on 9 de Março de 2020, 10:12
 */


#include <xc.h>
#include "config.h"

#define Botao1 PORTDbits.RD0 
#define Botao2 PORTDbits.RD1
#define Led1 PORTDbits.RD2
#define Led2 PORTDbits.RD3

void main(void)
{ 
    TRISDbits.TRISD0=1;  // Definindo entrada = 1.
    TRISDbits.TRISD1=1;  // Definindo entrada = 1.
    TRISDbits.TRISD3=0;  // Definindo saida = 0.
    TRISDbits.TRISD2=0;  // Definindo saida = 0.
    
    Led1=0;  // Inicializa A saida com 0.
    Led2=0;  // Inicializa A saida com 0.
    
    while(1)
    {    
    if(Botao1==0 & Botao2==0)
    {
        Led1=1,Led2=0;
        __delay_ms(500);
        
        Led1=0,Led2=1;
        __delay_ms(500);
    }
    else
    {
        Led1=1,Led2=0;
        __delay_ms(1000);
        __delay_ms(1000);
       
        
        Led1=0,Led2=1;
        
        __delay_ms(1000);
        __delay_ms(1000);
      
      
        
    }
    
     if(Botao1||Botao2==1)
    {
        Led1=1,Led2=0;
        __delay_ms(500);
        __delay_ms(500);
       
         Led1=0,Led2=1;
        __delay_ms(500);
        __delay_ms(500);
        
       
    }
    
    
    
    
    }  
}
