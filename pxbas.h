/*

PXBAS - Máquina Virtual e interpretador de comandos PX-DOS Basic para DOS

Copyright © 2013 Felipe Miguel Nery Lunkes

Porção dependente da arquitetura e plataforma

*/

#define PXBAS_INCLUSO
#define APPVER "1.0"
#define PLATAFORMA "PX-DOS"
#define ARQUITETURA "x86"
#define MaquinaVitualVER "0.1.1"

void versaosis(){

// Este método será usado para chamar o sistema operacional PX-DOS
// para que o mesmo retorne sua versão.

asm {

mov ah, 01h
mov ax, 01h
int 90h

}
}

