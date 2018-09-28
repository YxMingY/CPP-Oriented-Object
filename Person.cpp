#include "Person.h"
Person::Person(char* _name,char* _sex,int _age):name(_name),sex(_sex),age(_age)
{}
char* Person::getName() const
{
  return name;
}
char* Person::getSex() const
{
  return sex;
}
int Person::getAge() const
{
  return age;
}
void Person::growUp()
{
  age++;
}