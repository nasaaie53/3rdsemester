#include <iostream>
#include <string>
using namespace std;


void insertionSort(int temperatures[], int n) {
    for (int i = 1; i < n; i++) {
        int key = temperatures[i];
        int j = i - 1;
        
       
        while (j >= 0 && temperatures[j] > key) {
            temperatures[j + 1] = temperatures[j];
            j--;
        }
        temperatures[j + 1] = key;
        
        
        cout << "Pass " << i << ": Insert " << key << " into the sorted section:\n";
        for (int k = 0; k < n; k++) {
            if (k <= i) {
                cout << "[" << temperatures[k] << "] "; 
            } else {
                cout << temperatures[k] << " "; 
            }
        }
        cout << "\n\n";
    }
}


void insertionSort(string colors[], int n) {
    for (int i = 1; i < n; i++) {
        string key = colors[i];
        int j = i - 1;
        
        
        while (j >= 0 && colors[j] > key) {
            colors[j + 1] = colors[j];
            j--;
        }
        colors[j + 1] = key;
        
        
        cout << "Pass " << i << ": Insert \"" << key << "\" into the sorted section:\n";
        for (int k = 0; k < n; k++) {
            if (k <= i) {
                cout << "[\"" << colors[k] << "\"] "; 
            } else {
                cout << "\"" << colors[k] << "\" "; 
            }
        }
        cout << "\n\n";
    }
}

int main() {
    int temperatures[] = {36, 22, 25, 35, 28};
    int tempSize = sizeof(temperatures) / sizeof(temperatures[0]);
    cout << "Sorting temperatures array:\n";
    insertionSort(temperatures, tempSize);

    string colors[] = {"Red", "Blue", "Green", "Yellow", "Purple"};
    int colorsSize = sizeof(colors) / sizeof(colors[0]);
    cout << "Sorting colors array:\n";
    insertionSort(colors, colorsSize);



    system("pause");
    return 0;
}