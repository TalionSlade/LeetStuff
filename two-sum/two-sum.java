class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] arr = new int[2];
        int pos =0;
        HashMap<Integer,Integer>  hm = new HashMap<Integer,Integer>();        
        for(int i =0 ; i < nums.length ; i++){
            if(hm.containsKey(target - nums[i])){
                arr[pos++] = hm.get(target - nums[i]);
                arr[pos] = i;
                return arr;
            }else{
                hm.put(nums[i],i);
            }
        }
        return arr;
    }
}