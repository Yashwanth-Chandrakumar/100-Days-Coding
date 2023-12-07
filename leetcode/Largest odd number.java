class Solution {
    public String largestOddNumber(String num) {
        if(Integer.parseInt(String.valueOf(num.charAt(num.length()-1)))%2!=0){
            return num;
        }
        int x = num.length()-1;
        while(x>=0){
            int n = num.charAt(x);
            if(n%2!=0){
                return num.substring(0,x+1);
            }
            x--;
        }
        return "";
    }
}
