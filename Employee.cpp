#include <iostream>
using namespace std;

class Employee {
    public:
        virtual void work() = 0; // pure virtual function
        virtual ~Employee() {} // virtual destructor
};

class Engineer : public Employee {
    public:
        void work() override {
            cout << "Engineer is working." << endl;
        }
};

class Worker : public Employee {
    public:
        void work() override {
            cout << "Worker is working." << endl;
        }
};

void performWork(Employee* emp) {
    emp->work();
}

int main() {
    Engineer eng;
    Worker wrk;

    performWork(&eng);
    perforWork(&wrk);
    return 0;
}