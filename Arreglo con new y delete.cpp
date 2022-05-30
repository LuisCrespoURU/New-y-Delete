#include <iostream>
#include <conio.h>
#include <stdlib.h>

void Pnotas(), Mnotas();

int Ncal, *cal;

int main (){
	Pnotas();
	Mnotas();
	
	delete[] cal;
	return 0;
	
}

void Pnotas(){
	printf ("Ingrese el numero de notas");
	scanf ("%d",&Ncal);
	
	cal= new int[Ncal];
	
	for (int i=0;i<Ncal;i++){
	
	printf (" Ingrese una nota: ");
	scanf ("%d",&cal[i]);
	}
}

void Mnotas(){
	printf ("Las notas ingresados son: ");
		for (int i=0;i<Ncal;i++){
	printf ("%d ",cal[i]);
	
	}
}
