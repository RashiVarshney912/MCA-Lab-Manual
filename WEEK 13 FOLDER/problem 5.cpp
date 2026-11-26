#include <iostream>
using namespace std;

class publication {
protected:
    string title;
    string writer;

public:
    publication(string t, string w) {
        title = t;
        writer = w;
    }
};

class sales : public publication {
    int monthlySales[3];
    int total;

public:
    sales(string t, string w, int m1, int m2, int m3)
        : publication(t, w) {

        monthlySales[0] = m1;
        monthlySales[1] = m2;
        monthlySales[2] = m3;

        total = m1 + m2 + m3;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Writer Name: " << writer << endl;

        cout << "Sales in Month 1: " << monthlySales[0] << endl;
        cout << "Sales in Month 2: " << monthlySales[1] << endl;
        cout << "Sales in Month 3: " << monthlySales[2] << endl;

        cout << "Total Sales: " << total << endl;
    }
};

int main() {
    sales s("C++ Programming", "Rashi Varshney", 100, 150, 200);

    s.display();

    return 0;
}

