#include <iostream>
using namespace std;
#include<string>

//������һ����������
/*
	��ģ��û���Զ������Ƶ��ķ�ʽ
	��ģ����ģ������б��п�����Ĭ�ϲ���������class AgeType=int

	��ģ��Ĵ���ʱ������ͨ���еĳ�Ա��������ʱ��������
	����ͨ���еĳ�Ա������һ��ʼ��ʱ��Ϳ��Դ���
	����ģ���еĳ�Ա�����ڵ��õ�ʱ�Ŵ���
*/
template <class NameType,class AgeType>
class Person {
public:
	Person(NameType name,AgeType age) {
		this->m_age = age;
		this->m_name = name;
		//cout << m_age <<"   "<<m_name<< endl;

	}

	NameType m_name;
	AgeType m_age;


};
int main5() {
	Person<string, int> p1("С��",18);
	Person<string, double>p2("С��",99.2); 

	system("pause");
	return 0;
}