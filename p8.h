#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem 1:
void delete11(vector<int> &v) {
    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 11 == 0; }), v.end());
}

// Problem 2:
void insertMany(vector<int> &v, int y, int x) {
    int middle = (v.size() % 2 == 0) ? v.size() / 2 : (v.size() / 2) + 1;
    v.insert(v.begin() + middle, y, x);
}

// Problem 3.1
int* allocateAndSet(int a, int b) {
    if (a > b) return nullptr;
    int* arr = new int[b - a + 1];
    for (int i = 0; i <= b - a; ++i) {
        arr[i] = a + i;
    }
    return arr;
}

// Problem 3.2
void deallocate(int* arr) {
    delete[] arr;
    arr = nullptr;
}

// Problem 4
int* reallocate(int* arr, int N, int n) {
    int* newArr = new int[N - n];
    for (int i = 0; i < N - n; ++i) {
        newArr[i] = arr[n + i];
    }
    delete[] arr;
    return newArr;
}

// Problem 5
int** transposed(int** arr, int n, int m) {
    int** transposedArr = new int*[m];
    for (int i = 0; i < m; ++i) {
        transposedArr[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            transposedArr[i][j] = arr[j][i];
        }
    }
    return transposedArr;
}

void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

