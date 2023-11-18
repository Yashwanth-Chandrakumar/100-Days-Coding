vector<int> iterateTillZ(int x, int y, int z) {
    vector<int>ans;
    for(int i=1;i<=z;i++){
        if(i%x==y){
            ans.push_back(i);
        }
    }
    return ans;
}
