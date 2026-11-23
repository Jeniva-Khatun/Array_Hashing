int thirdMax(int* nums, int numsSize) {
  
  long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

  for (int i = 0; i < numsSize; i++) {
        long long n = nums[i];

        if (n == first || n == second || n == third) continue;
        if (n > first) {
            third = second;
            second = first;
            first = n;

            } else if (n > second) {
            third = second;
            second = n;

            } else if (n > third) {
            third = n;
        }
    }
        return third == LLONG_MIN ? (int)first : (int)third;



}
