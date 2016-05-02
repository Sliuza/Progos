@Pedro Luis Marques Sliuzas RA:158343
@MC404 -- Tarefa 03 -- Contando pares
	
	.org 0x1000
@r0 possui a somatoria dos elementos pares
@r1 possui a somatoria dos elementos negativos
@r2 vai possuir o numero de vetores
@r3 vai percorrer o vetor
@r4 vai possuir o valor dentro da posicao atual
@r5 eh usado como constante

@inicializa os registradores e ja coloca r3 na primeira posicao do vetor para comecar a leitura
init:
	set r3,0x100
	set r5,0x1
	ld r2,[r3]
	
	jmp compara

@subtrai o contator(r2) e compara se o dado atual eh negativo,caso seja envia para o rotulo negativo
@caso nao seja envia para o rotulo verificaPar
compara:
	add r3,4
	sub r2,1
	cmp r2,0
	jl final
	ld r4,[r3]
	cmp r4,0
	jl negativo
	ldb r4,[r3] @pega o ultimo byte de onde esta armazenado o dado atual
	jmp verificaPar
	
	
@o valor atual eh impar entao eh somado ao contador de pares e passa para a proxima posicao do vetor	
negativo:
	add r1,1	
	ldb r4,[r3] @pega o ultimo byte de onde esta armazenado o valor atual
	jmp verificaPar
	
@verifica se o dado atual eh par comparando os bits de r4 com r5, caso tenham bit igual quer dizer
@que o dado eh impar e entao r4 =1, caso nao tenham bit igual r4 = 0	
verificaPar:
	and r4,r5
	cmp r4,0
	jz ehPar
	jmp compara
	
@o valor atual eh par entao eh somado ao contador de pares e passa para a proxima posicao do vetor
@ e chama o rotulo compara para continuar percorrendo o vetor	
ehPar:
	add r0,1
	jmp compara	

@termina o programa	
final:
	hlt	
	
	
	
	
	
	
	
	
	
	
	
	
			
