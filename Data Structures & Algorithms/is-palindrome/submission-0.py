class Solution:
    def isPalindrome(self, s: str) -> bool:
        ss = "".join(char for char in s if char.isalnum())
        ss = ss.lower()
        l, r = 0, len(ss)-1
        while(l < r):
            if ss[l] != ss[r]:
                return False
            l+=1
            r-=1
        return True