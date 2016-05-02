@Pedro Luis Marques Sliuzas RA:158343
@MC404 -- Tarefa 05 -- Bits palíndromos
	
	.org 0x400
@r1 obtem a palavra e depois eh modificado obtendo a metade direita da palavra
@r2 obtem a palavra e depois eh modificado obtendo a metade esquerda da palavra
@r11 vai ser rotacionado bit a bit
@r12 vai obtem o carry bit a bit da rotacao de r11
@r13 possui o tamanho da cadeia de bits, que nesse caso eh 16
@verifica se a palavra eh um palindromo
palind32:
	set r13,16
	ld r1,[sp+4] @obtem a palavra
	mov r2,r1 @copia a palavra para r2
	shl r1,16 @desloca 16 bits para a esquerda para zerar metade dos bits
	shr r1,16 @desloca 16 bits para a direita para deixar todos bits significantes na direita
	shr r2,16 @desloca 16 bits para a direita assim r2 soh ira possuir a metade esquerda da palavra
	mov r11,r1 @copia o valor de r1 para r11
	xor r12,r12 @zera r12
	jmp inverte
	
	
palindromo:
	set r0,1
	ret
	
inverte:
	rcr    r11,1         @ novo bit 0 ou 1 no bit C ('vai-um')
	rcl    r12,1         @ monta novo bit em r12
	sub    r13,1         @ chegou ao final da cadeia?
	jnz    inverte     
	cmp r2,r12 @caso o lado esquerdo da palavra seja igual o lado direito,então eh um palindromo
	jz palindromo
	set r0,0
	ret
