package demo;

import java.util.Scanner;

public class J01007 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long a[] = new long[93];
        a[0] = 0;
        a[1] = a[2] = 1;
        for (int i = 3; i < 93; i++) {
            a[i] = a[i - 1] + a[i - 2];
        }
        while (t > 0) {
            t--;
            long n = sc.nextLong();
            boolean check = false;
            for (int i = 0; i <= 92; i++) {
                if (n == a[i]) {
                    check = true;
                    break;
                }
            }
            System.out.println(check ? "YES" : "NO");
        }
    }
}
