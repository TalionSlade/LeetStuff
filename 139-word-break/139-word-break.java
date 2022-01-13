class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        int n = s.length();
        boolean[] dp = new boolean[n+1];
        dp[0] = true;
        Set<String> wordset = new HashSet(wordDict);
        
        for(int lo = 0 ;lo < n ;lo++ ){
            if(!dp[lo])continue;
            for(int hi = lo+1 ; hi <= n ;hi++){
                String subStr = s.substring(lo,hi);
                if(wordset.contains(subStr)){
                    dp[hi] = true;
                }
            }
        }
        
        return dp[n];
    }
}