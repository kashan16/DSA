function binarySearch(nums : number[] , start : number , end : number , k : number)
{
    if(start > end)
    {
        return -1;
    }
    const mid = start + Math.floor((end - start)/2);
    if(k === nums[mid])
    {
        return mid;
    }
    else if(k < nums[mid])
    {
        return binarySearch(nums,start,mid-1,k);
    }
    else return binarySearch(nums,mid+1,end,k);
};
function search(nums: number[], target: number): number 
{
    let ans = binarySearch(nums,0,nums.length - 1,target);
    return ans;
};