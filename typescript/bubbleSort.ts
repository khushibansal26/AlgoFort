const bubbleSort = (elements: number[]): number[] => {
    const sortedArray = [...elements];
    for (let i = 0; i < sortedArray.length; i++) {
        for (let j = 0; j < sortedArray.length - i - 1; j++) {
            if (sortedArray[j] > sortedArray[j + 1]) {
                const temp = sortedArray[j];
                sortedArray[j] = sortedArray[j + 1];
                sortedArray[j + 1] = temp;
            }
        }
    }
    return sortedArray;
};
  
const elements: number[] = [1, 5, 4, 3, 2];
const sortedArray = bubbleSort(elements);

console.log("Sorted Array: ", sortedArray.join(", "));
  