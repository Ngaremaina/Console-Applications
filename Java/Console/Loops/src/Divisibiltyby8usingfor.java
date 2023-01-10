/*
Write a program that displays all numbers divisible by 8 between 1 and 200 using for
 */
public class Divisibiltyby8usingfor {
    public static void main(String[] args){
        int i;
        for (i=0; i<=200; i++){
            if (i%8==0){
                System.out.print(i+",");
            }
        }
    }
}
