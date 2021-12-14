//#include<iostream>
//using namespace std;
////常函数 常对象
//class Person
//{
//public:
//	//this指针的本质是指针常量 指针的指向是不可以修改的
//	//this指针本质:Person const *this;
//	//const Person const *this
//	//在成员函数后面加了const 本质是修饰this指针 让指针指向的值也不可以修改
//	void showperson() const
//	{
//		//this->m_a = 100;//this指针指向的值可以修改 但是加了const以后就不可修改了
//		//this = NULL;//this的指向不可修改 这行代码会报错
//
//		this->m_b = 100;//加了mutable的属性可以在常函数中修改
//	}
//	void func() {};
//	int m_a;
//	mutable int m_b;//加了mutable的属性可以在常函数和常对象中修改
//};
//void test01()
//{
//	Person p1;
//	p1.showperson();
//}
////常对象
//void test02()
//{
//    const Person p2;
//	//p2.m_a = 100;//常对象的属性不可修改
//	p2.m_b = 100;//加了mutable的属性可以在常变量中修改
//	//p2.func();//常对象不能调用普通函数
//	p2.showperson();//常对象只能调用常函数
//}