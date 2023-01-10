/*
* Write a program that accepts the noon temperature in degrees Celsius for each day
*  of the week and then reports the weeks average temperature
* as well as the hottest and the coolest days.*/
import java.util.Scanner;

public class Temperature {
    public static void main(String[] args){
        int[] temp=new int[7];
        int sum=0, average, max, min;

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the temperature");
        for (int i=0; i<temp.length; i++) {
            temp[i]=sc.nextInt();
            sum=sum+temp[i];

            //max=Math.max(max,sum);
            //min=Math.min(min,sum);

        }
        average=sum/7;
        System.out.println("The average temperature is "+average);


    }


}
