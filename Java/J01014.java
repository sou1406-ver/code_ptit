package demo;

import java.util.Scanner;

public class J01014 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            long ans = 1;
            while (n % 2 == 0) {
                ans = 2;
                n /= 2;
            }
            for (int i = 3; i <= Math.sqrt(n); i += 2) {
                    while (n % i == 0) {
                        n /= i;
                        ans=i;
                    }
            }
            if (n > 1) {
                    System.out.println(n);
                }
        }

    }
}
