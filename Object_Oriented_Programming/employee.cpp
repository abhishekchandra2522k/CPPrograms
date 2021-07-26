#include <iostream>

using std::string;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee // Employee is parent class, base class
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name) // setter
    {
        Name = name;
    }

    string getName() // getter
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
    }

    int getAge()
    {
        return Age;
    }
    void introduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void askForPromotion()
    {
        if (Age > 23)
        {
            std::cout << Name << " got promoted." << std::endl;
        }
        else
        {
            std::cout << Name << ", sorry no promotion for you." << std::endl;
        }
    }

    virtual void Work()
    {
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

class Developer : public Employee
{ // child class for Employee
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string FPL) : Employee(name, company, age)
    {
        FavProgrammingLanguage = FPL;
    }
    void fixBug()
    {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    void Work()
    {
        std::cout << Name << " is writing " << FavProgrammingLanguage << " code." << std::endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }
    void Work()
    {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }
};

int main()
{
    Employee employee1("Abhishek", "ABC", 21); // employee1 = Employee("Abhishek", "ABC", 21)

    Employee employee2("Mo", "ZTM", 31);

    Developer d("Abhishek", "ABC", 21, "C++");
    d.fixBug();
    d.askForPromotion();
    Teacher t("Siddharth", "BOFA", 24, "Python");
    t.PrepareLesson();
    t.askForPromotion();

    d.Work();
    t.Work();

    // the most common use of polymorphism is when a
    // parent class reference us used to refer to a child class object
    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();
    return 0;
};