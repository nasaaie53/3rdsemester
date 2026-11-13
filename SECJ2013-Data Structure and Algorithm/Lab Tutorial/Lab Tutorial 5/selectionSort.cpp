#include <iostream>
#include <string>
using namespace std;


void selectionSort(int marks[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i; 
        cout << "Marks Array Pass " << i + 1 << "\n";
        
        for (int j = i + 1; j < n; j++) {
            cout << " Comparing " << marks[j] << " with " << marks[maxIdx];
            if (marks[j] > marks[maxIdx]) { // Change to find the maximum
                maxIdx = j; // Update the index of the maximum element
                cout << " => New max at index " << maxIdx;
            }
            cout << endl;
        }
        
        
        if (maxIdx != i) {
            int temp = marks[maxIdx];
            marks[maxIdx] = marks[i];
            marks[i] = temp;
        }
        
       
        for (int k = 0; k < n; k++) cout << marks[k] << " ";
        cout << "\n\n";
    }
}


void selectionSort(string names[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i; 
        cout << "Names Array Pass " << i + 1 << ":\n";
        
        for (int j = i + 1; j < n; j++) {
            cout << " Comparing \"" << names[j] << "\" with \"" << names[maxIdx] << "\"";
            if (names[j] > names[maxIdx]) { 
                maxIdx = j; 
                cout << " => New max at index " << maxIdx;
            }
            cout << endl;
        }
        
        
        if (maxIdx != i) {
            string temp = names[maxIdx];
            names[maxIdx] = names[i];
            names[i] = temp;
        }
        
        
        for (int k = 0; k < n; k++) cout << "\"" << names[k] << "\" ";
        cout << "\n\n";
    }
}

int main() {
    int marks[] = {85, 74, 92, 67, 89};
    int marksSize = sizeof(marks) / sizeof(marks[0]);
    cout << "Sorting marks array:\n";
    selectionSort(marks, marksSize);

    string names[] = {"Li Wei", "Amit", "Hiroshi", "Nguyen", "Siti"};
    int namesSize = sizeof(names) / sizeof(names[0]);
    cout << "Sorting names array:\n";
    selectionSort(names, namesSize);

    system("pause");
    return 0;
}