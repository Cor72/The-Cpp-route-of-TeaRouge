#include <iostream>   // cout/cin/endl
#include <algorithm>  // swap
using std::cout;
using std::cin;
using std::endl;

void bluee(int *arr,int len)
{
    for (int i = 0; i < len - 1; ++i)
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}

void print(int* arr, int len) {
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[10] = { 2,3,5,6,8,9,1,7,4,10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    bluee (arr, len);
    print(arr, len);

    
    cin.tie(0);
    cout.tie(0);
    return 0;
}
