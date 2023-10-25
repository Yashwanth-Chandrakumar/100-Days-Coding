/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++){
		    String a = sc.next();
		    int ca=0;
		    int cb=0;
		    for(int j=0;j<a.length();j++){
		        if(a.charAt(j)=='1'){
		            ca++;
		        }
		        else{
		            cb++;
		        }
		      }
		    if(ca>cb){
		        System.out.println("WIN");
		    }
		    else{
		        System.out.println("LOSE");
		        
		    }
		}
	}
}
