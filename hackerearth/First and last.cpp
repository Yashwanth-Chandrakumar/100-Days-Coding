pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>ans;
    ans.first=-1;
    ans.second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            ans.first = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            ans.second = i;
            break;
        }
    }
    return ans;
}
