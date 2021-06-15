#include <iostream>
using namespace std;
 

int maxFinder(int a, int b){
  return (a > b) ? a : b; 
}
 
int counter(int n, int w, int wt[], int val[])
{
 
    if (n == 0 || w == 0)
        return 0;
 
    if (wt[n - 1] > w)
        return counter(n-1, w, wt, val);
 
    else
        return maxFinder(val[n - 1]+counter(n-1, w - wt[n - 1],wt, val),counter(n-1, w, wt, val));
}
 
int main()
{
    cout << "Enter the length of array: ";
    int n;
    cin >> n;

    int val[n];
    int wt[n];

    cout << "Enter the weights: ";
    for(int i=0; i<n; i++){
      cin >> wt[i];
    }

    cout << "Enter the values: ";
    for(int i=0; i<n; i++){
      cin >> val[i];
    }

    cout << "Enter the value of knapsack weight capacity: ";
    int w;
    cin >> w;

    int answer = counter(n, w, wt, val);
    cout << "Maximum value is " << answer << endl;
    return 0;
}