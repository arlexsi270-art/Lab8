#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"

using namespace std;

int main()
{
    int x, n = 5;
    cout << "Enter x = ";
    cin >> x;

    float rez;
    float sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        sum += sum + (i + 2 * x);
    }

    rez = tan(sum);

    cout << "Y = " << rez << endl;

    system("pause");
    return 0; 
} 


/*#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cout << "Enter x:";
    cin >> x;

    double x5 = pow(x, 5);

    int mul = 1;
    for (int k = 1; k < 11; k++)
    {
        mul *= pow(k, 3);
    }

    double Z = x5 + mul;

    cout << "Z = " << fixed << setprecision(3) << Z << endl;

    return 0;
}*/
