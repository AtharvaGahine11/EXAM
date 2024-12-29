#include <iostream>
using namespace std;
int main() {
 double basicSalary, HRA, DA, grossSalary;
cout << "Enter the basic salary: ";
cin >> basicSalary;

if (basicSalary <= 10000) {
HRA = 0.20 * basicSalary;
DA = 0.80 * basicSalary;
} 

else if (basicSalary <= 20000) {
HRA = 0.25 * basicSalary;
DA = 0.90 * basicSalary;
} 

else {
HRA = 0.30 * basicSalary;
DA = 0.95 * basicSalary;
}
grossSalary = basicSalary + HRA + DA;
cout << "Gross Salary: " << grossSalary << endl;
return 0;
}  