import java.util.* ;
import java.io.*; 

public class Solution {

	public static boolean isValidIPv4(String ipAddress) {
		// write your code here
		String[]str = ipAddress.split("\\.");
		int count = 0;
		if(str.length!=4)
		return false;
		else{
			for(int i=0;i<str.length;i++){
				try{
					int res=Integer.parseInt(str[i]);
					if(res>=0 && res<=255)
					count+=1;
				}
				catch(NumberFormatException e)
				{
					return false;
				}
			}
		}
	return count==4;
	}

}
