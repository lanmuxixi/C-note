//#include<iostream>
//using namespace std;
////�����ǳ����
////ǳ���������������� �����ڴ��ظ��ͷ�
////Ҫ�Լ�ʵ��һ���������캯�������ǳ�������������� ��������ķ���
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person���޲ι��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_height=new int(height);
//		cout << "Person���вι��캯��������" << endl;
//	}
//	~Person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person����������������" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯��������" << endl;
//		m_age = p.m_age;//ǳ����
//		this->m_height = new int(*p.m_height);//���
//	}
//	int* m_height;
//	int m_age;
//};
//void test01()
//{
//	Person p1(18,180);
//	cout << "p1������Ϊ: " << p1.m_age << endl<< "p1�����Ϊ: " <<*p1.m_height<< endl;
//	Person p2(p1);
//	cout << "p2������Ϊ: " << p2.m_age << endl << "p2�����Ϊ: " << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}