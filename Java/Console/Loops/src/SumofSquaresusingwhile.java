/*Write a program that computes the sum of the squares of the first 15 positive integers
and display the results using while loop*/
public class SumofSquaresusingwhile {
    public static void main(String[] args){
        int i=0, sum=0;
        double square;
        while(i<=15){
            square=Math.pow(i,2);
            sum+=square;
            i++;
        }
        System.out.println("The sum = "+sum);
    }
}
