

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Header.h"



int main()
{
	int polje[11][11];
	int i, j;
	int koordinataX, koordinataY;
	int rndbr1, rndbr2, rndbr3;
	int yOs = 1, xPokusaj, yPokusaj;
	char IgracePolje[11][11];
	char xOs = '1';
	struct brod *krstarica;
	krstarica = (struct brod*)malloc(1 * sizeof(struct brod));
	struct brod *razarac;
	razarac = (struct brod*)malloc(1 * sizeof(struct brod));
	struct brod *podmornica;
	podmornica = (struct brod*)malloc(1 * sizeof(struct brod));
	struct brod *borbenibrod;
	borbenibrod = (struct brod*)malloc(1 * sizeof(struct brod));
	int br = 0;
	int pogodak = 0;

	for (i = 0; i < 11; i++) {
		for (j = 0; j < 11; j++) {
			polje[i][j] = 0;
		}
	}
	
	
	srand((unsigned)time(NULL));
	
	

	rndbr1 = rnd();
	rndbr2 = rnd();
	rndbr3 = rnd();

	
	
	
	genCord(krstarica,rndbr1);
	genCord4(borbenibrod,rndbr2);
	genCord2(razarac,rndbr3);
	genCord3(podmornica);
	


	NapraviPolje(IgracePolje, xOs);
	NacrtajPolje(IgracePolje, xOs, yOs);
	printf("%d", krstarica->x1);
	printf("%d", krstarica->x2);
	printf("%d", krstarica->x3);
	printf("%d", krstarica->y1);
	printf("%d", krstarica->y2);
	printf("%d\n", krstarica->y3);
	printf("%d", razarac->x1);
	printf("%d", razarac->x2);
	printf("%d", razarac->y1);
	printf("%d\n", razarac->y2);
	printf("%d", podmornica->x1);
	printf("%d\n", podmornica->y1);
	printf("%d", borbenibrod->x1);
	printf("%d", borbenibrod->x2);
	printf("%d", borbenibrod->x3);
	printf("%d", borbenibrod->x4);
	printf("%d", borbenibrod->y1);
	printf("%d", borbenibrod->y2);
	printf("%d", borbenibrod->y3);
	printf("%d\n", borbenibrod->y4);

	do {
		
		printf("\nUnesi x koordinatu:\n");
		scanf("%d", &xPokusaj);
		printf("\nUnesi y koordinatu\n");
		scanf("%d", &yPokusaj);

		if ((xPokusaj == krstarica->x1 && yPokusaj == krstarica->y1) || (xPokusaj == krstarica->x2 && yPokusaj == krstarica->y2)
			|| (xPokusaj == krstarica->x3 && yPokusaj == krstarica->y3)) 
		{
			IgracePolje[xPokusaj][yPokusaj] = 'O';
			pogodak++;
		}
		else if((xPokusaj == razarac->x1 && yPokusaj == razarac->y1) || (xPokusaj == razarac->x2 && yPokusaj == razarac->y2)){
			IgracePolje[xPokusaj][yPokusaj] = 'O';
			pogodak++;
		}
		else if ((xPokusaj == borbenibrod->x1 && yPokusaj == borbenibrod->y1) || (xPokusaj == borbenibrod->x2 && yPokusaj == borbenibrod->y2)
			|| (xPokusaj == borbenibrod->x3 && yPokusaj == borbenibrod->y3) || (xPokusaj==borbenibrod->x4 && yPokusaj==borbenibrod->y4))
		{
			IgracePolje[xPokusaj][yPokusaj] = 'O';
			pogodak++;
		}
		else if ((xPokusaj == podmornica->x1 && yPokusaj == podmornica->y1)) 
		{
			IgracePolje[xPokusaj][yPokusaj] = 'O';
			pogodak++;
		}
		else 
		{
			IgracePolje[xPokusaj][yPokusaj] = 'X';
		}
		NacrtajPolje(IgracePolje, xOs, yOs);
		br++;
	} while (br < 100);
	
	free(krstarica);
	free(razarac);
	free(podmornica);
	free(borbenibrod);
	
	return 0;
}


