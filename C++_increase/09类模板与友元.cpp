#include<iostream>
using namespace std;
#include <string>
/*
	ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
	ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

*/
template <class T1,class T2>
class Student {
public:
	
	T1 m_name;
	T2 m_age;
	Student(T1 name,T2 age) {
		this->m_name = name;
		this->m_age = age;
	}
	void showPrin(T1 m_name,T2 m_age);
	//ȫ�ֺ�������ʵ��
	friend void showPrintf(Student<T1, T2> p) {
		cout << "�����" << p.m_age << "\t ������" << p.m_name << endl;
	}
	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪���������
};
template <class T1,class T2>
void showPri(Student <T1,T2>s) {
	cout << s.m_name << "\t" << s.m_age << endl;
}
void test01() {
	Student <string, int>p1("jack",22);
	showPrintf(p1);
	
}

void test02() {
	Student<string, int>p2("json",22);
	showPri(p2);
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}