//Time: O(N^2)
//Space: O(1)
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void swapT(T& a, T& b);

template<typename T>
void selectionSort(vector<T>& A)
{
  for(int i=0; i < A.size()-1; ++i) {
    int min = i;

    for(int j=i+1; j < A.size(); ++j) {
      if(A[j] < A[min])
        min = j;
    }
    
    if(i != min) swapT(A[i], A[min]);
  }
}

int main()
{
  vector<int> sample{5,4,3,2,1};
  selectionSort(sample);

  for(int i=0; i < sample.size(); ++i) {
    cout << sample[i] << " ";
  }

  return 0;
}

template<typename T>
void swapT(T& a, T& b)
{
  if(&a != &b) {
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
  }
}

