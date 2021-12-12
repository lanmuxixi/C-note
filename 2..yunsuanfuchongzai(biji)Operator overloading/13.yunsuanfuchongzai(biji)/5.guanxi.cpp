//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person() {};
//	Person(string name,int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	
//	//重载关系运算符==
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age and this->m_Name == p.m_Name)
//			return true;
//		return false;
//	}
//
//	//重载关系运算符!=
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age == p.m_Age and this->m_Name == p.m_Name)
//			return false;
//		return true;
//	}
//}; 
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	if (p1 == p2)
//	{
//		cout << "p1和p2是相等的!" << endl;
//	}
//	else
//		cout << "p1和p2不相等!" << endl;
//}
//void test02()
//{
//	Person p3("Hutao", 16);
//	Person p4("Zhongli", 6300);
//	if (p3 != p4)
//	{
//		cout << "p3和p4不相等" << endl;
//	}
//	else
//		cout << "p3和p4是相等的!" << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}