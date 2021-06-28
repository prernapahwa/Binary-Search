// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //have to find first bad index;
        int index;
        int left=1,right=n;
        int mid;
        while(left<=right) {
            mid=left+(right-left)/2;
            if(isBadVersion(mid)==true&&isBadVersion(mid-1)==false) {
                return mid;
            }
            if(isBadVersion(mid)==true) {
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }
        return 0;
    }
};
