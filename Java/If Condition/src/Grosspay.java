import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
Write a program using the tax information below: -
Gross Pay                  	      Tax Rate
Over 40,000			               30%
>= 30,000 but below 40,000	       25%
>=20,000 but below 30,000	       15%
>=10,000 but below 20,000	       10%
Below 10,000			           no tax.
Write a program that accepts the gross pay and computes both the tax amount and the net pay.
(Assume the net pay is gross pay – tax amount)

 */
public class Grosspay {
    public static void main(String[] args) throws IOException {
        double gross, taxamount, netpay;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the amount");
        gross=Float.parseFloat(bufferedReader.readLine());

        if (gross<10000){
            System.out.println("No tax");
        }
        else if (gross>=10000 && gross<20000){
            taxamount=gross*0.1;
            netpay=gross-taxamount;
            System.out.println("The net pay = "+netpay+" and the tax amount = "+taxamount);
        }
        else if (gross>=20000 && gross<20000){
            taxamount=gross*0.15;
            netpay=gross-taxamount;
            System.out.println("The net pay = "+netpay+" and the tax amount = "+taxamount);
        }
        else if (gross>=30000 && gross<20000){
            taxamount=gross*0.25;
            netpay=gross-taxamount;
            System.out.println("The net pay = "+netpay+" and the tax amount = "+taxamount);
        }
        else if (gross>=40000){
            taxamount=gross*0.3;
            netpay=gross-taxamount;
            System.out.println("The net pay = "+netpay+" and the tax amount = "+taxamount);
        }

    }
}
