/*
Write a program that displays all numbers divisible by 8 between 1 and 200 using do while
 */
public class Divisibilityby8usingdowhile {
    public static void main(String[] args){
        int i=0;
        do {
            if (i%8==0){
                System.out.print(i+", ");
            }

            i++;
        }
        while (i<=200);
    }
}
