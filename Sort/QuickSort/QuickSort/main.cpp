//
//  main.cpp
//  QuickSort
//
//  Created by Jimmy on 6/28/15.
//  Copyright (c) 2015 Jimmy. All rights reserved.
//

#include <iostream>
using namespace std;

void QuickSort(int a[] , int left , int right)
{
  if(left < right)
  {
      int key = a[left];
      int low = left;
      int high = right;
      while (low < high) {
          while(low < high && a[high] >= key)
          {
              high--;
          }
          a[low] = a[high];
          while(low < high && a[low] <= key)
          {
              low++;
          }
          a[high] = a[low];
      }
      a[low] = key;
      QuickSort(a, left, low - 1);
      QuickSort(a, low + 1 , right);
  }
}

int main(int argc, const char * argv[]) {
    int a[] = {3,6,9,2,0,5};
    QuickSort(a , 0 , 5);
    for(int i = 0 ; i <= 5 ; i++)
    {
        cout<< a[i]<<endl;
    }
    return 0;
}


