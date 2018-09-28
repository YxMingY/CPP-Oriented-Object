#include <iostream>
//#include "Person.h"
#include "Student.h"
using namespace std;
int main()
{
  Student *p = new Student("小铭","男",12,6);
  cout<<"我叫"<<p->getName()<<"，是一个"<<p->getAge()<<"岁的"<<p->getGrade()<<"年级小"<<p->getSex()<<"生"<<endl;
  p->growUp();
  cout<<"过了一年，我"<<p->getAge()<<"岁"<<p->getGrade()<<"年级了"<<endl;
  delete p;
  return 0;
}