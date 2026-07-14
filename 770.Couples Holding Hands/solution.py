class Solution:
    def minSwapsCouples(self, row: List[int]) -> int:
        n = len(row)
        pos = [0] * n

        for i, person in enumerate(row):
            pos[person] = i

        swaps = 0

        for i in range(0, n, 2):
            first = row[i]
            partner = first ^ 1   # toggles between 2k and 2k+1

            if row[i + 1] != partner:
                j = pos[partner]

                row[i + 1], row[j] = row[j], row[i + 1]

                pos[row[i + 1]] = i + 1
                pos[row[j]] = j

                swaps += 1

        return swaps