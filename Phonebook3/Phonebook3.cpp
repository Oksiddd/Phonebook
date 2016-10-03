#include "stdafx.h"
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "note.h"
using namespace std;

int main()
{
	Note obj;
	int s1;
	obj.Input("file.txt");
	while (true)
	{
		system("color 74");
		system("cls");
		cout << "This phonebook has " << obj.Size() << " notes." << endl << "----------------------" << endl << "Enter 1 to search" << endl << "Enter 2 to add" << endl << "Enter 3 to delete" << endl << "Enter 4 to show all" << endl << "Enter 5 to stop" << endl << "----------------------" << endl;
		cin >> s1;
		if (s1 == 1)
		{
			system("cls");
			string name;
			cout << "Enter name: ";
			cin >> name;
			obj.Search(name);
			system("pause");
		}
		if (s1 == 2)
		{
			system("cls");
			string name;
			int num;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter number: ";
			cin >> num;
			obj.Add(name, num);
		}
		if (s1 == 3)
		{
			system("cls");
			obj.Output();
			int x;
			cout << "Choose someone to delete (or enter 0 to cancel): ";
			cin >> x;
			obj.Erase(x);
		}
		if (s1 == 4)
		{
			system("cls");
			obj.Output();
			system("pause");
		}
		if (s1 == 5) { break; }
		obj.Save("file.txt");
	}
	obj.Close("file.txt");
}
