/*
#include <iostream>
#include <string>
using namespace std;
//运算符重载
*/
/*
对于内置数据类型，编译器直到如何运算
通过自己写成员函数，也可以实现对象成员相加
可以通过全局函数或成员函数重载运算符
#运算符重载时可以发生函数重载e A
*/

//------------------------------------------------------

/*
1.加号运算符重载
(1)通过成员函数重载加号运算符
实质:p3=p1.operator+(p2)
(2)通过全局函数重载加号运算符
实质:p3=oprator+(p1,p2)

e.m. Person类
---------------------------------------------
*/
/*
class Person
{
public:
	Person();
	Person(int a, int b);
	int m_a;
	int m_b;
	void getab();
	Person personAddperson(Person&person01, Person&person02);//自己写的版本
	Person personAddperson01(Person& person01);//老师写的版本

	Person operator+(Person& person01);//用成员函数重载

};
Person::Person()
{
	cout << "无参构造函数被调用"<<endl;
}
Person::Person(int a,int b)
{
	m_a = a;
	m_b = b;
	cout << "有参构造函数被调用"<<endl;
}
Person Person::personAddperson(Person&person01, Person&person02)
{
	Person person3;
	person3.m_a = person01.m_a + person02.m_a;
	person3.m_b = person01.m_b + person02.m_b;
	return person3;
}

Person Person::personAddperson01(Person& person01)
{
	Person person02;
	person02.m_a = this->m_a + person01.m_a;
	person02.m_b = this->m_b + person01.m_b;
	return person02;
}

void Person::getab()
{
	cout << "a=" <<m_a << " " << "b=" <<m_b << endl;
}





//成员函数实现加号运算符重载
Person Person::operator+(Person& person01)
{
	Person person02;
	person02.m_a = this->m_a + person01.m_a;
	person02.m_b = this->m_b + person01.m_b;
	return person02;
}
*/
/*
//全局函数实现加号运算符重载
Person operator+(Person& person01, Person& person02)
{
	Person person3;
	person3.m_a = person01.m_a + person02.m_a;
	person3.m_b = person01.m_b + person02.m_b;
	return person3;
}
*/
/*
int main()
{
	Person person1(10, 100);
	Person person2(20,200);
	Person person10, person100;
	person10=person10.personAddperson(person1, person2);
	person1.getab();
	person2.getab();
	person10.getab();

	person100 = person1.personAddperson01(person2);
	//可用编译器提供的函数名operator+替换peronAddperson01
	//则又可以写为 person100=person1.operator+(person2)
	//如果使用这个函数名,这个式子就可以简化为person100=person1+person2
	person100 = person1 + person2;
	person100.getab();






//----------------------------------------------------------------

	Person p1(10,100) ,p2(20,200), p3;
	p3 = p1 + p2; //如果没写运算符重载，则+会报错 实际上是p3=p1.operator+(p2) 或 p3=oprator+(p1,p2)
	p3.getab();
	return 0;
}
*/