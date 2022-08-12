import java.util.Scanner;

/*Write a function definition for a function called even which accepts an integer
 and returns 1 to the calling function if the integer is even and 0 if it is odd.
 */
public class Even {
    public static void main(String[] args){
        float num;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter your number");
        num=sc.nextInt();

        even(num);

    }
    public static void even(float number){
        if (number%2==0){
            System.out.println("1");
        }
        else {
            System.out.println("0");
        }

    }
}
