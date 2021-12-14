//#include<iostream>
//using namespace std;
////this指针
////this指针指向被调用的成员函数 所属的对象 (谁调用函数就指向谁)
////解决名称冲突
////返回对象本身用*this
//class Person
//{
//public:
//	Person() {};
//	Person(int m_age)
//	{
//		this->m_age = m_age;
//	}
//	Person& PersonAdd(Person& p)
//	{
//		this->m_age += p.m_age;
//		return *this;
//	}
//	int m_age;
//};
//void test01()
//{
//	Person p1(18);
//	cout << p1.m_age << endl;
//}
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAdd(p1).PersonAdd(p1);
//	cout << p2.m_age;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}