#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1; //place at end of nums1 array
        int j = n-1; //place at end of nums2 array
        int k = m+n-1;
        
        while (i >= 0 && j >= 0 && k >= 0 ){
            
             //Code Trace: These are where the indexes are at
             cout << "Current Pointer Location: ""i=" << i << ", j=" << j
                  << ", k=" << k << endl;
            
            //Code Trace: These are the values in those indexes
            cout << "nums1[i]=" << nums1[i] << ", nums2[j]=" << nums2[j]
                 << ", nums1[k]=" << nums1[k] << endl;    

            if (nums1[i] > nums2[j]){            
                //Code Trace: I wins and goes in place of K!
                cout << "i=" << nums1[i] << " is going into k" << endl;
                nums1[k] = nums1[i];
                i--; //Code Trace: Move down to next i.
                
            }else if (nums1[i] < nums2[j]){
                //Code Trace: J wins and goes in place of K!
                cout << "j=" << nums2[j] << " is going into k" << endl;
                nums1[k] = nums2[j];
                j--; //Code Trace: Move down to next j.
                
            }else{
                nums1[k] = nums1[i];
                //Code Trace: I wins by default and goes in place of K!
                cout << "i=" << nums1[i] << " is going into k" << endl;
                k--;
                if (k > 0){
                    nums1[k] = nums2[j];
                    j--;
                    i--;
                }
            }
            cout << endl;       
            k--;
        }
    }
    
    
    /*
    
            STDOut:
            
            Current Pointer Location: i=2, j=2, k=5
            nums1[i]=3, nums2[j]=6, nums1[k]=0
            j=6 is going into k

            Current Pointer Location: i=2, j=1, k=4
            nums1[i]=3, nums2[j]=5, nums1[k]=0
            j=5 is going into k

            Current Pointer Location: i=2, j=0, k=3
            nums1[i]=3, nums2[j]=2, nums1[k]=0
            i=3 is going into k

            Current Pointer Location: i=1, j=0, k=2
            nums1[i]=2, nums2[j]=2, nums1[k]=3
            i=2 is going into k

    */
};


int main(){
	
	return 0;
}
