// pasport.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Pasport {
    string number;
    string name;
    string surname;
    string secondname;

public:
    Pasport(string number, string name, string surname, string secondname) : number{ number },
        name{ name },
        surname{ surname },
        secondname{ secondname }{}

    void print()
    {
        cout << number << endl;
        cout << name << endl;
        cout << surname << endl;
        cout << secondname << endl;
    }

};

class ForeignPassport : Pasport {
    string ForeignNumber;
    string VisasInformation;
public:
    ForeignPassport(string number, string name, string surname, string secondname, string ForeignNumber, string VisasInformation) :Pasport(number, name, surname, secondname),
        ForeignNumber{ForeignNumber},
        VisasInformation{VisasInformation}{}

    void ForeignPrint()
    {
        print();
        cout << ForeignNumber << endl;
        cout << VisasInformation << endl;
    }

};
int main()
{
    Pasport a("1234567890", "asda", "asda", "asdas");
    ForeignPassport b("1234567890", "asda", "asda", "asdas", "123123", "no");
    b.ForeignPrint();
    std::cout << "Hello World!\n";
}

