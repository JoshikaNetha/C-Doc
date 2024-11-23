#include <iostream>

using namespace std;
//Interface Segregation Principle
/*A class should not be forced to implement interfaces  if it does not use */

class IPrinter{
public:
    virtual void print() = 0 ;
};

class IScanner{
    public: 
    virtual void scan() = 0;

};
class AllInOnePrinter : public IPrinter,public IScanner{
    public:
    void print() override{
        cout<<"AllInOnePrinter print\n";
    }
    void scan() override{
        cout<<"AllInOnePrinter scan\n";
    }
};
class Printer: public IPrinter{
    public:
    void print() override{
        cout<<"Printer print\n";
    }

};
int main(){
    AllInOnePrinter allPrinter;
    allPrinter.print();
    allPrinter.scan();

    Printer printer;
    printer.print();

    IPrinter *iprinter = new AllInOnePrinter();
    iprinter->print();

    IScanner* iscan = new AllInOnePrinter();
    iscan->scan();

    IPrinter *iprinter1 = new Printer();
    iprinter1->print();

    return 0;
}