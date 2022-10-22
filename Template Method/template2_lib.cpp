#include <iostream>

using namespace std;

class Library
{
  public:
    void Run()
    {
        Step1();

        if (Step2())
        {
            Step3();
        }

        for (int i = 0; i < 4; i++)
        {
            Step4();
        }

        Step5();
    }
    virtual ~Library() {}

  protected:
    void Step1()
    {
        cout << "Step1" << endl;
    }
    void Step3()
    {
        cout << "Step3" << endl;
    }
    void Step5()
    {
        cout << "Step5" << endl;
    }

    virtual bool Step2() = 0;
    virtual void Step4() = 0;
};