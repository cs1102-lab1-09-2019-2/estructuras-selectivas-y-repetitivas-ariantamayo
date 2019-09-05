#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float cant, temp, media, suma = 0, sumax = 0;
    cout<<"Ingrese el número a manipular: ";
    cin>>cant;
    for(int i = 0; i < cant; i++){
        cout<<'x'<<i+1<<": ";
        cin>>temp;
        suma += temp;
        sumax += pow(temp, 2);
    }
    cout<<"la desviación estándar es: "<<fixed<<setprecision(2)<<sqrt(sumax/cant - pow(suma/cant,2));
}
