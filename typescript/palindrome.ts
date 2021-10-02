function isPalindrome(s: string) {
    return s == s.split("").reverse().join("");
}

console.log('Is noon a palindrome? ', isPalindrome('noon'))