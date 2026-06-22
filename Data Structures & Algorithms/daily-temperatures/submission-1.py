class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        res = [0] * n
        st = []
        for i, tmp in enumerate(temperatures):
            while st and temperatures[st[-1]] < tmp:
                prev = st.pop()
                res[prev] = i - prev
            st.append(i)
        return res 