#include <iostream>

using namespace std;

int main()
{
    int ng;
    int nb;
    int nt;
    cout << "number of boys\n";
    cin >> nb ;
    cout << "number of girls\n";

    cin >> ng;
    cout << "number of teachers\n";
    cin >> nt;

    bool result = (nb>25);
    cout << result<<"\n";
    result = (ng<=30);
    cout << result<<"\n";
    cout << ((nb >20 && nt > 2) || (ng > 30 && nt >4))<<"\n" ;
    cout << (nb <60 || ng<70)<<"\n";
    cout <<(!(nb>=60)||!(ng>=70))<<"\n";
    cout << ((nb&&ng > 10)|| nt > 5)<<"\n";


    return 0;
}
