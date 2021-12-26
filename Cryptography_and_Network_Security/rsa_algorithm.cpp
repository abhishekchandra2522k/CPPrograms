#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b)
{
    int t;
    while (1)
    {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}
int main()
{

    double p = 13;
    double q = 11;
    double n = p * q;
    double track;
    double phi = (p - 1) * (q - 1);

    double e = 7;
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }

    double d1 = 1 / e;
    double d = fmod(d1, phi);
    double message = 9;
    double c = pow(message, e);
    double m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);
    cout << "Original Message = " << message;
    cout << "\n"
         << "p = " << p;
    cout << "\n"
         << "q = " << q;
    cout << "\n"
         << "n = pq = " << n;
    cout << "\n"
         << "phi = " << phi;
    cout << "\n"
         << "e = " << e;
    cout << "\n"
         << "d = " << d;
    cout << "\n"
         << "Encrypted message = " << c;
    cout << "\n"
         << "Decrypted message = " << m;
    return 0;
}