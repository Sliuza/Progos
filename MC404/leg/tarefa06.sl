@Pedro Luis Marques Sliuzas RA:158343
@MC404 -- Tarefa 06 -- Árvore binária

	.org 0x400
@r0 vai guardar o valor da soma
@r1 vai guardar o endereço da pilha
@r2 vai guardar a memoria do filho direito
@r3 vai guardar a memoria do filho esquerdo
@r4 vai obter o valor do nó atual
@r5 vai servir como uma auxiliar para salvar -1,que será quando a operação irá parar
soma_bin:
	ld r1,[sp+4]	@obtem a posicao do primeiro nó
	set r0,0    
	set r5,-1		
	push r5			@a função irá parar quando encontrar -1 na pilha
	jmp somabin
	
somabin:
	cmp r1,r5	@verifica se o nó existe
	jnz soma
	ret	
soma:
	ld r4,[r1]				@obtem o valor do nó e adiciona à r0
	add r0,r4
	ld r2,[r1+4]			@obtem os endereços dos nós filhos do nó atual
	ld r3,[r1+8]
	cmp r3,r5				@caso o endereço do nó esquerdo seja diferente de nulo ele manda empilhar
	jnz empilha
	jmp verificaDireita		@se o endereço do nó esquerdo é nulo,então ele verifica se o nó direito é nulo
							

direita:			@obtem o endereço do nó da direita
	ld r1,[r1+4]
	jmp somabin

esquerda:			@obtem o endereço do nó da esquerda
	ld  r1,[r1+8]	
	jmp somabin

empilha:			@empilha o nó da esquerda
	push r3
	jmp verificaDireita

verificaDireita:	
	cmp r2,r5			@caso o nó direito seja nulo,quer dizer que não é possível mais descer pelo
	jnz direita			@nó atual,então é chamado desempilha para continuar percorrendo a árvore 
	jmp desempilha		@por outros nós que ainda não foram visitados
		

desempilha:				@obtem o valor do endereço do nó que está no topo da pilha
	ld r1,[sp]			@e depois o retira da pilha incrementando o valor de sp	
	add sp,4
	jmp somabin


		
	
