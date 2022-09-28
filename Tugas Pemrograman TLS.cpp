/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    unsigned long makan;
    unsigned long transport;
    unsigned long lainnya;
    unsigned long total;
    cout << "KALKULATOR ANAK KOS" << endl;
    cout << "Biaya makan sebulan: Rp ";
    cin >> makan;
    cout << "Biaya transportasi sebulan: Rp ";
    cin >> transport;
    cout << "Biaya lainnya: Rp ";
    cin >> lainnya;
    total = makan+transport+lainnya;
    cout << "Total pengeluaran kamu: Rp " << total << endl;
    
    if (total<=600000)
        cout << "Yeay kamu hemat!";
    else
        cout << "Wah kamu boros, lebih hemat lagi ya!";
    

    return 0;
}
