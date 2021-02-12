#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name = name, line1, line2, mainLine = "";
    cout << "Iveskite varda: " << endl;
    cin >> name;

    if (name[name.length() - 1] == 's')
    {
        mainLine = "Sveikas, ";
       if (name[name.length() - 2] == 'u')
       {
           name[name.length() - 2] = 'a';
           name[name.length() - 1] = 'u';
       }
       else if (name[name.length() - 2] == 'a') name[name.length() - 1] = 'i';
       else name.resize(name.length() - 1);
    }


    else mainLine = "Sveika, ";

    line1.append(mainLine.length() + name.length() + 5,'*');

    line2 = "*";
    line2.append(mainLine.length() + name.length() + 3,' ');
    line2.append("*");

    cout << line1 << endl;
    cout << line2 << endl;
    cout << "* " + mainLine + name + "! *" << endl;
    cout << line2 << endl;
    cout << line1 << endl;


    return 0;
}
