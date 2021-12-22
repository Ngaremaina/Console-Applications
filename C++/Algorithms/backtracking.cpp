#include <bits/stdc++.h>
using namespace std;
#define V 4

// Function to find the minimum weight Hamiltonian Cycle
void backtrack(int track[][V], vector<bool>& v, int currentPosition,
         int n, int count, int point, int& answer)
{

    // If last node is reached and it has a link
    // to the starting node i.e the source then
    // keep the minimum value out of the total point
    // of traversal and "answer"
    // Finally return to check for more possible values
    if (count == n && track[currentPosition][0]) {
        answer = min(answer, point + track[currentPosition][0]);
        return;
    }

    // BACKTRACKING STEP
    // Loop to traverse the adjacency list
    // of currentPosition node and increasing the count
    // by 1 and point by track[currentPosition][i] value
    for (int i = 0; i < n; i++) {
        if (!v[i] && track[currentPosition][i]) {

            // Mark as visited
            v[i] = true;
            backtrack(track, v, i, n, count + 1,
                point + track[currentPosition][i], answer);

            // Mark ith node as unvisited
            v[i] = false;
        }
    }
};


// Driver code
int main()
{
    // n is the number of nodes i.e. V
    int n = 4;

    int track[][V] = {
        { 0, 25, 35, 15 },
        { 25, 0, 20, 30 },
        { 35, 20, 0, 40 },
        { 15, 30,40, 0 }
    };

    // Boolean array to check if a node
    // has been visited or not
    vector<bool> v(n);
    for (int i = 0; i < n; i++){
        v[i] = false;
    }



    // Mark 0th node as visited
    v[0] = true;
    int answer = INT_MAX;

    // Find the minimum weight Hamiltonian Cycle
    backtrack(track, v, 0, n, 1, 0, answer);

    // answer is the minimum weight Hamiltonian Cycle
    cout << "The minimum path: "<<answer;

    return 0;
}
