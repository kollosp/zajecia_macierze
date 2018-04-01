#include <iostream>

using namespace std;

class Info{
public:
    string c_name;
    int c_age;

    Info(const string& m_name, int m_age):
        c_name(m_name), c_age(m_age){}

};

class Animal{
    string c_name;
    string c_age;
public:
    explicit Animal(const string&  m_name);
    explicit Animal(const Info&  m_age);
    string& name(){return c_name;}
};

Animal::Animal(const string &m_name) :
    c_name(m_name)
{

}

int main(int argc, char *argv[])
{

    string name = "cat";
    Animal m_cat(name);

    //Animal m_dog(Info("dog", 10));
    return 0;
}

