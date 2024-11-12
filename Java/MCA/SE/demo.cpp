#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate Function Points (FP)
double calculateFunctionPoints(int inputs, int outputs, int inquiries, int files, int interfaces, int complexity)
{
    double complexityFactor = 0.65 + (complexity * 0.01);
    return (inputs * 4 + outputs * 5 + inquiries * 4 + files * 7 + interfaces * 10) * complexityFactor;
}

// Function to calculate Basic COCOMO model metrics
void basicCOCOMO(double kloc)
{
    double effort, time, staff;

    if (kloc <= 50)
    { // Organic mode
        effort = 2.4 * pow(kloc, 1.05);
        time = 2.5 * pow(effort, 0.38);
    }
    else if (kloc <= 300)
    { // Semi-Detached mode
        effort = 3.0 * pow(kloc, 1.12);
        time = 2.5 * pow(effort, 0.35);
    }
    else
    { // Embedded mode
        effort = 3.6 * pow(kloc, 1.20);
        time = 2.5 * pow(effort, 0.32);
    }

    staff = effort / time;

    cout << "\nBasic COCOMO Model Results for 'Green Living Made Easy':\n";
    cout << "Effort (Person-Months): " << effort << "\n";
    cout << "Development Time (Months): " << time << "\n";
    cout << "Average Staff Required: " << staff << "\n";
}

// Function to calculate Intermediate COCOMO model metrics
void intermediateCOCOMO(double kloc, double eaf)
{
    double effort, time, staff;

    if (kloc <= 50)
    { // Organic mode
        effort = 2.4 * eaf * pow(kloc, 1.05);
        time = 2.5 * pow(effort, 0.38);
    }
    else if (kloc <= 300)
    { // Semi-Detached mode
        effort = 3.0 * eaf * pow(kloc, 1.12);
        time = 2.5 * pow(effort, 0.35);
    }
    else
    { // Embedded mode
        effort = 3.6 * eaf * pow(kloc, 1.20);
        time = 2.5 * pow(effort, 0.32);
    }

    staff = effort / time;

    cout << "\nIntermediate COCOMO Model Results for 'Green Living Made Easy':\n";
    cout << "Effort (Person-Months): " << effort << "\n";
    cout << "Development Time (Months): " << time << "\n";
    cout << "Average Staff Required: " << staff << "\n";
}

int main()
{
    int inputs, outputs, inquiries, files, interfaces, complexity;
    double kloc, eaf;

    cout << "Estimating Metrics for 'Green Living Made Easy' Project\n";

    // Input for Function Points
    cout << "\nEnter number of inputs: ";
    cin >> inputs;
    cout << "Enter number of outputs: ";
    cin >> outputs;
    cout << "Enter number of inquiries: ";
    cin >> inquiries;
    cout << "Enter number of files: ";
    cin >> files;
    cout << "Enter number of interfaces: ";
    cin >> interfaces;
    cout << "Enter complexity factor (0-100): ";
    cin >> complexity;

    double functionPoints = calculateFunctionPoints(inputs, outputs, inquiries, files, interfaces, complexity);
    cout << "\nFunction Points (FP) for 'Green Living Made Easy': " << functionPoints << "\n";

    // Input for Basic COCOMO model
    cout << "\nEnter KLOC (thousands of lines of code): ";
    cin >> kloc;
    basicCOCOMO(kloc);

    // Input for Intermediate COCOMO model
    cout << "\nEnter Effort Adjustment Factor (EAF): ";
    cin >> eaf;
    intermediateCOCOMO(kloc, eaf);

    return 0;
}