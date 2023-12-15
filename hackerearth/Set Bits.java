import java.util.* ;
import java.io.*; 
public class Solution {
	public static int countSetBits(int n) {
		String s = Integer.toBinaryString(n);
		int cnt=0;
		for(int i=0;i<s.length();i++){
			if(s.charAt(i)=='1'){
				cnt++;
			}
		}
		return cnt;
	}
}
