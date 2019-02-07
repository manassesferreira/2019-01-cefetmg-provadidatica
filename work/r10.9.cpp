#include <iostream>
using namespace std;
int main(){
  double values[] = {2, 3, 5, 7, 11, 13};
  cout << values[1] << '\n';
  cout << values + 1 << '\n';
  cout << *(values + 1) << '\n';

  double* p = values + 4;
  cout << p[1] << '\n';
  cout << p + 1 << '\n';
  cout << p - values << '\n';
  return 0;
}
