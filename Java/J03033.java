package demo;

import java.util.Scanner;
import java.math.BigInteger;

public class J03033 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger lcm = a.divide(a.gcd(b)).multiply(b);
            System.out.println(lcm);
        }

        sc.close();
    }
}
