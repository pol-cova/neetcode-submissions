class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        s=len(set(nums))
        l=len(nums)
        return not (s==l)
        