#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


void snb();
void bns();



int main()
{
	
	
	int p;

	menu:
	system("cls");

	
	cout << "Wybierz program\n1 - binarny na slowa\n2 - slowa na binarny\n";

	cin >> p;
	system("cls");



	
	switch (p)
	{
	case 1: bns(); break;

	case 2: snb(); break;

	default: goto menu; break;
		
	}
		

	

}
void bns()
{
	string k, kk,kkk;
	int d, p, e;



	cout << "Podaj kod binanry\n";

	cin >> kk;
	system("cls");

	 d = kk.length() / 7;

	 p = 0;
	e = 7;


	for (int i = 0; i < d; i++)
	{
		
			

		k = kk.substr(p, e);

		if (k[0] == '0')
			kkk = k.substr(1, 6);



		if (k == "1000001")
			cout << "a";
		if (k == "1000010")
			cout << "b";
		if (k == "1000011")
			cout << "c";
		if (k == "1000100")
			cout << "d";
		if (k == "1000101")
			cout << "e";
		if (k == "1000110")
			cout << "f";
		if (k == "1000111")
			cout << "g";
		if (k == "1001000")
			cout << "h";
		if (k == "1001001")
			cout << "i";
		if (k == "1001010")
			cout << "j";
		if (k == "1001011")
			cout << "k";
		if (k == "1001100")
			cout << "l";
		if (k == "1001101")
			cout << "m";
		if (k == "1001110")
			cout << "n";
		if (k == "1001111")
			cout << "o";
		if (k == "1010000")
			cout << "p";
		if (k == "1010001")
			cout << "q";
		if (k == "1010010")
			cout << "r";
		if (k == "1010011")
			cout << "s";
		if (k == "1010100")
			cout << "t";
		if (k == "1010101")
			cout << "u";
		if (k == "1010110")
			cout << "v";
		if (k == "1010111")
			cout << "w";
		if (k == "1011000")
			cout << "x";
		if (k == "1011001")
			cout << "y";
		if (k == "1011010")
			cout << "z";
		if (kkk == "100000")
			cout << ' ';

		kkk == "219830192";

		p += 7;

	}
}

void snb()
{

	string w;
	cout << "Podaj wiadomosc rozdzielona spacjami bez polskich znakow i znakow specjalnych" << endl;

	cin >> ws;
	getline(cin, w);
	system("cls");



	for (int i = 0; i < w.length(); i++)
	{
		if (w[i] == 'a' || w[i] == 'A')
			cout << "1000001";
		if (w[i] == 'b' || w[i] == 'B')
			cout << "1000010";
		if (w[i] == 'c' || w[i] == 'C')
			cout << "1000011";
		if (w[i] == 'd' || w[i] == 'D')
			cout << "1000100";
		if (w[i] == 'e' || w[i] == 'E')
			cout << "1000101";
		if (w[i] == 'f' || w[i] == 'F')
			cout << "1000110";
		if (w[i] == 'g' || w[i] == 'G')
			cout << "1000111";
		if (w[i] == 'h' || w[i] == 'H')
			cout << "1001000";
		if (w[i] == 'i' || w[i] == 'I')
			cout << "1001001";
		if (w[i] == 'j' || w[i] == 'J')
			cout << "1001010";
		if (w[i] == 'k' || w[i] == 'K')
			cout << "1001011";
		if (w[i] == 'l' || w[i] == 'L')
			cout << "1001100";
		if (w[i] == 'm' || w[i] == 'M')
			cout << "1001101";
		if (w[i] == 'n' || w[i] == 'N')
			cout << "1001110";
		if (w[i] == 'o' || w[i] == 'O')
			cout << "1001111";
		if (w[i] == 'p' || w[i] == 'P')
			cout << "1010000";
		if (w[i] == 'q' || w[i] == 'Q')
			cout << "1010001";
		if (w[i] == 'r' || w[i] == 'R')
			cout << "1010010";
		if (w[i] == 's' || w[i] == 'S')
			cout << "1010011";
		if (w[i] == 't' || w[i] == 'T')
			cout << "1010100";
		if (w[i] == 'u' || w[i] == 'U')
			cout << "1010101";
		if (w[i] == 'v' || w[i] == 'V')
			cout << "1010110";
		if (w[i] == 'w' || w[i] == 'W')
			cout << "1010111";
		if (w[i] == 'x' || w[i] == 'X')
			cout << "1011000";
		if (w[i] == 'y' || w[i] == 'Y')
			cout << "1011001";
		if (w[i] == 'z' || w[i] == 'Z')
			cout << "1011010";
		if (w[i] == ' ')
			cout << "0100000";



	}
}