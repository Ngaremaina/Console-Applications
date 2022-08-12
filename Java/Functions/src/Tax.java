import java.util.Scanner;

/*Write a program using the tax information below: -
Gross Pay                  	      Tax Rate
Over 50,000			35%
>= 40,000 but below 50,000	30%
>=20,000 but below 40,000	25%
>=12,000 but below 20,000	15%
Below 12,000			no tax.
Write a program that accepts the gross pay and outputs both the tax amount and the
net pay (Assume the net pay is gross pay – tax amount).
Define a function calc_tax that accepts the gross from main and then computes and returns the tax amount.
Main should then output both the tax amount and the net pay.
 */
public class Tax {
    public static void main(String[] args){
        float gross;
        double netpay;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter your gross pay");
        gross = sc.nextFloat();

        netpay=gross+calc_tax(gross);
        System.out.println("Your netpay is "+netpay+" and the tax amount is "+calc_tax(gross));

    }
    private static double calc_tax(float gross_payment){
        double tax = 0;
        if (gross_payment>=50000){
            tax=0.35*gross_payment;
        }
        else if(gross_payment>=40000 && gross_payment<50000){
            tax=0.30*gross_payment;
        }
        else if(gross_payment>=20000 && gross_payment<40000){
            tax=0.25*gross_payment;
        }
        else if(gross_payment>=12000 && gross_payment<20000){
            tax=0.20*gross_payment;
        }
        else{
            System.out.println("No tax");
        }
        return tax;

    }
}
