Answer:


int findMedian(vector<int> arr) {
 int n=arr.size();
 int brr[n];
 for(int i=0;i<n;i++){
 brr[i]=arr[i];
 }
 sort(brr,brr+n);
 return brr[n/2];
}
