#include <iostream>
using namespace std;
class sample
{
    private:
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }
    
    friend sample operator>(sample n,sample n3);
};

sample operator>(sample n,sample n3)
{
    cout<<"Addition of two operator is = "<<n.a+n3.a;
    exit(0);
}

int main()
{
    sample obj1,obj2,obj3;
    obj1.setdata(10);
    obj2.setdata(30);
    obj3=obj1>obj2;
    return 0;
}
