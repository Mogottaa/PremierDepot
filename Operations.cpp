#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int a, int b)
{
	int resultat;
	
	resultat = a * b;
	
	return resultat;
}

int division(int a, int b)
{
	int resultat;
	
	resultat = a / b;
	
	return resultat;
}

int factoriel(int nb)
{
	int resultat;
	
	for (nb;nb>=0;nb--)
	{
		resultat = nb*nb--;
		
		return resultat;
	}
}

int exposant(int nb, int exp)
{
	int resultat;
	
	for (exp; exp<=0)
    
	{
		resultat= nb*nb;
	}
	
	return resultat;
}

int distance(int x,int y)
{
	int resultat;
	
	resultat = y-x;
	
	return resultat;
}
int nobrepremier (int nb)
{
	int resultat;
	
	resultat= nb / nb;
	
	return resultat;
}
