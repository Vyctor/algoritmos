/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  let result = [];

  nums.forEach((number, index) => {
    const secondIndex = nums.findIndex(
      (secondNumber) => secondNumber + number === target
    );

    if (
      nums[secondIndex] + nums[index] == target &&
      result.length < 2 &&
      secondIndex !== index
    ) {
      result.push(index);
      result.push(secondIndex);
    }
  });

  return result.sort((a, b) => a - b);
};
