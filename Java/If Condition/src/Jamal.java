import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*Write a program that when run, produces a menu showing beer brands and their prices
and then prompts the user enter his/her choice (1,2,3 or 4).
The user is then asked how many bottles he/she wants.
He is then given the total cost (depending on the cost of the beer chosen) as the output.
If he/she enters an invalid choice e.g. 8, he/she should get an error message.
* */
public class Jamal {
    public static void main(String[] args) throws IOException {
        int choice, amount,sum;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("****Jamal and Daughters Pub****");
        System.out.println("Beer Brand\t\t\tPrice");
        System.out.println("1) Tusker\t\t\t100/=\n" +
                "2) Pilsner\t\t\t120/=\n" +
                "3) Smirnoff Ice\t\t140/=\n" +
                "4) White Cap\t\t 90/=\n");

        System.out.println("Enter your choice");
        choice=Integer.parseInt(bufferedReader.readLine());

        if (choice==1){
            System.out.println("Enter the number of bottles of Tusker you need");
            amount=Integer.parseInt(bufferedReader.readLine());
            sum=amount*100;
            System.out.println("The total cost = "+sum);

        }
        else if (choice==2){
            System.out.println("Enter the number of bottles of Pilsner you need");
            amount=Integer.parseInt(bufferedReader.readLine());
            sum=amount*120;
            System.out.println("The total cost = "+sum);

        }
        else if (choice==3){
            System.out.println("Enter the number of bottles of Smirnoff you need");
            amount=Integer.parseInt(bufferedReader.readLine());
            sum=amount*140;
            System.out.println("The total cost = "+sum);

        }
        else if (choice==4){
            System.out.println("Enter the number of bottles of White Cap you need");
            amount=Integer.parseInt(bufferedReader.readLine());
            sum=amount*90;
            System.out.println("The total cost = "+sum);

        }
        else {
            System.out.println("Invalid Choice, please try again");
        }

    }
}
