#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "header.h"

using namespace std;

int main() {
	laia programa("laia");
	userinterface ui;
	cout<<programa.name_output()<<endl;
	ui.standard();
	cout<<"hola"<<endl;
	cin.ignore();
	return 0;
}
