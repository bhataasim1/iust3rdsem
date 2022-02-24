
#include <iostream>

using namespace std;

class Salery
{
    public:
    
    float Basic_Salery , House_rent , Dearness_Allowence , Gross_Salery;
    
    void BSalery()
    {
        cout << "Enter the Basic Salery : ";
        cin >> Basic_Salery;
    }
    
    float Gsalery()
    {
        House_rent = 0.40 * Basic_Salery;
        Dearness_Allowence = 0.20 * Basic_Salery;
        Gross_Salery = House_rent + Dearness_Allowence;
        return Gross_Salery;
    }
    
};

int main()
{
    Salery Total;
    Total.BSalery();
    Total.Gsalery();
    cout << "Gross Salery is : " << Total.Gsalery();

    return 0;
}
