// check wheather the element is in the array

#include <iostream>
using namespace std;

bool linear_search(int arr[], int size)
{
    int key;
    cout << "element you want to search" << endl;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 8, 9};
    int size = sizeof(arr) / 4;
    bool i = linear_search(arr, size);

    if (i == true)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}


// if element is in the array find the index

// #include <iostream>
// using namespace std;

// int linear_search(int arr[], int size)
// {
//     int key;
//     cout << "element you want to search" << endl;
//     cin >> key;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 3, 5, 7, 4, 8, 9};
//     int size = sizeof(arr) / 4;
//     int i = linear_search(arr, size);
//     if (i !=-1)
//     {
//         cout << "element found at "<< i << endl;
//     }
//     else{
//         cout<<"element not found";
//     }
    

//     return 0;
// }