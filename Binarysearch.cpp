Binary search:
int binarySearch(int *a, int n, int x)
{
    int start=0;
    int end=n-1;
 while(start<=end){
     int mid=(start+end)/2;
     if(a[mid]==x){
         return mid;
     }
     else if(x>a[mid]){
         start=mid+1;
     }
     else
     end=mid-1;
 }
 return -1;   
}
