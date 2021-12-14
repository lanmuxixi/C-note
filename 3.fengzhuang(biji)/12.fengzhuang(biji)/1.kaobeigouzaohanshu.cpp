//#include<iostream>
//using namespace std;
////1.使用一个已经创建完毕的对象初始化另一个对象
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的无参构造函数被调用" << endl;
//	};
//	Person(int age)
//	{
//		cout << "Person的有参构造函数被调用" << endl;
//		m_age = age;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person的拷贝构造函数被调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数被调用" << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person p1(18);
//	p1.m_age = 20;
//	Person p2(p1);
//	cout << "p2的年龄为: " << p2.m_age << endl;
//}
//
//void dowork(Person p)
//{
//	return;
//}
//void test02()
//{
//	Person p3;
//	dowork(p3);
//}
//
//Person dowork1()
//{
//	Person p1;
//	return p1;
//}
//void test03()
//{
//	Person p = dowork1();
//}
//
//int main()
//{
//	test01();
//	cout << endl;
//	test02();
//	cout << endl;
//	test03();
//	cout << endl;
//	return 0;
//}