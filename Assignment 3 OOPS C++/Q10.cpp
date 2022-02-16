#include <iostream>

using namespace std;

int Global_count = 0;   //declared global count 

void GlobalVar()
{
    Global_count ++;
}

int LocalVar()
{
    int static Local_Count = 0;        //declared Local Count
    Local_Count ++;
    return Local_Count;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        GlobalVar();                  
    }
    
    for (int j = 0; j < 5; j++)
    {
        LocalVar();
    }
    
    int Local_Count = LocalVar();
    
    cout << "I have been called " << Global_count << " times" <<endl;
    cout << "I have been called " << Local_Count << " times" <<endl;

    return 0;
}
