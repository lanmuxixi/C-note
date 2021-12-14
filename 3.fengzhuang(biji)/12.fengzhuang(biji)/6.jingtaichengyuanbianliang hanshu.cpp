//#include<iostream>
//using namespace std;
////静态成员变量
////所有对象都共享一个数据
////编译阶段就分配内存
////类内声明，类外初始化
////可以通过类名访问静态成员变量，也可以通过对象访问静态成员变量
////静态成员变量也有访问权限 类外访问不到私有静态成员变量
//
////静态成员函数
////所有对象共享同一个函数
////只能访问静态成员变量
////可以通过对象访问 也可以通过类名访问
//class Person
//{
//public:
//	static int m_A;
//	static int m_C;
//	int m_D;
//	static void func()
//	{
//		cout<<"调用static void func()"<<endl;
//		m_A = 200;
//		//m_D = 500;会报错 静态成员函数无法访问非静态成员变量
//	}
//private:
//	static int m_B;
//	static void func2()
//	{
//		cout << "static void fucn2调用" << endl;
//	}
//};
//int Person::m_A = 100;
//int Person::m_B = 200;
//int Person::m_C = 300;
//void test01()
//{
//	Person p1;
//	Person* p2 = new Person;
//	p1.m_A = 300;
//	cout << p1.m_A << endl;
//	p2->m_A = 500;
//	cout << p2->m_A << endl;
//	cout << Person::m_A << endl;
//
//	//Person::m_B = 100; 类外无法访问私有静态成员变量
//}
//
//void test02()
//{
//	Person p;
//	p.func();
//	Person::func();
//
//	//p.func2();类外无法访问私有静态成员函数
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}