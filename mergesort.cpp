 void merge(vector<int>& arr,int l,int mid,int r){
        int n1 = mid-l+1;
        int n2 = r-mid;
        vector<int>left(n1);
        vector<int>right(n2);
        for(int i = 0;i< n1;++i){
            left[i] = arr[l+i];
        }
        for(int i = 0;i< n2;++i){
            right[i] = arr[mid+i+1];
        }
        // merge
        int i = 0;
        int j = 0;
        int k = l;
       
         while(i < n1 && j < n2){
            if(left[i] <= right[j]){
                arr[k] = left[i++]; 
            }else{
                arr[k] = right[j++];
            }
            ++k;
        }
         while(i < n1 ){
           
            arr[k] = left[i++]; 
            k++;
        }
         while(j < n2){
          
            arr[k] = right[j++];
            ++k;
        }
        
    }
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l >= r) return ;
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
        
        
    }