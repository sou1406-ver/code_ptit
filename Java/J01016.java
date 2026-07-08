package demo;

import java.util.Scanner;

public class J01016 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int dem=0;
        while(n>10){
            if(n%10==4 || n%10==7){
                dem++;
            }
            n/=10;
        }
        if(n==4 || n==7){
            dem++;
        }
        if(dem==4 || dem==7) System.out.println("YES");
        else System.out.println("NO");
    }
}
