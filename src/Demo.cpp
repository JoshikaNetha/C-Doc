#include <Demo.h>
Demo::Demo()
{
nonStaticDemo();
}
void Demo::demofunction(string call)
{
    std::cout<<"[Its Demo class demofunction] "<<call<<endl;
}

void Demo::nonStaticDemo()
{
    demofunction("nonStaticDemo");
}
