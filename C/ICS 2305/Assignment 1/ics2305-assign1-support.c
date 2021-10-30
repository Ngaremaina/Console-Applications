#include <stdio.h>
#include <math.h>

#include "ics2305-assign1-support.h"

char grid[HEIGHT][WIDTH];

int float_display_array(float f_array[]){
    // float top;
    for (int i=0;i<20;i++){
        printf("float[%d]=", i);
        printf("%f\n", f_array[i]);//display the float array
	}
}
int integer_display_array(float f_array[]){
    for (int i=0; i<20; i++){
        int num=floor(f_array[i]);//floor function used
        printf("integer[%d]=", i);
        printf("%d\n", num);//display the integer array

    }
}
int float_evens(float f_array[]){
    // float top;
    int count_even=0;
    for(int i=0;i<20;i++){
        if (i%2==0){
            count_even++;
        }
    }
    printf("The number of even in the float array is %d",count_even);
}
    // return new arr;
int integer_evens(float f_array[]){
    int count_even=0;
    for(int i=0;i<20;i++){
        int num=floor(f_array[i]);
        if (i%2==0){
            count_even++;
        }
    }
    printf("The number of even in the integer array is %d",count_even);
}
int make_array(int m_array[], int range, int exp, int mode){
    int ans;

    for (int i=0; i<range; i++){
        ans=pow(exp,i);
        m_array[i]=ans%mode;
        printf("arr[%d] = ", i);
        printf("%d\n", m_array[i]);
    }
}

int most_values(int m_array[],int range, int maxValue){
    maxValue = 0;
    int i, j, maxCount = 0;
    for (i = 0; i <= range; i++) {
      int count = 0;
      for (j = 0; j <= range; j++) {
         if (m_array[j] == m_array[i]){
            count++;
         }
      }

      if (count > maxCount) {
         maxCount = count;
         maxValue = m_array[i];
         printf("Value %d", maxValue);
         printf(" is a most frequently occurring value (%d times) ",count);
         printf("\n");
      }
   }

   return maxValue;
}

int graph_functions(float s,float u){
    float x,y,a,b;
    init_grid();

    for (x=-MAX_X;x<=MAX_X;x+=0.1){
        for (y=-MAX_Y;y<=MAX_Y;y+=0.1){
            a = (cos(x)*s);
            b = (sin(x)*u);
            plot(rintf(x*10),rintf(a*10));
            plot(rintf(x*10),rintf(b*10));
        }
    }
    show_grid();
}

int plot(int x, int y)
{
    if( x > XMAX || x < XMIN || y > YMAX || y < YMIN )
        return(-1);

    grid[Y+y][X-x] = 'E';
    grid[Y-y][X+x] = 'D';

    return(1);
}

/* Initialize grid */
void init_grid(void)
{
    int x,y;

    for(y=0;y<=HEIGHT;y++){
       for(x=0;x<=WIDTH;x++){
            grid[y][x] = ' ';
        }
    }
    /* draw the axis */
    for(y=0;y<=HEIGHT;y++){
        grid[y][X] = '|';
        grid[y][0]='|';
        grid[y][99]='|';
    }

    for(x=0;x<=WIDTH;x++){
        grid[Y][x] = '-';
        grid[0][x]='-';
    }

    grid[Y][X] = '+';
}

/* display grid */
void show_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
    {
        for(x=0;x<WIDTH;x++){
           putchar(grid[y][x]);
        }
        putchar('\n');
    }

}

