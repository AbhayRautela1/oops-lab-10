#include <iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    string address;
    int num;
    int telephone;
    string head;
    public:
    void input()
    {
        cout<<"Enter name = ";
        fflush(stdin);
        getline(cin,name);
        cout<<"Enter Address = ";
        fflush(stdin);
        getline(cin,address);
        cout<<"Enter Telephone Number = ";
        cin>>telephone;
        cout<<"Enter Mobile Number = ";
        cin>>num;
        cout<<"Enter Head of the family = ";
      while(getchar()!='\n');
        getline(cin,head);
        
    }
    void output()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Address = "<<address<<endl;
        cout<<"Telephone Number = "<<telephone<<endl;
        cout<<"Mobile Number = "<<num;
        cout<<"Head of the family = "<<head<<endl;
    }
};
int main()
{
    student std[3];
    for(int i=0;i<3;i++)
    {
        std[i].input();
    }
    for(int i=0;i<3;i++)
    {
        std[i].output();
    }
    return 0;
}
