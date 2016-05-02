@ stub1.sl para teste da tarefa 06

NULL     .equ -1      @ indica apontador nulo
soma_bin .equ 0x400   @ endereço da função é fixo

@ iniciamos no endereço 0
	.org 0
init:
	set sp,0x7ffc    @ prepara pilha
	set r0,_arvore    @ arvore de teste
	push r0           @ empilha parâmetro
	call soma_bin     @ e faz a chamada
	add sp,4          @ retira parâmetro da pilha
	hlt

_arvore:
_no1:
	.word   10,_no2,_no3
_no2:
	.word   20,_no4,_no5
_no3:
	.word   3,_no6,NULL
_no4:
	.word   4,NULL,NULL
_no5:
	.word   8,NULL,NULL
_no6:
	.word   1,NULL,NULL





