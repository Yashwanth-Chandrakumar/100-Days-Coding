class Solution {
    public String findDifferentBinaryString(String[] nums) {
        int n=nums.length;

        long des = nums[0].length();

        int arr[]=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=Integer.parseInt(nums[i],2);
        }
        
        Arrays.sort(arr);
        int count=0;
        String a="";
        for(int i=0;i<n;i++){
            if(i!=arr[i]){
                a = String.format("%" + des + "s", Integer.toBinaryString(i)).replace(' ', '0');
                break;
            }
            else{
                count++;
            }
        }
        if(count==n){
            a = String.format("%" + des + "s", Integer.toBinaryString(n)).replace(' ', '0');
            
        }
        return a;
    }
}
