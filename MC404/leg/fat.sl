	.org 0
	bloco2: .word 10
init:
	set sp,0
	jmp fatorial
	hlt



fatorial:
ld    r0,[sp]       @ valor de n
cmp   r0,1            @ n<=1?
ja    fat1            @ se n~ao, desvia para calcular fatorial
set   r0,1            @
ret                   @ retorna fatorial(0) ou fatorial(1)

fat1:
sub   r0,1            @ calcula recursivamente fatorial(n-1)
push  r0              @ empilha par^ametro
call  fatorial        @ chama recursivamente
add   sp,4            @ retira par^ametro da pilha
@ neste ponto, r0 tem valor de fatorial(n-1)
ld    r1,[sp+4]       @ recupera novamente valor de n
mov   r2,r0           @ copia fatorial(n-1) em r2
ret                   @ retorna, r0 tem valor de fatorial(n)
