#include <iostream>
#include "Base.h"

using namespace std;

Base::Base()
{
    cout << "Вызван конструктор класса Base" << endl;
}
Base::Base(int size)
{
    cout << "Вызван конструктор с параметром класса Base" << endl;
}
Base::Base(const Base &B)
{
    cout << "Вызван конструктор копирования класса Base" << endl;
}
Base::~Base()
{
    cout << "Вызван деструктор класса Base" << endl;
}

// класс Car
// конструктор по умолчанию
Car::Car()
{
    this->marka = "NONE";
    this->marka = "NONE";
    this->V = "NONE";
    this->color = "NONE";
    this->kpp = "NONE";

    cout << "Вызван конструктор по умолчанию класса - Car" << endl;
}

// конструктор с параметром
Car::Car(string marka, string model, string v, string color, string kpp)
{
    this->marka = marka;
    this->marka = model;
    this->V = v;
    this->color = color;
    this->kpp = kpp;

    cout << "Вызван конструктор с параметром класса - Car" << endl;
}

// конструктор копирования
Car::Car(const Car &C)
{
    this->marka = C.marka;
    this->marka = C.model;
    this->V = C.V;
    this->color = C.color;
    this->kpp = C.kpp;

    cout << "Вызван конструктор копирования класса - Car" << endl;
}

// деструктор
Car::~Car()
{
    cout << "Вызван деструктор класса - Car" << endl;
}

// основные методы
// метод установки значения
void Car::Set()
{
    string buf;
    getline(cin, buf);

    cout << "Введите данные о машине:" << endl;

    cout << "Марка: ";
    getline(cin, this->marka);
    //cin >> this->name;

    cout << "Модель: ";
    getline(cin, this->model);
    //cin >> this->author;

    cout << "Объем ДВС: ";
    getline(cin, this->V);
    //cin >> year;

    cout << "Цвет: ";
    getline(cin, this->color);
    //cin >> this->annotation;

    cout << "Тип КПП: ";
    getline(cin, this->kpp);
    //cin >> this->genre;
}

// метод получения значений
void Car::Get()
{
    cout << "~~~Информация о машине~~~" << endl;
    cout << "Марка: " << this->marka << endl;
    cout << "Модель: " << this->model << endl;
    cout << "Объем ДВС: " << this->V << endl;
    cout << "Цвет: " << this->color << endl;
    cout << "Тип КПП: " << this->kpp << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// метод удаления данных
void Car::Delete()
{
    this->marka = "NONE";
    this->marka = "NONE";
    this->V = "NONE";
    this->color = "NONE";
    this->kpp = "NONE";
}

// метод изменения данных
void Car::Change()
{
    cout << "Выберите, что вы хотите изменить:" << endl;
    cout << "1 - Марка \n"
         << "2 - Модель \n"
         << "3 - Объем ДВС \n"
         << "4 - Цвет \n"
         << "5 - Тип КПП \n"
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 5) throw "Error";
    }
    catch(const std::exception& e)
    {
        cout << "Некорректный ввод" << endl;
    }
    catch(const char*mssg)
    {
        cout << "Неверный ввод" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "Марка: ";
        getline(cin, this->marka);
        //cin >> this->name;
    }

    else if (stoi(choice) == 2)
    {
        cout << "Модель: ";
        getline(cin, this->model);
        //cin >> this->author;
    }

    else if (stoi(choice) == 3)
    {
        cout << "Объем ДВС: ";
        getline(cin, this->V);
        //cin >> year;
    }

    else if (stoi(choice) == 4)
    {
        cout << "Цвет: ";
        getline(cin, this->color);
        //cin >> this->annotation;
    }

    else
    {
        cout << "КПП: ";
        getline(cin, this->kpp);
        //cin >> this->genre;
    }
}

// класс Bike
// конструктор по умолчанию
Bike::Bike()
{
    string marka = "NONE";
    string model = "NONE";
    string V = "NONE";
    string P = "NONE";
    string area = "NONE";

    cout << "Вызван конструктор по умолчанию класса - Bike" << endl;
}

