//Net salary calculator.

#include<iostream>
using namespace std;

int main()
{
for (int i; i; i++)
{
    int gross_salary, work_hour, pension, tax_rate,overtime_bonusrate,overtime_pay,extra_hours,net_salary;
    cout << "What is your gross salary: "<<endl;
    cin >> gross_salary;
    cout << "How much hours do you work: "<<endl;
    cin >> work_hour;
    cout << "What is your Tax rate: "<<endl;
    cin >> tax_rate;
    if (work_hour > 40)
    {
        cout << "Enter your overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    tax_rate = gross_salary*tax_rate/100;
    pension = gross_salary*7/100;
    net_salary = (gross_salary - pension - tax_rate) + overtime_pay;
    cout << "Your net salary is "<< net_salary << endl;
}
}
