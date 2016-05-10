@Pedro Luis Marques Sliuzas RA:158343
@MC404 -- Tarefa 08 -- Cronômetro

BOTAO			.equ 0x10 @botao liga e desliga do tipo toggle
TEMP	 		.equ 0x20 @temporizador de tipo 0x01
MOSTRADOR0      .equ 0x30 @representa a unidade do dispositivo
MOSTRADOR1		.equ 0x31 @representa a dezena do dispositivo
INT_TIMER    	.equ 0x01 @ interrupção do temporizador	

	
	.org 0x400

@r0 tem o numero da unidade
@r1 tem o numero da dezena
@r3 tem a posicao no vetor de interrupçoes

init:
	set r3,INT_TIMER*4  @ posição no vetor de interrupçoes
	set r1,int_tempo    @ endereço do tratador
    st  [r0],r1         @ instala tratador no vetor
    set sp,0x10000      @ prepara pilha
	set r0,0
	set r1,0
	stb dig_corrente0,r0 @ zera valor dig_corrente
	stb dig_corrente1,r1 @ zera valor dig_corrente
	call  atualiza_mostr  @ atualiza mostrador
	sti
	set   r0,1000   @ liga temporizador com valor 
    out   TEMP,r0   @ para interromper a cada segundo

espera:
     wait                  @ espera por interrupção
     in    r4,BOTAO
     cmp   r4,0
     jz    espera
     ldb   r0,dig_corrente0 @ pega valor do dígito corrente
     add   r0,1            @ decrementa
     cmp   r0,10           @ verifica se excedeu 9
     jnz   trata_tick0
     set   r0,0            @ dígito corrente é zero novamente
     add   r1,1	
     cmp   r1,10
     jz   trata_tick1    

trata_tick0:
     stb   dig_corrente0,r0 @ atualiza variável   
     stb   dig_corrente1,r1
     call  atualiza_mostr  @ e atualiza mostrador
     jmp   espera          @ e volta a esperar interrupção 

trata_tick1:
	 stb   dig_corrente0,r0 @ atualiza variável   
     set   r1,0
     stb   dig_corrente1,r1
     call  atualiza_mostr  @ e atualiza mostrador
     jmp   espera          @ e volta a esperar interrupção 

atualiza_mostr:            
     set   r2,tab_digitos  @ indexa valor de r0 no vetor
     add   r2,r0           @ de dígitos para determinar a configuração
     ldb   r2,[r2]         @ de bits a ser escrita no mostrador
     set   r4,tab_digitos  @ indexa valor de r0 no vetor
     add   r4,r1           @ de dígitos para determinar a configuração
     ldb   r4,[r4]         @ de bits a ser escrita no mostrador
     out MOSTRADOR0,r2	   @envia para os mostradores
	 out MOSTRADOR1,r4
     ret                   @ e retorna



int_tempo:
                           @ nada a fazer neste caso
     iret                  @ apenas retorna

dig_corrente0:
     .skip   1             @ valor corrente do mostrador das unidades
dig_corrente1:
	 .skip   1			   @ valor corrente do mostrador da dezenas      

tab_digitos:
     .byte    0x7e,0x30,0x6d,0x79,0x33,0x5b,0x5f,0x70,0x7f,0x7b,0x7e,0x7e
  