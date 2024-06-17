#include <iostream>
using namespace std;

class Sort
{
public:
    void selectionSort(int *arr, int n);
    void insertion_sort(int *arr, int n);
    void bubble_sort(int *arr, int n);
    void bubble_sort_des(int *arr, int n);
    void quick_sort(int *a, int left, int right, int n);
    void merge(int a[], int b[], int n1, int n2, int n3, int n4);
    void merge_pass(int a[], int b[], int n, int s);
    void merge_sort(int a[], int n);
    void print(int *arr, int n);
};