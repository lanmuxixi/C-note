//#include <iostream>
//#include <string>
//using namespace std;
///*
//2.������������� <<
//����:��������Զ�����������
//(1)���ó�Ա�����������������  һ�㲻���������ַ��� ��Ϊ�޷�ʵ��cout�����
//(2)����ȫ�ֺ����������������
//-------------------------------------------------------------------
//e.m. Person1��
//*/
//
//class Person
//{
//public:
//	Person() {};
//	int m_A;
//	int m_B;
//	friend ostream& operator<<(ostream& cout, Person& p);
//};
//
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//	operator<<(cout,p); //���û���ض���<<�����������仰�ᱨ��
//	cout << p;//������Ĵ��뺬����ͬ
//}
//
//ostream& operator<<(ostream & cout, Person & p)   //����:operator<<(cout,Person p) ��Ϊcout << p
//{
//	cout << "p.m_A=" << p.m_A;
//	cout << "p.m_B=" << p.m_B;
//	return cout;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
