#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float R, AREA;
    cout << "Digite o raio do circulo:" << endl;
    cin >> R;
    AREA = 3.14159 * (R * R);
    cout << "A area do circulo e:" << endl << AREA;
    return 0;
}
