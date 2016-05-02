@Pedro Luis Marques Sliuzas RA: 158343

	.org 0x200

@r0 vai guardar a cadeia de caracteres
@r1 vai guardar a posicao da memoria da cadeia de caracteres
@r2 vai obter o valor do caracter
@r3 vai servir para zerar os bytes da cadeia de caracteres

@inicialiaza o programa e coloca r1 no inicio da cadeia de caracteres	
init:
	set r1,0x104

@percorre o vetor de caracteres e verifica se o caracter eh 0x00,caso não seja,desloca para esquerda
@4 bytes de r0
percorre:
	ldb r2,[r1]
	cmp r2,0
	jz finaliza
	shl r0,4
	add r1,1
	jmp verifica

@verifica se o valor eh um numero ou um caracter
verifica:
	cmp r2,0x39
	jle transformaNum
	cmp r2,0x61
	jge transformaCarac

@transforma o valor de r0 que esta em ASCII para hexadecimal,de forma que ambos tenham o mesmo
@significado	
transformaNum:	
	sub r2,0x30
	add r0,r2
	jmp percorre
	
transformaCarac:
	sub r2,0x57
	add r0,r2
	jmp percorre

@finaliza o programa mandando o valor em r0 para 0x100 e zerando toda cadeia de caracteres
finaliza:
	st 0x100,r0
	st 0x104,r3
	st 0x108,r3
	hlt		
