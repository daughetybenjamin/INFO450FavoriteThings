#pragma once
#include <iostream>
#include <string>
#include "Vidya.h"
using namespace std;

class VidyaList
{
private:
	Vidya games[100];
public:
	int numGames;
	VidyaList();
	void addGame();
	void showList();
	~VidyaList();
};

