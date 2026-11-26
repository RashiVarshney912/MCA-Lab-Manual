#include <iostream>
using namespace std;

struct Complex
{
    float real;
    float imag;
};

Complex readComplex()
{
    Complex c;

    cout << "Enter real part: ";
    cin >> c.real;

    cout << "Enter imaginary part: ";
    cin >> c.imag;

    return c;
}

void display(Complex c)
{
    cout << c.real;

    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
}

Complex add(Complex a, Complex b)
{
    Complex result;

    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;

    return result;
}

Complex subtract(Complex a, Complex b)
{
    Complex result;

    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;

    return result;
}

Complex multiply(Complex a, Complex b)
{
    Complex result;

    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;

    return result;
}

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number\n";
    c1 = readComplex();

    cout << "\nEnter second complex number\n";
    c2 = readComplex();

    cout << "\nFirst Complex Number: ";
    display(c1);

    cout << "\nSecond Complex Number: ";
    display(c2);

    result = add(c1, c2);
    cout << "\n\nAddition: ";
    display(result);

    result = subtract(c1, c2);
    cout << "\nSubtraction: ";
    display(result);

    result = multiply(c1, c2);
    cout << "\nMultiplication: ";
    display(result);

    return 0;
}
