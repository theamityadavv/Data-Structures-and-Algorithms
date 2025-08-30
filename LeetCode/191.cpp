//Leetcode:191
//Approach 1;
  
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};

//Approach 2;
// class Solution {
// public:
//     int hammingWeight(int n) {
//         int count=0;
//         while(n!=0){
//             if(n%2==1){ // if last bit is 1
//                 count++;
//             }
//          n=n/2;
//         }
//         return count;
//     }
// };