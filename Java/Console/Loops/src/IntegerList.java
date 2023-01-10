import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*Write a program that accepts a list of integers and computes their sum.
The program should allow the user to enter any number of integers
but an input of zero should terminate the list.
For example if the user enters 2 5 6 12 8 2 0 the sum should be 35.
If he/she enters 2 4 5 0 the sum should be 11 and if he enters 5 4 6 0 12 43 2
the sum should 15 i.e. only numbers before zero are summed.
The rest are ignored and the program terminated.
 */

public class IntegerList {
    public static void main(String[] args) throws IOException {
        int i, sum=0, elements,input;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the number of elements");
        elements=Integer.parseInt(bufferedReader.readLine());

        System.out.println("Enter the integers");
        for (i=0; i<=elements;i++){
            input=Integer.parseInt(bufferedReader.readLine());
            sum+=input;
            if (input==0){
                break;
            }

        }
        System.out.println(sum);



    }
}
