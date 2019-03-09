#include <stdio.h>

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
int x, y;
} Posicao; //Posicao é o nome do tipo criado pelo o qual vamos chamar caso quisermos usar

Posicao posFinal (Posicao inicial, Movimento mov[], int N) {
	//struct posicao p; //Para definir uma variavel de um certo struct tem que se usar struct *nome_da_struct* *variavel* neste caso nao era necessario mas fica aqui o exemplo
	int i;
	for (i = 0;i<N;i++) 
		switch (mov[i]) {
			case Norte:
				inicial.y += 1;
				break;
			case Sul:
				inicial.y -= 1;
				break;
			case Este:
				inicial.x += 1;
				break;
			case Oeste:
				inicial.x -=1;
				break;
		}
	return inicial;
}