/*Write a program that computes the sum of the squares of the first 15 positive integers
and display the results using for loop*/
public class SumofSquaresusingfor {
    public static void main(String[] args){
        int i, sum=0;
        double square;

        for(i=0;i<=15;i++){
            square=Math.pow(i,2);
            sum+=square;

        }
        System.out.println("The sum = "+sum);
    }
}
