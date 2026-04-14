#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float n1, n2, n3, n4, MEDIA;
    cout << "Digite as 4 notas:" << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    MEDIA = (n1 + n2 + n3 + n4) / 4;
    cout << "A media e:" << endl << MEDIA;
    return 0;
}
