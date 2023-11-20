class Solution {
    public int garbageCollection(String[] garbage, int[] travel) {
        int ans=0;
        int n=garbage.length;
          for(int i=0;i<travel.length;i++){
              ans+=3*travel[i];
          }
          for(int i=0;i<garbage.length;i++){
              ans+=garbage[i].length();
          }
        for(int i=n-1;i>0;i--){
            if(!garbage[i].contains("G")){
                ans-=travel[i-1];
            }
            else{
                break;
            }
        }
        for(int i=n-1;i>0;i--){
            if(!garbage[i].contains("P")){
                ans-=travel[i-1];
            }
            else{
                break;
            }
        }
        for(int i=n-1;i>0;i--){
            if(!garbage[i].contains("M")){
                ans-=travel[i-1];
            }
            else{
                break;
            }
        }
        return ans;
    }
}
