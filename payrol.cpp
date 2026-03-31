#include <iostream>
using namespace std;

// Function to calculate gross wages
// Parameters: hours worked and pay rate
double calculateWages(int hours, double payRate) {
    return static_cast<double>(hours) * payRate;
}

void inputEmployeeData(int empId[], int (&hours)[], double (&payRate)[], double (&wages)[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Employee ID: " << empId[i] << endl;
        cout << "Enter hours worked: ";
        // Input validation for hours worked
        while (!(cin >> hours[i]))  {
            cin.clear(); // Clear the error flag
            cin.ignore(10000, '\n'); // Discard invalid input
            

            if (hours[i] >= 0 && hours[i] <= 40) { // Assuming a maximum of 40 hours in a week
                break; // Valid input
            } else {
                cout << "Invalid input. Hours worked must be between 0 and 40. Please enter again: ";
            }
        }
        
        cout << "Enter pay rate: ";
        // Input validation for pay rate
        while (!(cin >> payRate[i]) || payRate[i] < 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(10000, '\n'); // Discard invalid input
            cout << "Invalid input. Pay rate cannot be negative. Please enter again: ";

            if (payRate[i] >= 7.25 && payRate[i] <= 18.25) { // Assuming a reasonable maximum pay rate
                break; // Valid input
            }
            else {
                cout << "Invalid input. Pay rate must be between $7.25 and $18.25. Please enter again: ";
            }
        }
    
    }
}

void displayPayrollSummary(int empId[], double wages[], int size) {
    cout << "\nEmployee Payroll Summary:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Employee ID: " << empId[i] << ", Gross Wages: $" << wages[i] << endl;
    }
}

void calculateGrossWages(int hours[], double payRate[], double (&wages)[], int size) {
    for (int i = 0; i < size; i++) {
        wages[i] = calculateWages(hours[i], payRate[i]);
    }
}
int main() {
    const int SIZE = 7;
    // Arrays for employee data
    int empId[SIZE] = {56588, 45201, 78951, 87775, 84512, 13028, 75804};
    int hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];
    

    // Input hours and pay rate for each employee
    inputEmployeeData(empId, hours, payRate, wages, SIZE);

    // Calculate gross wages
    calculateGrossWages(hours, payRate, wages, SIZE);

    // Display each employee's ID and gross wages
    displayPayrollSummary(empId, wages, SIZE);

    return 0;
}

