#include "stdafx.h"
#include <iostream>
#include "Note.h"
using namespace std;


void Note::Add(string s, int a)
{
	tel[a] = s;
}

void Note::Erase(int a)
{
	auto it = tel.begin();
	for (int i = 0; i < a - 1; i++) { it++; }
	tel.erase(it);
}

void Note::Search(string s)
{
	for (auto it = tel.begin(); it != tel.end(); ++it)
	{
		if (it->second == s) { cout << it->second << " " << it->first << endl; }
	}
}

int Note::Size()
{
	return tel.size();
}

void Note::Input(string filename)
{
	int a;
	string s;
	f.open(filename);
	while (!f.eof())
	{
		f >> s >> a;
		Add(s, a);
	}
}

void Note::Output()
{
	int e = 0;
	for (auto it = tel.begin(); it != tel.end(); ++it)
	{
		e++;
		cout << e << ". " << it->second << " " << it->first << endl;
	}
}

void Note::Save(string filename)
{
	f.open(filename);
	for (auto it = tel.begin(); it != tel.end(); ++it)
	{
		f << it->second << " " << it->first << endl;
	}
}

void Note::Close(string filename)
{
	f.close();
}