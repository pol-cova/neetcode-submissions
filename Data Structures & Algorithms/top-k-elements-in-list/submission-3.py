class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
    #    freqs = Counter(nums)
    #    buckets = [[] for i in range(len(nums) + 1)]
    #    res=[]

    #    for n, c in freqs.items():
    #     buckets[c].append(n)

    #    for i in range(len(buckets) - 1, 0, -1):
    #     for n in buckets[i]:
    #         res.append(n)
    #         if len(res) == k:
    #             return res
        from collections import Counter
        import heapq
        counts = Counter(nums)
        heap = []
        for num, freq in counts.items():
            heapq.heappush(heap, (freq, num))
            if len(heap) > k:
                heapq.heappop(heap)
        return [num for freq, num in heap]