//Time: O(NlogN)
//Space: O(N)

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& A, int p, int q, int r);
void merge_sort(vector<int>& A);
void print(const vector<int>&);

int main()
{
  vector<int> A{10, 0, 11, 2, 2};
  merge_sort(A);
  print(A);

  return 0;
}

void merge(vector<int>& A, int p, int q, int r)
{
  int n1 = q - p + 1; 
  int n2 = r - q;
  int i = 0, j = 0, k = p;
  vector<int> L {A.begin() + p, A.begin() + q + 1};
  vector<int> R {A.begin() + q + 1, A.begin() + r + 1};
 
  while(i < n1 || j < n2) {
    if(i < n1 && j < n2)
      if(L[i] <= R[j])
        A[k++] = L[i++];
      else
        A[k++] = R[j++];
    else if(i < n1)
      A[k++] = L[i++];
    else
      A[k++] = R[j++];
  }
}

void merge_sort(vector<int>& A, const int start, const int end) 
{
  if(A.size() < 2 || end <= start) return;

  int mid = (start + end) / 2;
  merge_sort(A, start, mid);
  merge_sort(A, mid+1, end);
  merge(A, start, mid, end);
}

void merge_sort(vector<int>& A) 
{
  merge_sort(A, 0, A.size()-1);
}

void print(const vector<int>& A) 
{
  for(int i=0; i < A.size(); ++i)
    cout << A[i] << " ";

  cout << endl;
}






