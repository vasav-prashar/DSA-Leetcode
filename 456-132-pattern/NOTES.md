first < third < second and index is => 1<2<3
ex=> [1,3,4,2] 1<2<4
​
***//brute force (n^3)***
for(int i=0;i<nums.size();i++){
for(int j=i+1;j<nums.size();j++){
for(int k=j+1;k<nums.size();k++){
if(nums[i]<nums[k]&&nums[k]<nums[j])
return true;
}
}
}
return false;
***// n^2***
int n=nums.size();
int mini=nums[0];
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(nums[i]>nums[j]&&mini<nums[j])
return true;
mini=min(mini,nums[i]);
}
}
return false;
***stack optimized solution***
similar to next greater element on right
reverse traverse the array first maintaine the 3,2 pattern index is j&k