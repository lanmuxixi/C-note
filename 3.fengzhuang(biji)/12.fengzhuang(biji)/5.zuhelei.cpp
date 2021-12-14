//#include<iostream>
//#include<string>
//using namespace std;
////类对象作为类成员
////先构造其他类对象 再构造自身
////先析构自身 再析构其他类对象
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_Pname = name;
//	}
//	string m_Pname;
//};
//
//class Person
//{
//public:
//	Person(string name, Phone phone1) :m_name(name), m_phone(phone1) {};
//	string m_name;
//	Phone m_phone;
//};
//
//void test01()
//{
//	Phone phone1("HuaWeiNote40");
//	Person qc("qc", phone1);
//	cout << qc.m_name << " with " << qc.m_phone.m_Pname << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}