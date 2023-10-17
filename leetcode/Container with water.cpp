You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1

Answer:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=height[i];
        }
        int left=0;
        int right=n-1;
        int maxx = 0;
        while(left<right){
            int cur = min(arr[left],arr[right])*(right - left);
            maxx = max(maxx,cur);

            if(arr[left]<arr[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxx;
    }
};
