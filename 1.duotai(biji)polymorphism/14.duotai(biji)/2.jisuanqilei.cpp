////普通方法写计算器
////如果想扩展新的功能，必须修改源码
////在真实开发中提倡开闭原则
////对扩展进行开发，对修改进行关闭
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
////利用多态实现计算器
////计算器抽象类
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
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////减法计算器类
//class DecCalculator :public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////乘法计算器类
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