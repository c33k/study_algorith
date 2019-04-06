#include <iostream>
#include <vector>
using namespace std;

const int NOT_FOUND = -1;

//find position of K in A
//if not found, return -1
int binarysearch(const vector<int>& A, const int& k)
{
  int l = 0;
  int r = A.size()-1;
  int pos = NOT_FOUND;

  while(l <= r && pos == NOT_FOUND) {
    int mid = (l + r) / 2;

    if(k == A[mid])
      pos = mid;
    else if(k < A[mid])
      r = mid-1;
    else l = mid+1;
  }

  return pos;
}

int main()
{
  vector<int> sample{1,2,3,4,5};
  int num;

  cin >> num;

  int position = binarysearch(sample, num);

  if(position != NOT_FOUND)
    cout << "Found number " << num << " at position " << position << endl;
  else
    cout << "not found" << endl;

  return 0;
}
