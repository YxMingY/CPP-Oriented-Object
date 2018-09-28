#include "Person.h"
class Student : public Person
{
public:
  Student(char* _name,char* _sex,int _age,int _grade);
  int getGrade() const;
  void growUp();
private:
  int grade;
};