#include <iostream>
using namespace std;
int gcd(int a, int b) { 
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    int n; 
    cin >> n;
    int a[n], b[n]; 
    for (int i = 0; i < n; i++) { 
        cin >> a[i] >> b[i];
    }
    int ab = b[0]; 
    int aa = a[0] * b[0];
    for (int i = 1; i < n; i++) { 
        int g = gcd(ab, b[i]); 
        aa = aa * b[i] / g + a[i] * ab / g; 
        ab *= b[i] / g; 
        g = gcd(aa, ab); 
        aa /= g;
        ab /= g;
    }
    cout << aa << "/" << ab << endl;
    return 0;
}
