//Time: O(n^2)
//Space: O(1)

#include <vector>
#include <iostream>
using namespace std;

void swap(int& a, int&b) {
  int aux = a;
  a = b;
  b = aux;
}

void insertion_sort(vector<int>& v) 
{
  for(int i=1; i < v.size(); ++i) {
    int j = i;
    
    while(j > 0 && v[j] < v[j-1]) {
      swap(v[j], v[j-1]);
      --j;
    }
  }
}

int main() 
{
  vector<int> v {5, 2, 4, 6, 1, 3};
  insertion_sort(v);
  
  for(int i=0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }

  return 0;
}
