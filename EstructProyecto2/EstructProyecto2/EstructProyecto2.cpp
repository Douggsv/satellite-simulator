// EstructProyecto2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

#define PI 3.14159265
#define G 9.8
#define VT 6370 //velocidad angular de la tierra Km
#define ALT 35786 //Distancia de un punto de la tierra al satélite Km

int opsum() {
	int a = 2;
	int suma = 0;
	suma = ((a) * (10));
	printf("suma= %d\n\n", suma);
	return suma;
	system("cls");

}



void main()
{
	setlocale(LC_ALL, "spanish");
	int p = 0;
	int op = 0; int op2 = 0;
	int num1 = 0;



	while (op != 4)
	{
		printf("\n		1.- Calcular trayectoria de reemplazo de un satelite nuevo con uno existente\n");
		printf("		2.- Calcular antenas receptoras en tierra a un satelite especifico\n");
		printf("		3.- Calcular antenas receptoras en tierra segun su posicion geográfica\n");
		printf("		4.- Salir\n");
		printf("		Indica la opcion: ");

		scanf_s("%d", &op);
		system("cls");

		if ((op != 4) && (op<4)) {
			printf("\n\n		Elige la ubicación del satélite= \n");
			printf("\n		1- Cabo Cañaveral\n");
			printf("\n		2- Puerto espacial Kourou\n");
				printf("\n		Introduce la opción= ");
				scanf_s("%d", &op2);
				 
			switch (op2)    //SWITCH DE LA UBICACIÓN.
			{
			case 1: num1 = op2;
				//system("pause");
				//system("cls");

				break;

			case 2: num1 = op2;
				break;
			}
			if (op2 > 2)
			{
				printf("\n\n		La ubicación no existe! Intentalo de nuevo\n\n");
			}
			
			//scanf_s("%d", &num2);
		}
		else { printf("\nIntroduce una opcion valida!!!\n");
		system("pause");
		system("cls");
		}

		switch (op)
		{
		case 1:            //SWITCH DEL MENÚ

			if (num1 == 1) {
				printf("\n\n		El satélite se lanzará desde Cabo Cañaveral\n\n");
				printf("\n		Calcularemos su trayectoria..."); //num1 va a tener el valor de la pos del cabo o de kourou.
				system("pause");
				system("cls");
			}
			if (num1 ==2) {
				printf("\n\n		El satélite se lanzará desde el Puerto Espacial Kourou\n\n");
				printf("\n		Calcularemos su trayectoria...");
				system("pause");
				system("cls");
			}

			break;

		case 4: break;
		}
	}
}
