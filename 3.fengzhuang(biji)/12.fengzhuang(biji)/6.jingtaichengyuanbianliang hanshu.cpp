//#include<iostream>
//using namespace std;
////��̬��Ա����
////���ж��󶼹���һ������
////����׶ξͷ����ڴ�
////���������������ʼ��
////����ͨ���������ʾ�̬��Ա������Ҳ����ͨ��������ʾ�̬��Ա����
////��̬��Ա����Ҳ�з���Ȩ�� ������ʲ���˽�о�̬��Ա����
//
////��̬��Ա����
////���ж�����ͬһ������
////ֻ�ܷ��ʾ�̬��Ա����
////����ͨ��������� Ҳ����ͨ����������
//class Person
//{
//public:
//	static int m_A;
//	static int m_C;
//	int m_D;
//	static void func()
//	{
//		cout<<"����static void func()"<<endl;
//		m_A = 200;
//		//m_D = 500;�ᱨ�� ��̬��Ա�����޷����ʷǾ�̬��Ա����
//	}
//private:
//	static int m_B;
//	static void func2()
//	{
//		cout << "static void fucn2����" << endl;
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
//	//Person::m_B = 100; �����޷�����˽�о�̬��Ա����
//}
//
//void test02()
//{
//	Person p;
//	p.func();
//	Person::func();
//
//	//p.func2();�����޷�����˽�о�̬��Ա����
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}