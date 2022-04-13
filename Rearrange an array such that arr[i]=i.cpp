int Rearrange(int arr[],int len){
 for(int i=0;i<n){
   if(arr[i]>=0 && arr[i]!=i){
      arr[arr[i]]=(arr[i]+arr[arr[i]])-(arr[i]=arr[arr[i]]);    
   }
   else{
     i++;
   }
}
