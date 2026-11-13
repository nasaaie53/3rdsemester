#include<iostream>
#include<string>
using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Integer Array Pass " << i + 1 << "\n";
        for (int j = 0; j < n - i - 1; j++) {
            cout << " Comparing " << arr[j] << " and " << arr[j+1] << ": ";
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout << "Swapped => ";
            } else {
                cout << "No Swap => ";
            }
           
            for (int k = 0; k < n; k++) cout << arr[k] << " ";
            cout << endl;
        }
        cout << "End of Integer Array Pass " << i + 1 << ":\n";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n\n";
    }
}


void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "String Array Pass " << i + 1 << "\n";
        for (int j = 0; j < n - i - 1; j++) {
            cout << " Comparing \"" << arr[j] << "\" and \"" << arr[j+1] << "\": ";
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout << "Swapped => ";
            } else {
                cout << "No Swap => ";
            }
            
            for (int k = 0; k < n; k++) cout << "\"" << arr[k] << "\" ";
            cout << endl;
        }
        cout << "End of String Array Pass " << i + 1 << "\n";
        for (int k = 0; k < n; k++) cout << "\"" << arr[k] << "\" ";
        cout << "\n\n";
    }
}

int main() {
    int intArr[] = {64, 25, 12, 22, 11};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Sorting Integer Array:\n";
    bubbleSort(intArr, intSize);

    string strArr[] = {"apple", "orange", "banana", "grape", "cherry"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    cout << "Sorting String Array:\n";
    bubbleSort(strArr, strSize);

    system("pause");

    return 0;
}