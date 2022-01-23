class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split(" ")
        res = [] 
        for i in range(len(l) - 1, -1, -1):
            if l[i] != '':
                res.append(l[i])
        return ' '.join(res)           