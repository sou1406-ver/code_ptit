package demo;

import java.util.Scanner;

public class J01025 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a= new int[4];
        int[] b= new int[4];
        for(int i=0; i<a.length;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0; i<b.length;i++){
            b[i]=sc.nextInt();
        }
        int xaMax = Integer.max(a[0], a[2]);
        int xaMin = Integer.min(a[0], a[2]);
        int yaMax = Integer.max(a[1], a[3]);
        int yaMin = Integer.min(a[1], a[3]);
        int xbMax = Integer.max(b[0], b[2]);
        int xbMin = Integer.min(b[0], b[2]);
        int ybMax = Integer.max(b[1], b[3]);
        int ybMin = Integer.min(b[1], b[3]);
        int xMax = Integer.max(xaMax,xbMax);
        int xMin = Integer.min(xaMin,xbMin);
        int yMax = Integer.max(yaMax,ybMax);
        int yMin = Integer.min(yaMin,ybMin);
        int c1= xMax-xMin;
        int c2= yMax-yMin;
        int c=Math.max(c1, c2);
        System.out.println(c*c);
    }
}
