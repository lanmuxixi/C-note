//#include<iostream>
//using namespace std;
////������ ������
//class Person
//{
//public:
//	//thisָ��ı�����ָ�볣�� ָ���ָ���ǲ������޸ĵ�
//	//thisָ�뱾��:Person const *this;
//	//const Person const *this
//	//�ڳ�Ա�����������const ����������thisָ�� ��ָ��ָ���ֵҲ�������޸�
//	void showperson() const
//	{
//		//this->m_a = 100;//thisָ��ָ���ֵ�����޸� ���Ǽ���const�Ժ�Ͳ����޸���
//		//this = NULL;//this��ָ�򲻿��޸� ���д���ᱨ��
//
//		this->m_b = 100;//����mutable�����Կ����ڳ��������޸�
//	}
//	void func() {};
//	int m_a;
//	mutable int m_b;//����mutable�����Կ����ڳ������ͳ��������޸�
//};
//void test01()
//{
//	Person p1;
//	p1.showperson();
//}
////������
//void test02()
//{
//    const Person p2;
//	//p2.m_a = 100;//����������Բ����޸�
//	p2.m_b = 100;//����mutable�����Կ����ڳ��������޸�
//	//p2.func();//�������ܵ�����ͨ����
//	p2.showperson();//������ֻ�ܵ��ó�����
//}