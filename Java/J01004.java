package javaapplication1;

import java.util.Scanner;

public class J01004 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int check =1;
            t--;
            int n= sc.nextInt();
            for( int i=2;i<Math.sqrt(n);i++){
                if(n%i==0) check =0;
            }
            if(check==1) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
