#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Structure for an item which stores
// weight & corresponding value of Item
struct Item {
    int item, weight;

    // Constructor
    Item(int item, int weight)
        : item(item), weight(weight)
    {
    }
};

// Comparison function to sort Item
// according to val/weight ratio
bool compare(struct Item a, struct Item b)
{
    double r1 = (double)a.item / a.weight;
    double r2 = (double)b.item / b.weight;
    return r1 > r2;
}

// Main greedy function to solve problem
double Knapsack(struct Item arr[],
                          int n, int size)
{
    // Sort Item on basis of ratio
    sort(arr, arr + size, compare);

    // Current weight in knapsack
    int currentWeight = 0;

    // Result (value in Knapsack)
    double finalvalue = 0.0;

    // Looping through all Items
    for (int i = 0; i < size; i++) {

        // If adding Item won't overflow,
        // add it completely
        if (currentWeight + arr[i].weight <= n) {
            currentWeight += arr[i].weight;
            finalvalue += arr[i].item;
        }

        // If we can't add current Item,
        // add fractional part of it
        else {
            int remain = n - currentWeight;
            finalvalue += arr[i].item
                          * ((double)remain
                             / arr[i].weight);

            break;
        }
    }

    // Returning final value
    return finalvalue;
}

// Driver Code
int main()
{
    // Weight of knapsack
    int n = 14;

    // Given weights and values as a pairs
    Item arr[] = { { 2, 16 },
                   { 4, 14 },
                   { 7, 2 },
                   { 2, 5 },
                   { 5, 16} };

    int size = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    cout << "Maximum profit: "
         << Knapsack(arr, n, size);
    return 0;
}
