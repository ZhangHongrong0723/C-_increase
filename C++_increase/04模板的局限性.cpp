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
	//		cout << "相同" << endl;
	//	}
	//	else {
	//		cout << "不同" << endl;
	//	}
	//}


};

//上面的comp必须保留，因为不保留就无法发生重载，因而需要写两段代码，且形参也需要一样，不能一个是地址一个是对象
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
//表明也是模板
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