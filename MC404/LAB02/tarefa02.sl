@Pedro Luis Marques Sliuzas RA:158343
@MC404 -- Tarefa 02 -- Invertendo uma sequencia de caracteres	
@constantes	
	INI		.equ  0x100

	.org 0x200

@r1 eh utilizado para percorrer a memoria onde estah a cadeia de caracteres
@r2 eh utilizado para obter o dado dentro de r1, ou seja, o caracter
@r3 e r4 eh usado para guardar um caracter, servindo de auxiliar 
@r5 eh usado como contador
init:
@inicializa r1 com o endereco de memoria de onde estara o primeiro caracter	
	set r1,INI
	
loop:	
@percorre a memoria a partir de 0x100 ate encontrar o caracter com valor 0x00	
	ldb   r2,[r1]
	add  r1,1
	add  r5,1
	cmp  r2,0
	jnz  loop

@volta r1 ate a posicao em que existia o ultimo caracter e subtrai de r5 para nao contar o 0x00
@como caracter
	sub  r1,2
	sub	 r5,1
@agora r2 eh usado para percorrer a memoria na direcao contraria a de r1,por isso eh inicializado
@com o endereco da origem da cadeia de caracteres 
	set   r2,INI
inverte:
@troca o ultimo caracter com o primeiro,penultimo com o segundo e assim por diante usando dois 
@auxiliares,r3 e r4, para obter o caracter e dois registradores para saber o endereco que se deve
@colocar esses caracteres.
	ldb  r3,[r2] 
	ldb  r4,[r1]
	stb	 [r2],r4
	stb  [r1],r3
	sub  r1,1
	add  r2,1
@faz a subtracao por dois de r4,que eh o contador, quando r4 for igual a 1 ou 0 quer dizer que nao
@ha mais necessidade de troca de caracteres e a cadeia jah estah invertida entao acontece o desvio
	sub  r5,2
	cmp  r5,1
	jge inverte
	
@termina o programa
	hlt	
	
	
	
		
	  
	
	
