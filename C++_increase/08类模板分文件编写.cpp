#include <iostream>
using namespace std;
//解决方法一：不包含.h而包含.cpp文件（不常用）
//#include "Person.cpp"

//解决方法二：将头文件和CPP文件写在一起，成为.hpp文件（常用，约定熟成，就是类模板文件）
#include "Person.hpp"
//#include "Person.h"
/*
	类模板的份文件编写
	·由于类模板是调用后在生成，所以不能直接包含.h文件。
*/


int main8() {
	//Person <int> per(10);//调用后再生成，错误
	//per.show();//错误原因如上

	Person <int> per(10);//包含.cpp文件之后,以及包含hpp后
	per.show();
	return 0;
}