// конструктор с параметром
Bike::Bike(string marka, string model, string v, string P, string area)
{
    this->marka = marka;
    this->model = model;
    this->V = v;
    this->P = P;
    this->area = area;

    cout << "Вызван конструктор с параметром класса - Bike" << endl;
}

// конструктор копирования
Bike::Bike(const Bike &B)
{
    this->marka = B.marka;
    this->model = B.model;
    this->V = B.V;
    this->P = B.P;
    this->area = B.area;

    cout << "Вызван конструктор копирования класса - Bike" << endl;
}

// деструктор
Bike::~Bike()
{
    cout << "Вызван деструктор класса - Bike" << endl;
}

// основные методы
// метод установки значения
void Bike::Set()
{
    string buf;
    getline(cin, buf);

    cout << "Введите данные о мотоцикле:" << endl;

    cout << "Марка: ";
    getline(cin, this->marka);
    //cin >> this->name;

    cout << "Модель: ";
    getline(cin, this->model);
    //cin >> this->author;

    cout << "V: ";
    getline(cin, this->V);
    //cin >> year;

    cout << "P: ";
    getline(cin, this->P);
    //cin >> educational_institution;

    cout << "Область: ";
    getline(cin, this->area);
    //cin >> year_of_study;
}

// метод получения значений
void Bike::Get()
{
    cout << "~~~Информация о мотоцикле~~~" << endl;
    cout << "Марка: " << this->marka << endl;
    cout << "Модель: " << this->model << endl;
    cout << "V: " << this->V << endl;
    cout << "P: " << this->P << endl;
    cout << "Область: " << this->area << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// метод удаления данных
void Bike::Delete()
{
    string marka = "NONE";
    string model = "NONE";
    string V = "NONE";
    string P = "NONE";
    string area = "NONE";
}

// метод изменения данных
void Bike::Change()
{
    cout << "Выберите, что вы хотите изменить:" << endl;
    cout << "1 - Марка \n"
         << "2 - Модель \n"
         << "3 - V \n"
         << "4 - P \n"
         << "5 - Область \n"
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 5) throw "Error";
    }
    catch(const std::exception& e)
    {
        cout << "Некорректный ввод" << endl;
    }
    catch(const char*mssg)
    {
        cout << "Неверный ввод" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "Марка: ";
        getline(cin, this->marka);
        //cin >> this->name;
    }

    else if (stoi(choice) == 2)
    {
        cout << "Модель: ";
        getline(cin, this->model);
        //cin >> this->author;
    }

    else if (stoi(choice) == 3)
    {
        cout << "V: ";
        getline(cin, this->V);
        //cin >> year;
    }

    else if (stoi(choice) == 4)
    {
        cout << "P: ";
        getline(cin, this->P);
        //cin >> educational_institution;
    }

    else
    {
        cout << "Область: ";
        getline(cin, this->area);
        //cin >> year_of_study;
    }
}

// класс Bus
// конструктор по умолчанию
Bus::Bus()
{
    this->marka = "NONE";
    this->model = "NONE";
    this->count = "NONE";
    this->all_count = "NONE";
    this->destination = "NONE";

    cout << "Вызван конструктор по умолчанию класса - Bus" << endl;
}

// конструктор с параметром
Bus::Bus(string marka, string model, string count, string all_count, string destination)
{
    this->marka = marka;
    this->model = model;
    this->count = count;
    this->all_count = all_count;
    this->destination = destination;

    cout << "Вызван конструктор с параметром класса - Bus" << endl;
}

// конструктор копирования
Bus::Bus(const Bus &B)
{
    this->marka = B.marka; // название
    this->model = B.model; // автор
    this->count = B.count; // год выпуска
    this->all_count = B.all_count; // аннотация
    this->destination = B.destination; // аннотация

    cout << "Вызван конструктор копирования класса - Bus" << endl;
}

// деструктор
Bus::~Bus()
{
    cout << "Вызван деструктор класса - Bus" << endl;
}

