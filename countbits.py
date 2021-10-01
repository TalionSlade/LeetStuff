class Solution:
   def countBits(self, num):
      result = [0] * (num+1)
      offset = 0
      for i in range(1,num+1):
         if i & i-1 == 0:
            result[i] = 1
            offset = 0
         else:
            offset+=1
            result[i] = 1 + result[offset]
      return result
ob1 = Solution()
print(ob1.countBits(6))
