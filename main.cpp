#include <iostream>

using namespace std;

class ExampleClass {

public:
    ExampleClass(int age) {
        this-> age = age;
    }

    int age;
    //������ﲻ�������õĻ�������ֵ��������ʾ����ô�������ʽ��̵Ľ������20����Ϊ����ֵ�Ļ����´��һ���µģ�����
    //���ò���ԭ���Ǹ����ʵ����
    //ExampleClass  addAge(ExampleClass &e) {
    //��������
    ExampleClass & addAge(ExampleClass &e) {
        this -> age+= e.age;
        return *this; //���ظ����ʵ��
    }
};

void test() {
    ExampleClass ec1(10);
    ExampleClass ec2(10);

    ec2.addAge(ec1).addAge(ec1); //��ʽ���
    cout << ec2.age << endl;
}


int main() {
    test();
    return 0;
}
