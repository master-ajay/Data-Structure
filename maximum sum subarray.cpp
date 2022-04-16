long long maxSubarraySum(int arr[], int n){
        
    long int curr_sum=0;
    long int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        if(curr_sum<0)
            curr_sum=0;
        curr_sum=curr_sum+arr[i];
        if(curr_sum>max_sum)
            max_sum=curr_sum;
    }
    return  max_sum;
    }
