@ st.sl para teste da tarefa 05

NULL     .equ -1      @ indica apontador nulo
palind32 .equ 0x400   @ endereço da função é fixo

@ iniciamos no endereço 0
	.org 0
init:
	set sp,0x7ffc    @ prepara pilha
	set r0,0x80000001    @ arvore de teste
	push r0           @ empilha parâmetro
	call palind32     @ e faz a chamada
	add sp,4          @ retira parâmetro da pilha
	hlt


