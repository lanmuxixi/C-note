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
//	//���ع�ϵ�����==
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age and this->m_Name == p.m_Name)
//			return true;
//		return false;
//	}
//
//	//���ع�ϵ�����!=
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
//		cout << "p1��p2����ȵ�!" << endl;
//	}
//	else
//		cout << "p1��p2�����!" << endl;
//}
//void test02()
//{
//	Person p3("Hutao", 16);
//	Person p4("Zhongli", 6300);
//	if (p3 != p4)
//	{
//		cout << "p3��p4�����" << endl;
//	}
//	else
//		cout << "p3��p4����ȵ�!" << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}