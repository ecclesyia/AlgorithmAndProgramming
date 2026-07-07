#include <iostream>
#include <vector>

// Helper to print array
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// 1. Merge Sort Functions
void merge(std::vector<int>& vec, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = vec[left + i];
    for (int j = 0; j < n2; j++) R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& vec, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(vec, left, mid);
    mergeSort(vec, mid + 1, right);
    merge(vec, left, mid, right);
}

// 2. Quick Sort Functions
int partition(std::vector<int>& vec, int low, int high) {
    int pivot = vec[high]; // Pivot chosen as the last element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (vec[j] < pivot) {
            i++;
            std::swap(vec[i], vec[j]);
        }
    }
    std::swap(vec[i + 1], vec[high]);
    return i + 1;
}

void quickSort(std::vector<int>& vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

int main() {
    std::vector<int> data1 = {38, 27, 43, 3, 9, 82, 10};
    std::vector<int> data2 = {38, 27, 43, 3, 9, 82, 10};

    std::cout << "--- Original Vector ---" << std::endl;
    printVector(data1);

    std::cout << "\n--- Merge Sort (O(n log n)) ---" << std::endl;
    mergeSort(data1, 0, data1.size() - 1);
    printVector(data1);

    std::cout << "\n--- Quick Sort (O(n log n) Avg) ---" << std::endl;
    quickSort(data2, 0, data2.size() - 1);
    printVector(data2);

    return 0;
}
