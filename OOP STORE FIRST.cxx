#include <iostream>
#include <string.h>
using namespace std;
class store
{
  private:
    double buyapple = 3.6;
    double buybanana = 1.5;
    double buystrowbires = 5;
    double buylamon = 7.6;
    double buysandwich = 10.1;
    int number = 0, number1 = 0, number2 = 0, number3 = 0, number4 = 0;

  public:
    void setnumber(int n)
    {
        number = n;
    }
    void setnumber1(int n)
    {
        number1 = n;
    }
    void setnumber2(int n)
    {
        number2 = n;
    }
    void setnumber3(int n)
    {
        number3 = n;
    }
    void setnumber4(int n)
    {
        number4 = n;
    }
    void print(int chose)
    {
        switch (chose)
        {
            cout << "The amount : " << endl;
        case 1:
        case 4:
        case 3:
        case 2:
        case 5:
            cout << "   - apple : " << number << " >> " << buyapple * number << " $ " << endl;
            cout << "   - lamon : " << number3 << " >> " << buylamon * number3 << " $ " << endl;
            cout << "   - sandwich : " << number4 << " >> " << buysandwich * number4 << " $ " << endl;
            cout << "   - banana : " << number1 << " >> " << buybanana * number1 << " $ " << endl;
            cout << "   - strowbires : " << number2 << " >> " << buystrowbires * number2 << " $ " << endl;
            cout << "\n\t\tTOTEL = " << buyapple * number + buylamon * number3 + buysandwich * number4 + buybanana * number1 + buystrowbires * number2 << " $ " << endl;
          break;  
        }
    }
    void printt()
    {
        cout << "apple = 3.6 $  ,  "
             << "banana = 1.5 $  ,  "
             << "strowbires = 5 $\n"
             << "lamon = 7.6 $  ,  "
             << "sandwich = 10.1 $\n"
             << endl;
    }
};
int main()
{
    int dd, f, f1, f2, f3, f4, chose[5];
    cout << "\t\t\tWellcome " << endl;
    cout << "\tWhat you want ?" << endl;
    cout << "1 * apple\n2 * banana\n3 * strowbires\n4 * lamon\n5 * sandwich\n\n";
    apple x;
    x.printt();
    for (int i = 0; i < 5; i++)
    {
        cin >> chose[i];
        if (chose[i] == 0)
        {
            x.print(1);
            break;
        }
        switch (chose[i])
        {
        case 1:
            cout << "\n . How many apple ?" << endl;
            cin >> f;

            x.setnumber(f);
            break;
        case 2:
            cout << " . How many banana?" << endl;
            cin >> f1;
            x.setnumber1(f1);
            break;
        case 3:
            cout << " . How many strowbires ?" << endl;
            cin >> f2;
            x.setnumber2(f2);
            break;
        case 4:
            cout << " . How many lamon ?" << endl;
            cin >> f3;
            x.setnumber3(f3);
            break;
        case 5:
            cout << " . How many sandwich ?" << endl;
            cin >> f4;       
            x.setnumber4(f4);
            break;
        }
        cout << "What else ?\n";
    }
    x.print(chose[1]);
    return 0;
}