// основные методы
// метод установки значения
void Bus::Set()
{
    string buf;
    getline(cin, buf);

    cout << "Введите данные об автобусе:" << endl;

    cout << "Марка: ";
    getline(cin, this->marka);
    //cin >> this->type;

    cout << "Модель: ";
    getline(cin, this->model);
    //cin >> this->color;

    cout << "Кол-во сид.мест: ";
    getline(cin, this->count);
    //cin >> appointment;

    cout << "Общ. кол-во мест: ";
    getline(cin, this->all_count);
    //cin >> this->cost;

    cout << "Пункт назначения: ";
    getline(cin, this->destination);
}

// метод получения значений
void Bus::Get()
{
    cout << "~~~Информация о автобусе~~~" << endl;
    cout << "Марка: " << this->marka << endl;
    cout << "Модель: " << this->model << endl;
    cout << "Кол-во сид. мест: " << this->count << endl;
    cout << "Общее кол-во мест: " << this->all_count << endl;
    cout << "Пункт назначения: " << this->destination << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// метод удаления данных
void Bus::Delete()
{
    this->marka = "NONE";
    this->model = "NONE";
    this->count = "NONE";
    this->all_count = "NONE";
    this->destination = "NONE";
}

// метод изменения данных
void Bus::Change()
{
    cout << "Выберите, что вы хотите изменить:" << endl;
    cout << "1 - Марка \n"
         << "2 - Модель \n"
         << "3 - Кол-во сид. мест \n"
         << "4 - Общее кол-во мест \n"
         << "5 - Пункт назначения \n"
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string choice;

    try
    {
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            if (choice[i] >= 'A' and choice[i] <= 'Z' or choice[i] >= 'a' and choice[i] <= 'z') throw "Error";
        }
        if (stoi(choice) < 1 or stoi(choice) > 5) throw "Error";
    }
    catch(const std::exception& e)
    {
        cout << "Некорректный ввод" << endl;
    }
    catch(const char*mssg)
    {
        cout << "Неверный ввод" << endl;
    }

    string buf;
    getline(cin, buf);

    if (stoi(choice) == 1)
    {
        cout << "Марка: ";
        getline(cin, this->marka);
        //cin >> this->type;
    }

    else if (stoi(choice) == 2)
    {
        cout << "Модель: ";
        getline(cin, this->model);
        //cin >> this->color;
    }

    else if (stoi(choice) == 3)
    {
        cout << "Кол-во мест сид.: ";
        getline(cin, this->count);
        //cin >> appointment;
    }

    else if (stoi(choice) == 4)
    {
        cout << "Общее кол-во мест: ";
        getline(cin, this->all_count);
        //cin >> this->cost;
    }

    else
    {
        cout << "Пункт назначения: ";
        getline(cin, this->destination);
    }
}

// методты GetType

int Car::TypeID()
{
    return 1;
}
int Bike::TypeID()
{
    return 2;
}
int Bus::TypeID()
{
    return 3;
}

string Car::Save(int count)
{
    if (count == 0) return this->marka;
    else if (count == 1) return this->model;
    else if (count == 2) return this->V;
    else if (count == 3) return this->color;
    else if (count == 4) return this->kpp;
}

string Bike::Save(int count)
{
    if (count == 0) return this->marka;
    else if (count == 1) return this->model;
    else if (count == 2) return this->V;
    else if (count == 3) return this->P;
    else if (count == 4) return this->area;
}

string Bus::Save(int count)
{
    if (count == 0) return this->marka;
    else if (count == 1) return this->model;
    else if (count == 2) return this->count;
    else if (count == 3) return this->all_count;
    else if (count == 4) return this->destination;
}

void Car::Load(int count, string line)
{
    if (count == 0) this->marka = line;
    else if (count == 1) this->model = line;
    else if (count == 2) this->V = line;
    else if (count == 3) this->color = line;
    else if (count == 4) this->kpp = line;
}

void Bike::Load(int count, string line)
{
    if (count == 0) this->marka = line;
    else if (count == 1) this->model = line;
    else if (count == 2) this->V = line;
    else if (count == 3) this->P = line;
    else if (count == 4) this->area = line;
}

void Bus::Load(int count, string line)
{
    if (count == 0) this->marka = line;
    else if (count == 1) this->model = line;
    else if (count == 2) this->count = line;
    else if (count == 3) this->all_count = line;
    else if (count == 4) this->destination = line;
}
