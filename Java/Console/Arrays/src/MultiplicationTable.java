import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args){
        int[][] numbers = new int[20][20];
        int number;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the table form");
        number=sc.nextInt();
        for (int i=1; i<=number;i++){
            for (int j=1; j<=number;j++){
                numbers[i][j]=i*j;
                System.out.print(numbers[i][j]+"\t");
            }
            System.out.println();
        }
        /*int[][] table = new int[11][11];
        int number;


        /*for (int i=1; i<=10;i++){
            for (int j = 1; j<=10; j++){
                table[i][j]=i*j;

                System.out.print("\t"+table[i][j]);
            }
            System.out.println();
        }*/

    }




}
