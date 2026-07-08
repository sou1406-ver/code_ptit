package demo;

import java.util.Scanner;

public class J01017 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s =sc.nextLine();
            boolean check=true;
            if(s.length()<2){
                System.out.println("NO");
                continue;
            }
            for(int i=1;i< s.length();i++){
                if (Math.abs(s.charAt(i) - s.charAt(i-1)) != 1){
                    check=false;
                    continue;
                }
            }
            if(check) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
