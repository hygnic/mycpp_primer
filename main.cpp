#include <iostream>

using namespace std;

class ExampleClass {

public:
    ExampleClass(int age) {
        this-> age = age;
    }

    int age;
    //如果这里不返回引用的话，返回值，如下所示。那么下面的链式编程的结果就是20，因为返回值的话，会拷贝一个新的，返回
    //引用才是原来那个类的实例。
    //ExampleClass  addAge(ExampleClass &e) {
    //返回引用
    ExampleClass & addAge(ExampleClass &e) {
        this -> age+= e.age;
        return *this; //返回该类的实体
    }
};

void test() {
    ExampleClass ec1(10);
    ExampleClass ec2(10);

    ec2.addAge(ec1).addAge(ec1); //链式编程
    cout << ec2.age << endl;
}


int main() {
    test();
    return 0;
}
