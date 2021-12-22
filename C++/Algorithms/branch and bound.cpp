#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n = 4;

// final_path[] stores the final solution ie, the
// path of the salesman.
int final_path[n+1];

// visited[] keeps track of the already visited nodes
// in a particular path
bool visited[n];

// Stores the final minimum weight of shortest tour.
int final_result = INT_MAX;

// Function to copy temporary solution to
// the final solution
void Final(int current_path[])
{
    for (int i=0; i<n; i++)
        final_path[i] = current_path[i];
    final_path[n] = current_path[0];
}

// Function to find the minimum edge short
// having an end at the vertex i
int firstMinimum(int bound[n][n], int i)
{
    int min = INT_MAX;
    for (int k=0; k<n; k++)
        if (bound[i][k]<min && i != k)
            min = bound[i][k];
    return min;
}

// function to find the second minimum edge short
// having an end at the vertex i
int secondMinimum(int bound[n][n], int i)
{
    int first = INT_MAX, second = INT_MAX;
    for (int j=0; j<n; j++)
    {
        if (i == j)
            continue;

        if (bound[i][j] <= first)
        {
            second = first;
            first = bound[i][j];
        }
        else if (bound[i][j] <= second &&
                 bound[i][j] != first)
            second = bound[i][j];
    }
    return second;
}

// function that takes as arguments:
// current_bound -> lower bound of the root node
// current_weight-> stores the weight of the path so far
// level-> current level while moving in the search
//         space tree
// current_path[] -> where the solution is being stored which
//                would later be copied to final_path[]
void Branch(int bound[n][n], int current_bound, int current_weight,
            int level, int current_path[])
{
    // base case is when we have reached level n which
    // means we have covered all the nodes once
    if (level==n)
    {
        // check if there is an edge from last vertex in
        // path back to the first vertex
        if (bound[current_path[level-1]][current_path[0]] != 0)
        {
            // curr_result has the total weight of the
            // solution we got
            int curr_result = current_weight +
                    bound[current_path[level-1]][current_path[0]];

            // Update final result and final path if
            // current result is better.
            if (curr_result < final_result)
            {
                Final(current_path);
                final_result = curr_result;
            }
        }
        return;
    }

    // for any other level iterate for all vertices to
    // build the search space tree recursively
    for (int i=0; i<n; i++)
    {
        // Consider next vertex if it is not same (diagonal
        // entry in boundacency matrix and not visited
        // already)
        if (bound[current_path[level-1]][i] != 0 &&
            visited[i] == false)
        {
            int temp = current_bound;
            current_weight += bound[current_path[level-1]][i];

            // different computation of current_bound for
            // level 2 from the other levels
            if (level==1)
              current_bound -= ((firstMinimum(bound, current_path[level-1]) +
                             firstMinimum(bound, i))/2);
            else
              current_bound -= ((secondMinimum(bound, current_path[level-1]) +
                             firstMinimum(bound, i))/2);

            // current_bound + current_weight is the actual lower bound
            // for the node that we have arrived on
            // If current lower bound < final_result, we need to explore
            // the node further
            if (current_bound + current_weight < final_result)
            {
                current_path[level] = i;
                visited[i] = true;

                // call Branch for the next level
                Branch(bound, current_bound, current_weight, level+1,
                       current_path);
            }

            // Else we have to prune the node by resetting
            // all changes to current_weight and current_bound
            current_weight -= bound[current_path[level-1]][i];
            current_bound = temp;

            // Also reset the visited array
            memset(visited, false, sizeof(visited));
            for (int j=0; j<=level-1; j++)
                visited[current_path[j]] = true;
        }
    }
}

// This function sets up final_path[]
void BB(int bound[n][n])
{
    int current_path[n+1];

    // Calculate initial lower bound for the root node
    // using the formula 1/2 * (sum of first min +
    // second min) for all edges.
    // Also initialize the current_path and visited array
    int current_bound = 0;
    memset(current_path, -1, sizeof(current_path));
    memset(visited, 0, sizeof(current_path));

    // Compute initial bound
    for (int i=0; i<n; i++)
        current_bound += (firstMinimum(bound, i) +
                       secondMinimum(bound, i));

    // Rounding off the lower bound to an integer
    current_bound = (current_bound&1)? current_bound/2 + 1 :
                                 current_bound/2;

    // We start at vertex 1 so the first vertex
    // in current_path[] is 0
    visited[0] = true;
    current_path[0] = 0;

    // Call to Branch for current_weight equal to
    // 0 and level 1
    Branch(bound, current_bound, 0, 1, current_path);
}

// Driver code
int main()
{
    //boundacency matrix for the given graph
    int bound[n][n] = {
        {0, 25, 35, 15},
        {25, 0, 20, 30},
        {35, 20, 0, 40},
        {15, 30, 40, 0}
    };

    BB(bound);

    cout<<"Shortest distance is "<<final_result<<"\n";
    cout<<"Path taken is: ";
    for (int i=0; i<=n; i++)
        cout<<final_path[i];


    return 0;
}
