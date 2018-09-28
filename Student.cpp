#include "Student.h"
Student::Student(char* _name,char* _sex,int _age,int _grade):Person(_name,_sex,_age),grade(_grade)
{}
int Student::getGrade() const
{
  return grade;
}
void Student::growUp(){
  Person::growUp();
  grade++;
}