class Person
{
public:
  Person(char* _name,char* _sex,int _age);
  char* getName() const;
  char* getSex() const;
  int getAge() const;
  void growUp();
protected:
  char* name;
  char* sex;
  int age;
};