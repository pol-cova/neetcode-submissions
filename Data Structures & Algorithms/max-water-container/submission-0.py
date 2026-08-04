class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1
        mx=0
        while l<=r:
            curr = (r - l) * min(heights[l], heights[r])
            mx = max(mx, curr)
            if heights[l] < heights[r]:
                l+=1
            else:
                r-=1
            
        return mx
                