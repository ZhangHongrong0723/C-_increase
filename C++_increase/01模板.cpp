#include <iostream>
using namespace std;
/*
	模板的特点：
		·模板不可以直接使用，它只是一个框架
		·模板的通用并不是万能的

	C++的另一种编程思想为泛型编程，主要利用的技术就是模板
	C++中含有两种模板机制，函数模板和类模板

	语法：
	template<typename T> 
	函数声明或定义
	解释：
		template	声明创建模板
		typename	表明其后面的符号是一种数据类型，可以用class代替
		T			通用的数据类型，名称可以替换，通常为大写字母


*/

/*
	情景：当假设需要进行两数交换时，一个是double一个是int，不可能写两个相同的方法进行同样的操作
	模板的目的是为了提高复用性，将类型参数化
*/
//函数模板
template <typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a,T&b) {
	T temp = a;
	a = b;
	b = temp;
}
template <class T> //typename 可以替换为class 但是可以选择用类用class 函数用typename 不过本质都可以替换
void sswap(T &a,T&b) {
	T temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

template <typename T>
void func() {

	cout << "hello" << endl;
	}
int main1()
{
	int a = 10;
	int b = 20;
	//两种方法使用函数模板
	//自动类型推导
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	/* 当两个类型不一致的时候，即便使用自动推导还是显示自动类型，都会报错
	int c = 30;
	double d = 52.3;
	sswap(c, d);
	sswap<double>(c, d);
	*/

	//显示指定类型
	//mySwap<int>(a, b);

	//当调用的方法中没有相关的形参时候，我们需要用显示指定类型的方法，可以是int，void等等都行
	func<void>();
	system("pause");
	return 0;
}