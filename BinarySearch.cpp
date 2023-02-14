#include "BinarySearch.h"

int binary_search(int x, const vector<int>& vec, int& steps){
    int low = 0;
    int high = vec.size() - 1;
    steps = 0;

    while (low <= high){
        int mid = (low + high);{
                int mid = (low + high) / 2;

                steps++;

                if (vec[mid] < x)
                low = mid +1;
                else if (vec[mid] > x)
                high = mid - 1;
                else
                return mid;
            }
            return -1;
        }
}