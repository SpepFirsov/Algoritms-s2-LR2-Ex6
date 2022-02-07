#include <iostream>
#include <iomanip>
#include <cstdlib>
//#include <stdio>
#include <stdlib.h>
using namespace std;

int f_id;
int i_id;
int o_id;
string F;
string I;
string O;

struct sotrudnik
{
    string rndfio;
    string fio;
    int tabelnumber;
    int hour_numb;
    double tariff;
} paycheck[100];

void rnd_fio()
{
    f_id = 0 + rand() % (8);
    i_id = 0 + rand() % (8);
    o_id = 0 + rand() % (8);


    if (f_id == 1)
    {
        F = "Карбунов";
    }
    else if (f_id == 2)
    {
        F = "Чербышев";
    }
    else if (f_id == 3)
    {
        F = "Марков";
    }
    else if (f_id == 4)
    {
        F = "Опракин";
    }
    else if (f_id == 5)
    {
        F = "Покретов";
    }
    else if (f_id == 6)
    {
        F = "Петрин";
    }
    else if (f_id == 7)
    {
        F = "Аторкин";
    }
    else if (f_id == 8)
    {
        F = "Шолохов";
    }

    //-------Имя------------
    if (i_id == 1)
    {
        I = "Антон";
    }
    else if (i_id == 2)
    {
        I = "Василий";
    }
    else if (i_id == 3)
    {
        I = "Иван";
    }
    else if (i_id == 4)
    {
        I = "Марк";
    }
    else if (i_id == 5)
    {
        I = "Владислав";
    }
    else if (i_id == 6)
    {
        I = "Макар";
    }
    else if (i_id == 7)
    {
        I = "Пётр";
    }
    else if (i_id == 8)
    {
        I = "Алексей";
    }
    //-----Отчество------------
    if (o_id == 1)
    {
        O = "Петрович";
    }
    else if (o_id == 2)
    {
        O = "Иванов";
    }
    else if (o_id == 3)
    {
        O = "Олегович";
    }
    else if (o_id == 4)
    {
        O = "Русланович";
    }
    else if (o_id == 5)
    {
        O = "Алексеевич";
    }
    else if (o_id == 6)
    {
        O = "Анатольевич";
    }
    else if (o_id == 7)
    {
        O = "Геннадьевич";
    }
    else if (o_id == 8)
    {
        O = "Николаевич";
    }
   


}

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int tabnumb;
    int hours;
    double tariff;
    int n, i;
    cout << "Кол-во сотрудников: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        rnd_fio();
        cout << "ФИО:";
        tabnumb = i+1;
        hours = 110 + rand() % (550);
        tariff= 10 + rand() % (24);
        paycheck[i].rndfio = F + " " + I + " " + O;
        paycheck[i].fio=paycheck[i].rndfio;
        paycheck[i].tabelnumber = tabnumb;
        paycheck[i].hour_numb = hours;
        paycheck[i].tariff = tariff;
        cout << paycheck[i].fio << endl;
        cout << "Табелный номер:"<< paycheck[i].tabelnumber<<endl;
        cout << "Кол-во часов:"<< paycheck[i].hour_numb<<endl;
        cout << "Почасовой тариф: " << paycheck[i].tariff << endl;
        cout<<"----------------------"<<endl;
    }
    cout << "Размер заработной платы (налоги 12%)" << endl;
    cout << "-----------------ФИО-----------Таб.номер----Зарплата" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(30) << paycheck[i].fio << setw(5) <<"    " << paycheck[i].tabelnumber << setw(15);
        if (paycheck[i].hour_numb > 144)
            cout << paycheck[i].tariff * (2 * paycheck[i].hour_numb - 144) * 0.88;
        else
            cout << paycheck[i].tariff * paycheck[i].hour_numb * 0.88;
        cout << endl;
    }
    return 0;
    system("pause");

}