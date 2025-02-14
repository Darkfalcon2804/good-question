//A parity checker is a digital circuit or algorithm used to check the parity of a set of binary data. Parity is a way to detect errors in data transmission or storage.
//Parity property of a binary number that 1s in binary is odd or even
//there is two parity even parity=The number of 1s is even  odd parity= The number of 1s is odd
// how basically it works we ask user for choose parity if user choose even parity so we check if no of 1s is even the parity bit is set 0
//.if odd the parity bit is set to 1 to make total count even

//but if user choose odd parity so we check if number of 1s is odd then parity bit is 0.but if number of 1 is even so parity bit is 1.

package Array;
import java.util.*;
public class ParityCheck {
    public static int count1(int n,int []data){
        int x=0;
        for(int i=0;i<n;i++){
            if(data[i]==1){
                x++;
            }
        }
      return x;
    }
    public static int finalparitybit(int choice,int count){
        if(choice ==1){//even parity
            if(count%2==0){
                return 0;
            }
            else {  // count!=0
                return 1;
            }
        }
        else { // choice===2 odd parity
            if(count%2==0){
                return 1;
            }
            else {  // count!=0
                return 0;
            }
        }

    }
public static void main(String[] args){
    Scanner in=new Scanner(System.in);
    int n;
    System.out.print("Enter the number of data bits: ");
    n=in.nextInt();
    int []data=new int [n];
    System.out.print("Enter "+n+" data bits(0 or 1): ");
    for(int i=0;i<n;i++){
        data[i]=in.nextInt();
    }
    int choice;
    System.out.print("Choose parity type(for even parity 1 and for odd parity 2)=");
    choice=in.nextInt();
    int count=count1(n,data);  //checking number of 1s in data is even or odd
    int paritybit=finalparitybit(choice,count);
    System.out.print("Generated parity bit: "+paritybit+"\n");
System.out.print("Transmitted data: ");
int [] transmitteddata=new int[n+1];
for(int i=0;i<n+1;i++){
    if(i==n){
        transmitteddata[i]=paritybit;
    }
    else transmitteddata[i]=data[i];
}
for(int i=0;i<n+1;i++){
    System.out.print(" "+transmitteddata[i]);
}
System.out.print("\n");
    //cross check verification
    System.out.print("Enter the recieved data bits(including parity bit): ");
    int []receiveddata=new int[n+1];
    for(int i=0;i<=n;i++){
        receiveddata[i]=in.nextInt();
    }
     count=count1(n+1,receiveddata);
    boolean isparitycorrect;
    if(choice==1){
        isparitycorrect=(count%2==0);
    }
    else isparitycorrect=(count%2!=0);
    if(isparitycorrect){
        System.out.print("No error detected");
    }
    else System.out.print("Error detected in recieved data");
in.close();
}
}
