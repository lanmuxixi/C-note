//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	Person() {};
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	int* m_Age;
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		cout << "��������������" << endl;
//	}
//
////���ظ�ֵ�����
//	Person & operator=(Person &p)
//	{
//		//Ӧ���ж��Ƿ��������ڶ����������Ҫ���ͷŸɾ���Ȼ�������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//�����������
//		this->m_Age= new int(*p.m_Age);
//		cout << "������..." << endl;
//		return *this;
//	}
//};
//
////���û�����ظ�ֵ���������ϵͳ�ṩ��ǳ�������� �������ᵼ�¶����ڴ��ظ��ͷţ�ϵͳ����
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p2.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}