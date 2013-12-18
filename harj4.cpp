/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus4
*Tekijä: Noora Kuikka
*PVM: 01.10.2013
*Kuvaus:
*Harjoitus 4 (palautus vko 39)
*
*Ks. ohjelmakoodia: harj4 (omat esimerkit)
*
*a) Kirjoita, tallenna ja suorita ym. ohjelma.
*b) Kommentoi ylla olevan esimerkin kaikki rivit (mitä rivillä tapahtuu).
*c) Muuta vakioden nimet niin, että
*MAX => MINIMI
*max => MAKSIMI
*
*Muuta ohjelmaa niin, että voit tulostaa ohjelmalla seuraavat ilmoitukset:
*Summa on pienempi kuin MINIMI
*Summa on suurempi kuin MAKSIMI
*Summa on MINIMIN ja MAKSIMIN välissä
*Versio 1.0 H4719 01.10.2013
**************************************************************************************************************************************************************/

#include <iostream> // Allow for input and output
using namespace std; // Include namespace std
#define MINIMI 10 // Give "MINIMI" the value of 10
const int MAKSIMI = 20; // Give integer "MAKSIMI" the constant value of 20
int summa; // Define integer "summa"
void Laske(int, int); // Introduce the method "Laske"
void main() // Start of main program
{
	int luku1 = 2; // Give integer "luku1" the value of 2
	int luku2; // Define integer "luku2"
	cout << "Syˆt‰ luku: "; // Output text asking the user to input a number
	cin >> luku2; // Allow for user input, store the value in "luku2"
	Laske(luku1, luku2); // Call method "Laske"
	if (summa < MINIMI) // Check if the user input is lower than the value of 10
		cout << "Summa on pienempi kuin "<<MINIMI; // If this is true, print this line
	if (summa > MAKSIMI) // Check if the user input is greater than the value of 20
		cout << "Summa on suurempi kuin "<<MAKSIMI; // If this is true, print this line
	if (summa > MINIMI && summa < MAKSIMI) // Check if the user input is between 10 and 20
		cout << "Summa on " <<MINIMI // If this is true, print this line
		     << " ja " <<MAKSIMI 
			 << " v‰liss‰.";
	
}
void Laske(int eka, int toka) // Create method "Laske" to add two numbers together
{
	summa = eka + toka; // The value of "summa" is "eka" + "toka"
}