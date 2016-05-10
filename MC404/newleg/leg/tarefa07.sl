@Pedro Luis Marques Sliuzas RA:158343
@MC404 -- Tarefa 07 -- Semáforo de cruzamento

SEMAFORO0 		.equ 0x21
SEMAFORO1       .equ 0x22
BOTAO			.equ 0x10

@r0 cuida do sinal do semaforo0
@r1 cuida do sinal do semaforo1
@r2 cuida do sentido em que o semaforo0 está indo
@r3 cuida do sentido em que o semaforo1 está indo
@r4 é utilizado de auxiliar para guardar o número 1,que será utilizado para inverter o sentido dos semaforos
@r5 obtem o comando do botão

	.org 0x100
init:
	set r0,1    @O sinal está verde
	set r1,4	@O sinal está vermelho   
	out SEMAFORO0,r0   
	out SEMAFORO1,r1
	set r2,1 @ o semaforo1 está voltando(sentido verde,amarelo,vermelho)
	set r3,0 @ o semaforo2 está indo(sentido vermelho,amarelo,verde)
	set r4,1	
	in r5,BOTAO 
	cmp r5,1    @caso o botão seja apertado chama aperta0,se não chama comeco
	jz aperta0  
	jmp comeco


@fica rodando o programa até que o botão seja apertado
comeco:				
	in r5,BOTAO 
	cmp r5,1
	jz aperta0
	jmp comeco
@verifica se deve-se deslocar r0 para direita ou esquerda
aperta0:
	cmp r2,0
	jz direita0
	jnz esquerda0
	
@desloca para a direita r0	
direita0:
	shr r0,1
	jmp aperta1

@desloca para a esquerda r0
esquerda0:
	shl r0,1
	jmp aperta1

@verifica se deve-se deslocar r1 para direita ou esquerda
aperta1:
	cmp r3,0
	jz direita1
	jnz esquerda1

@desloca r1 para a direita e manda os sinais para os semaforos
direita1:
	shr r1,1
	out SEMAFORO0,r0
	out SEMAFORO1,r1
	cmp r1,1
	jz  inverte 
	jmp comeco
@desloca r1 para a esquerda e manda os sinais para os semaforos
esquerda1:
	shl r1,1
	out SEMAFORO0,r0
	out SEMAFORO1,r1
	cmp r1,4
	jz  inverte
	jmp comeco
@inverte o sentido do qual os semaforos estão percorrendo	
inverte:
	xor r2,r4
	xor r3,r4
	jmp comeco
	
		
		
