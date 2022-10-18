#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main() {

		int jogador, computador,rep;
		while(rep = 1){
		printf("----- Jogo de pedra, papel e tesoura -----\n");
		printf("Digite 1 para escolher PEDRA\n");
		printf("Digite 2  para escolher PAPEL\n");
		printf("Digite 3  para escolher TESOURA\n");
		printf("Sua escolha foi: ");
		scanf("%d",&jogador);
		
		
		switch(jogador){
	
		case 1:
			printf("Jogador escolheu PEDRA\n");
		break;
		
		case 2:
			printf("Jogador escolheu PAPEL\n");
		break;
		
		case 3:
			printf("Jogador escolheu TESOURA\n");
		break;
	}
		srand(time(NULL));
		computador=("%d",rand()%3+1);
		switch(computador){
	
		case 1:
			printf("Computador escolheu PEDRA\n");
		break;
		
		case 2:
			printf("Computador escolheu PAPEL\n");
		break;
		
		case 3:
			printf("Computador escolheu TESOURA\n");
		break;		
	}

		if(jogador==computador)
	{
		printf("EMPATE\n");
	}
			else if ((jogador==1 && computador==3) || (jogador==2 && computador==1) ||
	(jogador==3 && computador==2)){
	
		printf("Jogador venceu\n");
	}
	else
	{
		printf("Computador venceu\n");
	}
		printf("Deseja continuar? 1-sim, 2-nao\n");
		scanf("%d",&rep);
		}
		
	system("PAUSE");
	return 0;
}

