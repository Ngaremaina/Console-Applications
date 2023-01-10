/*10)	Write a program that displays a temperature conversion chart on the screen as follows:
Fahrenheit       Celsius
       0               -17.78
     20                 -6.67
     40                  4.44
     …                   …
     …                   …
   300               148.89
Required: The displaying of the values should be done by main but the conversion from Fahrenheit
to Celsius should be done by a function called Temp.
 */

public class Temperature {
    public static void main(String[] args){
        System.out.println("Farenheit\t\tCelcius");
        for (float fah=0; fah<=300;fah=fah+20){
                float temp=temperature(fah);
                System.out.println(fah+"\t\t"+temp);

        }

    }
    public static float temperature(float farenheit){
        return (farenheit-32)*5/9;
    }

}
