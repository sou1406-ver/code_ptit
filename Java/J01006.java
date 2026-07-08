
package demo;

import java.util.Scanner;

public class J01006 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0){
            long a[]= new long[100];
            a[1]=a[2]=1;
            for(int i=3;i<100;i++){
                a[i]=a[i-1]+a[i-2];
            }
            int n= sc.nextInt();
            System.out.println(a[n]);
        }
    }
}
