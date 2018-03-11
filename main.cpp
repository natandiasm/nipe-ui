#include <iostream>
#include <stdlib.h>

using namespace std;

void logo () {
         cout <<"         _                ";
         cout <<"\n _ __   (_)  _ __     ___ ";
         cout <<"\n| ._ \   | | | ._ \   / _ \ ";
         cout <<"\n| | | | | | | |_) | |  __/ ";
         cout <<"\n|_| |_| |_| | .__/   \___| ";
         cout <<"\n            |_|  <<TUI>> v0.1a\n";
}

void menu (int &op) {
         cout << "\n   |--------------|";
         cout << "\n   |  1 - Start   |";
         cout << "\n   |  2 - Status  |";
         cout << "\n   |  3 - Stop    |";
         cout << "\n   |  4 - About   |";
         cout << "\n   |  0 - Exit    |";
         cout << "\n   |Select option: ";
         cin >> op;
         cout << "   |";
}

void processing (int &op) {
    switch (op) {
            case 1 : system("perl nipe.pl start");
                     system("pause");
                break;
            case 2 : system("perl nipe.pl status");
                     system("pause");
                break;
            case 3 : system("perl nipe.pl stop");
                     system("pause");
                break;
            case 4 : system("cls");
                     cout << "\n|------------------------------------------------------------ |\n";
                     logo();
                     cout << "\n is simply a Text-based user interface for the nipe.          |";
                     cout << "\n|                 by: Natan Dias.                             |";
                     cout << "\n|    Nipe is a project of Heitor Gouvea with MIT license      |";
                     cout << "\n|            Nipe TUI is licensed under MIT.                  |";
                     cout << "\n|------------------------------------------------------------ |\n";
                     system("pause");
                break;
            case 0 : system("perl nipe.pl stop");
                     cout << "\n bye bye...";
                     op = 0;
                break;
            default : cout << " Option invalid!\n";
                            system("pause");
                break;
    }
}

int main()
{
     int op = -1;
     while(op != 0) {
         system("cls");
            //logo_text
            logo();
            //menu
            menu(op);
            //menu processing.
            processing(op);
    }
 return 0;
}
