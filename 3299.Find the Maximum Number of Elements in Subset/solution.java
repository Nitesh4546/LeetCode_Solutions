class Solution {
    public int maximumLength(int[] nums) {

        HashMap<Integer, Integer> hs = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            hs.put(nums[i], hs.getOrDefault(nums[i], 0) + 1);
        }

        int count = 1;

        // Handle 1 separately
        if (hs.containsKey(1)) {
            int one = hs.get(1);
            count = Math.max(count, (one % 2 == 0) ? one - 1 : one);
        }

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 1) {
                int curr = 1;
                int prev = nums[i];
                int num = nums[i];

                while (hs.containsKey((int) Math.pow(num, 2))) {
                    if (hs.get(prev) >= 2) {
                        curr += 2;
                        prev = (int) Math.pow(num, 2);
                        num = num * num;
                    } else {
                        break;
                    }
                }

                count = Math.max(curr, count);
            }
        }

        return count;

    }
}