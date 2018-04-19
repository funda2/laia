#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

void gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

class laia {
	public:
    laia(string);
		void name_input(string);
		string name_output();
	private:
		string name;
		string time;
};

laia::laia(string aaa) {
  name = aaa;
}
void laia::name_input(string aaa) {
	name = aaa;
}
string laia::name_output() {
	return name;
}

class userinterface {
  public:
    void standard();
  private:
    int super_rand_num;
};

void userinterface::standard() {
  cout<<"> ";
}

#endif
