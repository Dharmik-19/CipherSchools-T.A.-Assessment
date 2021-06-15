#include <iostream>

using namespace std;

int *arayGenerator(int n){

  int * arr = new int[n];
  for(int i=0; i<n-1; i++){
    arr[i] = i;
  }
  arr[n-1] = -(((n-1)*(n-2))/2);

  return arr;
}


int main(){
  
  int a;
  cout << "Enter the value of n: ";
  cin >> a;

  int* r = arayGenerator(a);
 
  for(int i=0; i<a; i++){
    cout << r[i] << " ";
  }
  
}