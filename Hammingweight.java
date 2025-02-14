//What is hamming weight=Given a positive integer n, write a function that returns the number of
//set bits
// in its binary representation (also known as the Hamming weight). ex=11 binaryn 1011 output 3
// Making wuestion interesting by showing decimal to binary in same so


package Functions;
import java.util.*;
public class Hammingweight {
    public static void binary(int n){
        int t=n;
        double ans=0;
        double i=0;
        while(n>0){
            float bit=n&1;
            double y=Math.pow(10,i);//pow return double so we cant use int so for performing operation we need to take every thing in double or float which ever is part in operation
            ans=(bit*y)+ans;
            n=n>>1;
            i++;
        }
        System.out.print("So the number "+t+" binary is="+ans+"\n");
    }
    public static int hamming(int n){
        int count=0;
        while(n>0){
            if((n&1)==1){  //it works n&1 in c++ becuase in c++ it consider it as true or false but in java it consider it as int function which return
                count++;
            }
            n=n>>1;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Enter the number: ");
        n=in.nextInt();
        binary(n);
        int x=hamming(n);
        System.out.print("The number of 1 present in binary of "+n+" is="+x);
    }
}
