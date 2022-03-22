#include <iostream>
using namespace std;
/*
	类模板如果想继承时：
	·当子类继承的父类是一个类模板时，子类在声明的时候，要指定父类中T的类型
	·如果不指定，编译器无法给子类分配内存
	·如果想灵活指定出父类中T的类型，子类也需要变为类模板

	类模板中的成员函数类外实现

*/
template <class T1>
class Base {
	T1 m;

};

class Son :public Base<int> {


};


//以上为指定父类中T的类型

template <class T>
class fa {
	T s;

};
template <class T,class T2>
class daughter:public fa<T2>{
public:
	T daug;
	daughter(T daug,T2 s);
};
template <class T,class T2>
daughter<T,T2>::daughter(T daug,T2 s) {

}
//以上为子类变为类模板
int main7() {
	//daughter <int, char>da(1,"ss");


	system("pause");
	return 0;
}