#include <iostream>
using namespace std;
class Demo {
private:
    static int created;
    static int destroyed;
public:
    Demo() {
        created++;
        cout << "Object created" << endl;
    }
    ~Demo() {
        destroyed++;
        cout << "Object destroyed" << endl;
    }
    static void display() {
        cout << "Total objects created: " << created << endl;
        cout << "Total objects destroyed: " << destroyed << endl;
    }
};
int Demo::created = 0;
int Demo::destroyed = 0;
int main() {
    {
        Demo d1, d2, d3;
        Demo::display();
    }
    Demo::display();
    return 0;
}

