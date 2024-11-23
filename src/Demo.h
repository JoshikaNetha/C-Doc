// Demo.h
#ifndef DEMO_H
#define DEMO_H
#include <iostream>
#include <string>
using namespace std;
class Demo {
public:
    Demo();
    static void demofunction(string call);
    void nonStaticDemo();
};

#endif
