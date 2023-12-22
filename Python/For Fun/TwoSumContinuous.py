class Solution:
    def twosum():
        nums = eval(input("Enter the nums thingy: "))
        target = int(input("Enter the target number: "))
        new_list = []
        for x, y in zip(nums[:-1],nums[1:]):
            if int(x) + int(y) == target:
                new_list.append(nums.index(x))
                new_list.append(nums.index(y))
                break
        print(new_list)

Solution.twosum()