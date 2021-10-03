/*A program is required that computes the square and cube of all numbers between 2 and 10 and display them using a loop. The output should take the following format.
        Number      Square          Cube
        2                4                   8
        3                9                 27
        …
        10            100              1000
        Write the program using for loop
        NB: The program has no input.*/

public class MathPowersusingFor {
    public static void main(String[] args){
        double square, cube;
        int i;

        System.out.println("Number\tSquare\tCube\t");
        for (i=2; i<=10;i++){
            square=Math.pow(i,2);
            cube=Math.pow(i,3);
            System.out.println(i+"\t\t"+square+"\t\t"+cube+"\t\t");

        }

    }
}
