class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        l = 1
        p = [1] * n
        for i in range(n):
            p[i] = l
            l = l * nums[i]
        
        r=1
        for i in range(n-1, -1, -1):
            p[i] = p[i] * r
            r = r * nums[i]
        return p