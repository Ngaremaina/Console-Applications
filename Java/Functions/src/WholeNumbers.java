/*Write a program that computes the sum of all whole numbers between 20 and 70
 using a loop. The program should use a function called calculate_total
 to compute the sum and return it to the main function, which then outputs it.
 */
public class WholeNumbers {
    public static void main(String[] args){
        int total=0, sum=0;
        for (int num=20; num<=70; num++){
           total= calculate_total(sum, num);

        }
        System.out.println("the sum is "+total);

    }
    private static int calculate_total(int sum, int number){
        int total = 0;
        total=total+number;
       return total;

    }
}
