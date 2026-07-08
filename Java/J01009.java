package javaapplication1;

import java.util.Scanner;

public class J01009 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long[]a = new long[22];
        a[1]=1;
        long sum=0;
        for(int i=2;i<=n;i++){
            a[i]=a[i-1]*i;
        }
        for(int i=1;i<=n;i++){
            sum+=a[i];
        }
        System.out.println(sum);
    }
}
