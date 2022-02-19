class Solution:
    def numSubarraysWithSum(self, A: List[int], S: int) -> int:
        def atMost(S):
            if S < 0:
                return 0
            preSum = res = l = 0
            for r in range(len(A)):
                preSum += A[r]
                while preSum > S:
                    preSum -= A[l]
                    l += 1
                res += r - l + 1
            return res
        return atMost(S) - atMost(S - 1)