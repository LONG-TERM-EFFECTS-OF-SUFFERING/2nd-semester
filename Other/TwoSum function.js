/**
 * Finds the indices of two numbers in an array that add up to a target value.
 *
 * @param {number[]} array - The array of numbers to search through.
 * @param {number} target - The target sum of two numbers in the array.
 * @returns {(number[]|string)} - An array with the indices of the two numbers that add up to the target, or a string if no such pair exists.
 */

function twoSum(array, target) {
	const differences = { }
	for (let i = 0; i < array.length; i++) {
		const n = array[i]

		if (differences[target - n]) {
			return [differences[target - n].index, i]
		}

		differences[n] = {
			index: i,
		}
	}

	return "No two numbers added together give the target"
}

const input = [5, 3, 1, 10, 4]

console.log(twoSum(input, 9))
