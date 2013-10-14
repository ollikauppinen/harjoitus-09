/**********************************************************
*Teht„v„: Harjoitus9
*Tekij„: Olli Kauppinen
*PVM: 24.9.2013
*Kuvaus:
*Tee ohjelma, joka toimii laskimena.
*K„ytt„j„lt„ kysyt„„n kaksi kokonaislukua,
*jonka j„lkeen ohjelma antaa valikon
*laskutoimituksista. Valikko nayttaa
*seuraavalta:
*
*VALIKKO
*1. Summa
*2. Erotus
*3. Tulo
*4. Osamaara
*5. Jakojaannos
*
*Lopuksi ohjelma tulostaa valitun tuloksen nayt”lle.
*
* Versio 1.0 H4718 24.9.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	int luku1;
	int luku2;
	int valinta;
	int tulos;

	cout << "Anna kaksi lukua: \n";
	cin >> luku1;
	cin >> luku2;

	cout << "Ohjelman valinta: \n1. Summa\n2. Erotus\n3. Tulo\n4. Osam„„r„\n5. Jakok„„nn”s\n";
	cin >> valinta;

	switch (valinta)
	{
	case 1:
		{
		tulos = luku1+luku2;
		cout << "Summa = " << tulos;
		break;
		}
	case 2:
		{
		tulos = luku1-luku2;
		cout << "Erotus = " << tulos;
		break;
		}
	case 3:
		{
		tulos = luku1*luku2;
		cout << "Tulo = " << tulos;
		break;
		}
	case 4:
		{
		tulos = luku1/luku2;
		cout << "Osam„„r„ = " << tulos;
		break;
		}
	case 5:
		{
		tulos = luku1%luku2;
		cout << "Jakoj„„nn”s = " << tulos;
		break;
		}
	default:
		{
		cout << "\nv„„r„ valinta\n";
		break;
		}
	}
	cout << "\n";
}