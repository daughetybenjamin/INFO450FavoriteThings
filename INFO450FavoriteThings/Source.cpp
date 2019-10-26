#include <iostream>
#include <string>
#include "Vidya.h"
#include "VidyaList.h"
using namespace std;

int main() 
{
	VidyaList list1;
	char cont = 'y';
	cout << "This application will track information that you input about several video games." << endl;

	do {
		cout << "Enter the information for game " << list1.numGames + 1 << "." << endl;
		list1.addGame();
		cout << "Add another game? Y/N: ";
		cin >> cont;
		cin.ignore();
	} while (cont == 'y' || cont == 'Y');

	cout << endl << "Here is the list of games you've added:" << endl;
	list1.showList();

	system("pause");
	return 0;
}