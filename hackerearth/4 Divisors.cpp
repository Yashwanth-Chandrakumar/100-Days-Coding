int sumFourDivisors(vector<int> &arr, int n)
{
    // Write your code here.
    int res = 0;
    for(int num: arr) {
        int cnt = 0;
        int sum = 0;

        for(int i=1; i<=num; ++i) {
            if(num%i==0) {
                cnt++;
                sum += i;
            }

            if(cnt>4) {
                break;
            }
        }
        if(cnt==4) {
            res += sum;
        }
    }
    return res;
}
