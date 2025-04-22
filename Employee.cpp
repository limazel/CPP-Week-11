#include <iostream>
using namespace std;

class IEmployee {
    public:
        virtual void work() = 0; // pure virtual function
        virtual ~Employee() {} // virtual destructor
};

class Engineer : public IEmployee {
    public:
        void work() override {
            cout << "Engineer is working." << endl;
        }
};

class Worker : public IEmployee {
    public:
        void work() override {
            cout << "Worker is working." << endl;
        }
};

void performWork(IEmployee* emp) {
    emp->work();
}

int main() {
    Engineer eng;
    Worker wrk;

    performWork(&eng);
    perforWork(&wrk);
    return 0;
}