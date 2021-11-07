#include <iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    string address;
    int num;
    int kaksha;
    string sect;
    int roll;
    public:
    void input()
    {
        cout<<"Enter name of the student = ";
        fflush(stdin);
        getline(cin,name);
        cout<<"Enter The class of the student = ";
        cin>>kaksha;
        cout<<"Enter Mobile Number of parents = ";
        cin>>num;
        cout<<"Enter Roll Number of the student = ";
        cin>>roll;
        cout<<"Enter Address of the student = ";
        while(getchar()!='\n');
        getline(cin,address);
        cout<<"Enter Section of the student = ";
        while(getchar()!='\n');
        getline(cin,sect);
        
    }
    void output()
    {
        cout<<"Name of the student = "<<name<<endl;
        cout<<"Class of the student = "<<kaksha<<endl;
        cout<<"Address of the student = "<<address<<endl;
        cout<<"Section of the student = "<<sect<<endl;
        cout<<"Mobile Number of parents = "<<num<<endl;
        cout<<"Roll Number of the student = "<<roll<<endl;
    }
};
int main()
{
    student sample;
    student *std;
    std=&sample;
        std->input();
        std->output();
    return 0;
}
