//#include<iostream>
//#include<string>
//using namespace std;
////ֻҪ������һ�����麯�� �����ͱ���Ϊ������
////1.�����಻��ʵ�������� ջ������������
////2.����������������д�����еĴ��麯������������Ҳ�ǳ�����
//class Base
//{
//public:
//	virtual void func() = 0;//�������麯��
//	int m_a;
//	int m_b;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func��������" << endl;
//	}
//};
//
//void test01()
//{
//    //�����಻��ʵ�������� ջ������������
//	//Base b1;
//	//new Base;
//	Son s1;
//	new Son;
//}
//
//void test02()
//{
//	Base* p = new Son;
//	p->func();
//}
//
//int main()
//{
//	test02();
//	return 0;
//}