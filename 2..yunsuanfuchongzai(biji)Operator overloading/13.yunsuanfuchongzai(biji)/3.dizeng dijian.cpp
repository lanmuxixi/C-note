//#include <iostream>
//#include <string>
//using namespace std;
////���ص��������
////���صݼ������
//class Myinteger
//{
//public:
//	friend ostream& operator<<(ostream& cout, Myinteger Num); //ʹ����Ԫ���øú������Է���Myinteger���˽�г�Ա
//	Myinteger()
//	{
//		m_Num = 0;//��ʼ��m_Num
//	}
//	//����ǰ��++�����
//	Myinteger& operator++()//ǰ�õ���Ҫ����һ������ ����������Ϊ��һֱ��һ�����ݽ��е�������
//	{
//		m_Num++;
//		return *this;
//	}
//	//���غ���++�����
//	Myinteger operator++(int) //���õ���Ҫ����һ��ֵ int����ռλ���� ��������ǰ�úͺ��õ���
//	{
//		//�ȷ��ؽ��
//		Myinteger temp;
//		temp = *this;
//		//�����
//		m_Num++;
//		//��󷵻�֮ǰ����ʱֵ
//		return temp;
//	}
//
//	//����ǰ��--�����
//	Myinteger& operator--()
//	{
//		this->m_Num--;
//		return *this;
//	}
//
//	//���غ���--�����
//	Myinteger operator--(int)
//	{
//		Myinteger temp;
//		temp = *this;
//		this->m_Num--;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////�������������
//ostream& operator<<(ostream& cout, Myinteger Num) //����������Ϊ��һֱ��һ�����ݽ��е�������
//{
//	cout << Num.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	Myinteger myint;
//	cout << myint << endl;
//	cout << ++myint<<endl;
//	cout << ++myint<<endl;
//
//}
//
//void test02()
//{
//	Myinteger myint;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//void test03()
//{
//	Myinteger myint;
//	cout << myint << endl;
//	cout << --myint << endl;
//	cout << --myint << endl;
//
//}
//
//void test04()
//{
//	Myinteger myint;
//	cout << myint-- << endl;
//	cout << myint-- << endl;
//	cout << myint-- << endl;
//	cout << myint-- << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	cout << "--------------------------" << endl;
//	test03();
//	test04();
//	return 0;
//}