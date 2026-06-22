import heapq as hp
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap = []
        for num in nums:
            if len(heap) < k:
                hp.heappush(heap, num)
            else:
                hp.heappushpop(heap, num)
        return heap[0]