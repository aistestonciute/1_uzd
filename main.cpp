#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name = name, line1, line2, line3, line4, line5, mainLine = "Sveiki, ";
    cout << "Iveskite varda: " << endl;
    cin >> name;

    line1.append(mainLine.length() + name.length() + 5,'*');

    line2 = "*";
    line2.append(mainLine.length() + name.length() + 3,' ');
    line2.append("*");

    line3 = "* " + mainLine + name + "! *";

    line4 = "*";
    line4.append(mainLine.length() + name.length() + 3,' ');
    line4.append("*");

    line5.append(mainLine.length() + name.length() + 5,'*');


    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << line4 << endl;
    cout << line5 << endl;


    return 0;
}