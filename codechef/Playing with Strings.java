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
		    int x = sc.nextInt();
	    	sc.nextLine();  
		    String a = sc.nextLine();
		    String b = sc.nextLine();
		    int counta=0;
		    int countb=0;
		    for(int j=0;j<x;j++){
		        if(a.charAt(j)=='1'){
		            counta++;
		        }
		        if(b.charAt(j)=='1'){
		            countb++;
		        }
		    }
		    if(counta!=countb){
		        System.out.println("NO");
		    }
		    else{
		        System.out.println("YES");
		    }
		}
	}
}
