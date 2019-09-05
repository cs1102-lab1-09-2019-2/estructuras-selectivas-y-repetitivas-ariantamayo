#include <iostream>
using namespace std;
int main() {
  int num;
  cout<<"Ingrese un número: ";
  cin >> num;
  for (int i=0; i<num;i++){
    cout << "*";
  }
  cout << "\n";
  for (int i=0; i<num-2;i++){
    cout << "*";
    for (int j=0; j<i;j++){
    cout << " "; 
  }
  cout << "*";
  for (int j=0; j<num-3-i;j++){
    cout << " "; 
  }

  cout << "*\n";
  }
  for (int i=0; i<num;i++){
    cout << "*";
  }
return 0;    
}
