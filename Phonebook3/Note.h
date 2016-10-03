#pragma once
#include "stdafx.h"
#include <map>
#include <fstream>
#include <string>
using namespace std;

class Note
{
	map <int, string> tel;
	fstream f;

public:

	virtual void Add(string s, int a);
	void Erase(int a);
	void Search(string s);
	int Size();
	void Output();
	void Input(string filename);
	void Save(string filename);
	void Close(string filename);
};

