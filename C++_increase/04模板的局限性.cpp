#include <iostream>
#include <string>
using namespace std;

class Person {
public :
	int age;
	string  name;
	Person(string pname,int page) {
		age = page;
		name = pname;
	}
	// Person operator==(Person& p1) {
	//	if (this->name == p1.name && this->age == p1.age) {
	//		cout << "��ͬ" << endl;
	//	}
	//	else {
	//		cout << "��ͬ" << endl;
	//	}
	//}


};

//�����comp���뱣������Ϊ���������޷��������أ������Ҫд���δ��룬���β�Ҳ��Ҫһ��������һ���ǵ�ַһ���Ƕ���
template <typename T>
bool comp(T a,T b) {
	if (a==b) 
	{
		return true;
	}
	else
	{
		return false;
	}
}
//����Ҳ��ģ��
template <>bool comp(Person p1, Person p2) {
	if (p1.name == p2.name && p1.age == p2.age) {
		return true;
	}
	else
	{
		return false;
	}
}
int main4()
{
	Person p1("tom", 11);
	Person p2("tom", 11);
	bool ret = comp(p1, p2);
	if (ret) 
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!==p2" << endl;
	}
	system("pause");
	return 0;
}