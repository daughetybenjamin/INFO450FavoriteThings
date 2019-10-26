#include <iostream>
#include <string>
#include "Vidya.h"
#include "VidyaList.h"
using namespace std;

VidyaList::VidyaList()
{
	numGames = 0;
}

void VidyaList::addGame()
{
	int i;
	games[numGames].getVidyaInput();
	for (i = 0; i < numGames; i++)
	{
		if (games[numGames] == games[i])
		{
			cout << "You've already added this game. Please try again." << endl;
			numGames--;
		}
	}
	numGames++;
}

void VidyaList::showList()
{
	int i;
	for (i = 0; i < numGames; i++)
	{
		cout << games[i];
	}
	cout << "Total number of games is " << numGames << "." << endl;
}

VidyaList::~VidyaList()
{
}
