#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int id;
    int age;

    student()
    {
    }
    student(string name, int id, int age)
    {
        this->name = name;
        this->id = id;
        this->age = age;
    }
    void print_info()
    {
        cout << name << " " << id << " " << age << "\n";
    }
};

bool comp(student s, student s1)
{
    return s.id < s1.id;
}

class person
{
public:
    string name;
    person *father;
    person *mother;

    void print()
    {
        cout << name << " " << father->name << " " << mother->name << "\n";
    }
};

class user
{
protected:
    string name;
    int age;
};

class admin : user
{
    string designation;

public:
    void set(string name, int age, string designation)
    {
        this->name = name;
        this->age = age;
        this->designation = designation;
    }
    void print()
    {
        cout << name << " " << age << " " << designation;
    }
};

int main()
{
    // student s[10];
    vector <student> s;
    for (int i = 0; i < 10; i++)
    {
        s.push_back(student("A", 20 - i, 20));
        // s[i]=student();
    }
    sort(s.begin(), s.end(), comp);
    for (int i = 0; i < 10; i++)
    {
        s[i].print_info();
    }

    // admin ad;
    // ad.set("A", 20, "D");
    // student s("chayan",12,23);
    // s.print_info();
    // person p;
    // p.name = "chayan";
    // p.father=new person;
    // p.mother=new person;
    // p.father->name = "Rezaul Karim";
    // p.mother->name = "Arjuman Ara";
    // p.print();
    return 0;
}