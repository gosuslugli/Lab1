#ifndef BASE_H
#define BASE_H

#include <string>
using namespace std;

// ОСНОВНОЙ КЛАСС
class Base
{
// основные методы
public:
    Base();
    Base(int size);
    Base(const Base &B);
    ~Base();
    virtual void Set() = 0; // добавить элемент
    virtual void Get() = 0; // получить элемент
    virtual void Delete() = 0; // удалить элемент
    virtual void Change() = 0; // изменить данные
    virtual void Load(int count, string line) = 0; // для выгрузки данных из файла
    virtual string Save(int count) = 0; // для выгрузки данных в файл
    virtual int TypeID() = 0; // чтобы понят студент или  учитель или администрация
};

class Car:public Base
{
private:
    string marka; // марка
    string model; // модель
    string V; // объем
    string color; // цвет
    string kpp; // КПП

public:
// создание конструкторов и деструктора
    Car(); // конструктор по умолчанию
    Car(string marka, string model, string v, string color, string kpp); // конструктор с параметром
    Car(const Car &С); // конструктор копирования
    ~Car(); // деструктор

// создание основных методов
    void Set() override; // добавление данных о книге
    void Get() override; // получениnaе данных о книге
    void Delete() override; // удаление данных о книге
    void Change() override; // изменение данных о книге
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

class Bike:public Base
{
private:
    string marka; // марка
    string model; // модель
    string V; // объем
    string P; // мощность
    string area; // облась

public:
// создание конструкторов и деструктора
    Bike(); // конструктор по умолчанию
    Bike(string marka, string model, string v, string P, string area); // конструктор с параметром
    Bike(const Bike &B); // конструктор копирования
    ~Bike(); // деструктор

// создание основных методов
    void Set() override; // добавление данных об учебнике
    void Get() override; // получение данных об учебнике
    void Delete() override; // удаление данных об учебнике
    void Change() override; // изменение данных об учебнике
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

class Bus:public Base
{
private:
    string marka; // марка
    string model; // модель
    string count; // сидящие места
    string all_count; // общее кол-во мест
    string destination; // пункт назначения

public:
// создание конструкторов и деструктора
    Bus(); // конструктор по умолчанию
    Bus(string marka, string model, string count, string all_count, string destination); // конструктор с параметром
    Bus(const Bus &B); // конструктор копирования
    ~Bus(); // деструктор

// создание основных методов
    void Set() override; // добавление данных о канцелярии
    void Get() override; // получение данных о канцелярии
    void Delete() override; // удаление данных о канцелярии
    void Change() override; // изменение данных о канцелярии
    void Load(int count, string line) override;
    string Save(int count) override;
    int TypeID() override;
};

#endif
