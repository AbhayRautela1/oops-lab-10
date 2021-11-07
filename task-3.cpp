#include <iostream>
using namespace std;
class sample
{
    private:
    int x;
    int y;
    int rem;
    public:
    void enter(int x,int y)
    {
        this->x=x;
        this->y=y;
        rem=x%y;
    }
    void display()
    {
        cout<<"Remainder = "<<rem;
    }
};
int main()
{
    sample obj;
    obj.enter(20,3);
    obj.display();
    return 0;
}
