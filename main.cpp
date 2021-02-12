#include <iostream>
#include <string>

using namespace std;

int main()
{

   string name, line1, line2, line3, mainLine = "";
   int length, width;
   bool isCorrect;

   do
   {
       cout << "Iveskite varda: ";
       cin >> name;
       for (int i = 0; i < name.length(); i ++)
    {
       if (isalpha(name[i]) == false)
       {
           isCorrect = false;
           cout << "Neteisingai ivestas vardas."<< endl;
           break;
       }
       else isCorrect = true;
    }
   }while(isCorrect == false);

    name[0] = toupper(name[0]);

   do
   {
    cout << "Iveskite remelio ilgi: ";
    cin >> length;
    if (length % 2 == 0 || length < 3)
        {
            isCorrect = false;
            cout << "Klaida. Skaicius turi buti nelyginis ir didesnis uz 3." << endl;
        }
        else isCorrect = true;
   }while(isCorrect == false);

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

       do
   {
    cout << "Iveskite remelio ploti: ";
    cin >> width;
    if (width <= mainLine.length() + name.length() + 2)
        {
            isCorrect = false;
            cout << "Klaida. Skaicius turi buti didesnis uz " << mainLine.length() + name.length() + 2 << endl;
        }
    else if ((mainLine.length() + name.length()) % 2 == 0 && width % 2 == 0)
    {
        isCorrect = false;
        cout << "Klaida. Skaicius turi buti lyginis." << endl;
    }
    else if ((mainLine.length() + name.length()) % 2 != 0 && width % 2 != 0)
    {
        isCorrect = false;
        cout << "Klaida. Skaicius turi buti nelyginis." << endl;
    }
    else isCorrect = true;
   }while(isCorrect == false);


    line1.append(width,'*');

    line2 = "*";
    line2.append(width - 2,' ');
    line2.append("*");

    line3 = "*";
    line3.append((width - mainLine.length() - 2 - name.length()) / 2,' ');
    line3 += mainLine + name + '!';
    line3.append((width - mainLine.length() - 2 - name.length()) / 2,' ');
    line3.append("*");

    cout << line1 << endl;

    for (int i = 0; i < (length - 3) / 2; i ++) cout << line2 << endl;

    cout << line3 << endl;

    for (int i = 0; i < (length - 3) / 2; i ++)cout << line2 << endl;

    cout << line1 << endl;


    return 0;
}
