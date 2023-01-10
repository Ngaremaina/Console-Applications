/*
Write a program to produce the following multiplication table using loops.
*    1    2    3    4    5    6
1    1    2    3    4    5    6
2    2    4    6    8   10 12
3    3    6    9   12  15 18
4    4    8   12  16  20 24
5    5  10   15  20  25 30

 */
public class MultiplicationTable {
    public static void main(String[] args){
        for (int i=1; i<=7;i++){
            for (int j=1;j<=7;j++){
                System.out.print(i*j+"\t");
            }
            System.out.println();
        }
    }
}
