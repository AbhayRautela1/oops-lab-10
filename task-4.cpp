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
    
    friend void operator<(sample n,sample n3);
};

void operator<(sample n,sample n3)
{
	if(n.a<n3.a)
	{
    		cout<<"Object 2 is greater than";
    	}
    	else{
        	cout<<"Object 1 is greater than";
        }
    exit(0);
}

int main()
{
    sample obj1,obj2;
    obj1.setdata(10);
    obj2.setdata(30);
    obj1<obj2;
    return 0;
}
