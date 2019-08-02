#include <iostream>


int main() {
  using namespace std;
  // void *Q[2];
  int p = 6;
  int *ptr = & p;
  *(int **) & ptr;
  cout << "p:" << p << "\n";
  cout << "*ptr:" << *ptr << "\n";
  // cout << "**pptr:" << **pptr << "\n";
}