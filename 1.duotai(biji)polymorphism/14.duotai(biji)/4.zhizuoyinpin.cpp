//#include<iostream>
//#include<string>
//using namespace std;
////��̬����2 ������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//��������
//	virtual void PutSomething() = 0;
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class cofe :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//��������
//	virtual void PutSomething()
//	{
//		cout << "����" << endl;
//	}
//};
//
//class tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "�����ɽ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��!" << endl;
//	}
//	//��������
//	virtual void PutSomething()
//	{
//		cout << "������" << endl;
//	}
//};
//
//void DoWork(AbstractDrinking& d1)
//{
//	d1.makeDrink();
//}
//
//void test01()
//{
//	cofe c1;
//	tea t1;
//	DoWork(c1);
//	DoWork(t1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}