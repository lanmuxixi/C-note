////��ͨ����д������
////�������չ�µĹ��ܣ������޸�Դ��
////����ʵ�������ᳫ����ԭ��
////����չ���п��������޸Ľ��йر�
//#include<iostream>
//#include<string>
//using namespace std;
////class Calculator
////{
////public:
////	Calculator() {};
////	Calculator(int a, int b)
////	{
////		m_Num1 = a;
////		m_Num2 = b;
////	}
////	int getResult(string oper)
////	{
////		if (oper == "+")
////			return m_Num1 + m_Num2;
////		else if(oper=="-")
////			return m_Num1 - m_Num2;
////		else if(oper=="*")
////			return m_Num1 * m_Num2;
////	}
////	int m_Num1;
////	int m_Num2;
////};
////
////void test01()
////{
////	Calculator c(10,10);
////	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
////	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
////	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
////}
//
//
////���ö�̬ʵ�ּ�����
////������������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////������������
//class DecCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////�˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	AbstractCalculator* p1 = new AddCalculator;
//	p1->m_Num1 = 10;
//	p1->m_Num2 = 20;
//	cout<<p1->getResult();
//	delete p1;
//
//	p1 = new DecCalculator;
//	p1->m_Num1 = 30;
//	p1->m_Num2 = 20;
//	cout << p1->getResult();
//	delete p1;
//
//	p1 = new MulCalculator;
//	p1->m_Num1 = 50;
//	p1->m_Num2 = 3;
//	cout << p1->getResult();
//	delete p1;
//}
//int main()
//{
//	test02();
//	return 0;
//}