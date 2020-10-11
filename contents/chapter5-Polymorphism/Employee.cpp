#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    Employee(string Name, string id)
    {
        name = Name;
        Id = id;
    }
    string getName() { return name; } //返回姓名
    string getID() { return Id; }     //返回身份证号
    float getSalary() { return 0.0; } //返回薪水
    void print()
    { //输出姓名和身份证号
        cout << "姓名: " << name << "\t\t 编号: " << Id << endl;
    }

private:
    string name;
    string Id;
};
class Manager : public Employee
{
public:
    Manager(string Name, 
    string id, float s = 0.0) : Employee(Name, id)
    {
        WeeklySalary = s;
    }
    void setSalary(float s) { WeeklySalary = s; } //设置经理的周薪
    float getSalary() { return WeeklySalary; }    //获取经理的周薪
    void print()
    { //打印经理姓名、身份证、周薪
        cout << "经理：" << getName() << "\t\t 编号: " << getID()
            << "\t\t 周工资: " << getSalary() << endl;
    }

private:
    float WeeklySalary; //周薪
};
int main()
{

    Employee e("黄春秀", "NO0009"), * pM;
    Manager m("刘大海", "NO0001", 128);
    m.print();
    pM = &m;
    pM->print(); // 想打印“经理”的信息
    Employee& rM = m;
    rM.print();
    return 0;
}
