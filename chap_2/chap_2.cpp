#include "./chap_2.hpp"
#include <iostream>

void pointAndRef() {
    // 声明int类型i，引用r指向i，r为i的别名
    int i = 42, &r = i;
    // 生命int类型指针p，另p指向i的地址&i
    int *p;
    p = &i;
    std::cout << *p << " " << p << std::endl;
    *p = i;
    std::cout << *p << " " << p << std::endl;
    int &r2 = *p;
    std::cout << r2 << std::endl;
    std::cout << &r2 << std::endl;
    return;
}

void constExample() {
    const int bufsize = 5;

    // 对常量引用,注意引用不是一个对象，没有办法恒定不变，只是利用它修改指向的对象是错误的
    const int &rc = bufsize;
    // &rc = ... 合法
    // rc = 42; error
    const int &rc2 = 42; // 合法， const引用可以指向常量，或者表达式
    // int &rc3 = 42; // 错误
    
    // 顶层const指指针本身是个常量，底层const指指针指向的对象是常量
    // 具体的判断就是看const出现在*的左边还是右边
    int i = 0;
    int * const p1 = &i; // 顶层const
    int const ci = 42; // 顶层const
    int const *p2 = &ci; // 底层const
    const int *const p3 = p2; // 靠右的是顶层const 靠左的是底层const
    const int &r = i; // 用于声明引用的const都是底层const

    // 执行拷贝操作，赋值对象和原对象需要具有相同的底层const资格。一般非常量可以转为常量
    // int *p = p3; // error,p3是具有底层const,常量不能转化为非常量
    p2 = p3; // correct,p2和p3都是底层const
    p2 = &i; // correct, 非常量可以转化为常量const
}

void autoExample() {
    // auto 会忽略顶层const
    int i = 0, &r = i;
    auto a = r;// a是int型，不是引用

    const int ci = i, &cr = ci;
    auto b = ci; // ci是一个顶层const
    auto c = cr; // cr是ci的别名，ci是顶层const
    auto d = &i; // d是一个整形指针
    auto e = &ci; // e是一个指向整数常量的指针(对常量对象取地址是一种底层const)

    // 使用auto声明顶层const需要主动
    const auto f = i;
}

void decltypeExample() {

}