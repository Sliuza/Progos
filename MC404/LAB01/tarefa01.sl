@Pedro Luis Marques Sliuzas RA 158343
@Tarefa 01 de mc404abe — Familiarização com as ferramentas

	.org  0x200
@carrega as constantes nos registradores
init:
	set  r0,0x5000
	set  r1,0x200
@faz a soma 0x5000 + 0x200
	add  r0,r1
@faz a soma de forma que dê o resultado 4*(0x5000+0x200)
	add  r0,r0
	add  r0,r0
@termina o programa	
	hlt
