//#include<iostream>
//#include<string>
//using namespace std;
////�������ʹ�������
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	virtual void speak() = 0;
//	//����������
//	/*virtual ~Animal()
//	{
//		cout << "Animal������������" << endl;
//	}*/
//	//������������
//	//���˴��麯�� ���������ڳ����� �޷�ʵ��������
//	virtual ~Animal() = 0;
//};
////��������������Ҫ������Ҳ��Ҫ��ʵ�� ʵ�ֵ�ʱ�� 
////ɾ��virtual ����������������:: �Ӵ����� ����������дʵ�� 
//Animal::~Animal() 
//{
//	cout << "Animal����������������" << endl;
//};
//
//class Cat :public Animal
//{
//public:
//	Cat() {};
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout <<*m_name<< "������" << endl;
//	}
//	string* m_name;
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Cat������������" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//	//�����ָ����������ʱ�򲻻�������������������������������ж������Ի�����ڴ�й©
//}
//
//int main()
//{
//	test01();
//	return 0;
//}