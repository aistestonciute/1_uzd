#include <iostream>
#include <string>

using namespace std;

string GetName()
{
    string name;
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

    return name;
}

int GetWidth()
{
    int width;
    bool isCorrect;
    do
   {
    cout << "Iveskite remelio ilgi: ";
    cin >> width;
    if (width % 2 == 0 || width < 3)
        {
            isCorrect = false;
            cout << "Klaida. Skaicius turi buti nelyginis ir didesnis uz 3." << endl;
        }
        else isCorrect = true;
   }while(isCorrect == false);
    return width;
}

string ChangeName(string name)
{
    if (name[name.length() - 2] == 'u')
       {
           name[name.length() - 2] = 'a';
           name[name.length() - 1] = 'u';
       }
       else if (name[name.length() - 2] == 'a') name[name.length() - 1] = 'i';
       else name.resize(name.length() - 1);
    return name;
}


void DefineMainLine (string &mainLine, string &name)
{
    if (name[name.length() - 1] == 's')
    {
        mainLine = "Sveikas, ";
        name = ChangeName(name);
    }

    else mainLine = "Sveika, ";
}

int GetLength(string mainLine, string name)
{
    int length;
    bool isCorrect;
    do
   {
    cout << "Iveskite remelio ploti: ";
    cin >> length;
    if (length <= mainLine.length() + name.length() + 2)
        {
            isCorrect = false;
            cout << "Klaida. Skaicius turi buti didesnis uz " << mainLine.length() + name.length() + 2 << "." << endl;
        }
    else if ((mainLine.length() + name.length()) % 2 == 0 && length % 2 == 0)
    {
        isCorrect = false;
        cout << "Klaida. Skaicius turi buti lyginis." << endl;
    }
    else if ((mainLine.length() + name.length()) % 2 != 0 && length % 2 != 0)
    {
        isCorrect = false;
        cout << "Klaida. Skaicius turi buti nelyginis." << endl;
    }
    else isCorrect = true;
   }while(isCorrect == false);

   return length;
}

void DefineLine(string &line1, string &line2, string &line3, int length, string mainLine, string name)
{
    line1.append(length,'*');

    line2 = "*";
    line2.append(length - 2,' ');
    line2.append("*");

    line3 = "*";
    line3.append((length - mainLine.length() - 2 - name.length()) / 2,' ');
    line3 += mainLine + name + '!';
    line3.append((length - mainLine.length() - 2 - name.length()) / 2,' ');
    line3.append("*");
}

void Print(string line1, string line2, string line3, int width)
{
    cout << line1 << endl;
    for (int i = 0; i < (width - 3) / 2; i ++) cout << line2 << endl;
    cout << line3 << endl;
    for (int i = 0; i < (width - 3) / 2; i ++)cout << line2 << endl;
    cout << line1 << endl;
}

int main()
{

   string name, line1, line2, line3, mainLine = "";
   int length, width;

   name = GetName();
   width = GetWidth();
   DefineMainLine(mainLine, name);
   length = GetLength(mainLine, name);
   DefineLine(line1, line2, line3, length, mainLine, name);
   Print(line1, line2, line3, width);


    return 0;
}
