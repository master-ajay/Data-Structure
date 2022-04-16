class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int arr[],int num){
        
        int curr_sum=arr[0];
        int max_sum=arr[0];
        
        for(int i=1;i<num;i++){
            curr_sum=max(arr[i],curr_sum+arr[i]);
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
    }
    int circularSubarraySum(int arr[], int num){
        
         int nowrapsum=kadane(arr,num);
        
        int sum=0;
        for(int i=0;i<num;i++){
            sum=sum+arr[i];
            arr[i]=-arr[i];
        }
        
        int wrapsum=sum+kadane(arr,num);
        if(nowrapsum<0)
            return min(wrapsum,nowrapsum);
        return max(wrapsum,nowrapsum);
    }
};
