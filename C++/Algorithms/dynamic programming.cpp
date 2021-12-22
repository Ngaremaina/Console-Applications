#include<iostream>
using namespace std;

#define MAXIMUM 9999

int n=4; // Number of the places want to visit

 //Next dist_coveredance array will give Minimum dist_coveredance through all the position
int dist_covered[10][10] = {
                    {0, 25, 35, 15},
                    {25, 0, 20, 30},
                    {35, 20, 0, 40},
                    {15, 30, 40, 0}
};
int completed = (1<<n) -1;

int arry[16][4];


int  DP(int point,int position){

  if(point==completed){      // Initially checking whether all
                                  // the places are visited or not
    return dist_covered[position][0];
  }
  if(arry[point][position]!=-1){
     return arry[point][position];
  }

  //Here we will try to go to every other places to take the minimum
  // result
  int result = MAXIMUM;

  //Visit rest of the unvisited cities and point the . Later find the
  //minimum shortest path
  for(int city=0;city<n;city++){

    if((point&(1<<city))==0){

      int newresult = dist_covered[position][city] + DP( point|(1<<city),city);
      result = min(result, newresult);
    }

  }

  return arry[point][position] = result;
}

int main(){
    /* initialize the arry array */
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            arry[i][j] = -1;
        }
    }
  cout<<"Shortest dist_covered: "<<DP(1,0);

return 0;
}
