
#include <iostream>
using namespace std;

class STAFF {
public:
    void staffInfo() {
        cout << "This is STAFF class" << endl;
    }
};

class Teaching : public STAFF {
public:
    void teachingInfo() {
        cout << "This is Teaching staff" << endl;
    }
};

class NonTeaching : public STAFF {
public:
    void nonTeachingInfo() {
        cout << "This is Non-Teaching staff" << endl;
    }
};

class Officer : public NonTeaching {
public:
    void officerInfo() {
        cout << "This is Officer" << endl;
    }
};

class Regular : public Teaching {
public:
    void regularInfo() {
        cout << "This is Regular staff" << endl;
    }
};

class Casual : public Teaching {
public:
    void casualInfo() {
        cout << "This is Casual staff" << endl;
    }
};

int main() {
    Regular r;
    Casual c;
    Officer o;

    cout << "Regular Staff:" << endl;
    r.staffInfo();
    r.teachingInfo();
    r.regularInfo();

    cout << endl << "Casual Staff:" << endl;
    c.staffInfo();
    c.teachingInfo();
    c.casualInfo();

    cout << endl << "Officer:" << endl;
    o.staffInfo();
    o.nonTeachingInfo();
    o.officerInfo();

    return 0;
}

