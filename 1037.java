import java.io.*;
import java.util.*;
import java.math.*;

public class Main{
    public static void main(String args[]){
        int t;
        Scanner cin = new Scanner(System.in);
        t = cin.nextInt();
        while(t!=0)
        {
            t--;
            int m = cin.nextInt();
            int n = cin.nextInt();
            BigInteger mjie = BigInteger.valueOf(1);
            for(int i = m ; i >= 1 ; i--)
            {
                mjie = mjie.multiply(BigInteger.valueOf(i));
            }
            BigInteger mn = BigInteger.valueOf(1);
            for(int i = 1 ; i <= m-n ; i++){
                mn = mn.multiply(BigInteger.valueOf(i));
            }
            BigInteger njie =BigInteger.valueOf(1);
            for(int i = 1; i <= n ; i++){
                njie = njie.multiply(BigInteger.valueOf(i));
            }
            //System.out.println(njie);
            //System.out.println(mjie);
            //System.out.println(mn);
            mn = mn.multiply(njie);
            mjie = mjie.divide(mn);
            int ans = 0;
            while(mjie.remainder(BigInteger.valueOf(2))== BigInteger.ZERO)
            {
                ans++;
                mjie = mjie.divide(BigInteger.valueOf(2));
            }
                
            System.out.println(ans);
        }
    }
}