# Roman_Numerals_Helper

<h1 align="left">Question</h1>

###

<h3 align="left">Write two functions that convert a roman numeral to and from an integer value. Multiple roman numeral values will be tested for each function.<br><br>Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending order: MDCLXVI.<br><br>Input range : 1 <= n < 4000<br><br>4 should be represented as IV, NOT as IIII (the "watchmaker's four").</h3>

###

<h3 align="left">Example:<br><br>To Roman:<br>2000 -> "MM"<br>1666 -> "MDCLXVI"<br>1000 -> "M"<br> 400 -> "CD"<br>  90 -> "XC"<br>  40 -> "XL"<br>   1 -> "I"<br><br>From Roman:<br>"MM"      -> 2000<br>"MDCLXVI" -> 1666<br>"M"       -> 1000<br>"CD"      -> 400<br>"XC"      -> 90<br>"XL"      -> 40<br>"I"       -> 1</h3>

###

<h1 align="left">Intuition (C):</h1>

###

<h3 align="left">The code implement functions for converting Roman numerals to decimal numbers ('from_roman') and vice versa (to_roman). The code utilizes two arrays R and N to store the Roman numeral symbols and their corresponding decimal values. The conversion functions iterate through the input string or the input number and perform the necessary calculations based on the Roman numeral rules.</h3>

###

<h1 align="left">Approach (C):</h1>

###

<h3 align="left">1. from_roman function:<br>- Initialize the result variable ret to 0 and the index i to 0.<br>- While there are characters left in the input roman string:<br>- Check if the current Roman numeral symbol R[i] is present at the current position of the roman string using strstr.<br>- If the symbol is found, add the corresponding decimal value N[i] to the result ret and move the roman pointer forward by the length of the symbol strlen(R[i]).<br>- If the symbol is not found, increment the index i to check the next symbol.<br>- Return the final result ret.<br><br>2. to_roman function:<br>- Initialize the index i to 0 and set the first character of the dest string to null character \0.<br>- While the input number is not zero:<br>- Check if the current Roman numeral value N[i] is less than or equal to the input number.<br>- If it is, append the corresponding Roman numeral symbol R[i] to the dest string using sprintf, and subtract the value N[i] from the input number.<br>If it is not, increment the index i to check the next value.<br>- The dest string will contain the Roman numeral representation of the input number.</h3>

###

<h1 align="left">Complexity (C):</h1>

###

<h3 align="left">Time Complexity:<br><br>from_roman function:<br>The function iterates through the input roman string while searching for the Roman numeral symbols. The strstr function is used to perform the search, which has a complexity of O(n*m), where n is the length of the input roman string and m is the average length of the Roman numeral symbols. As there are a fixed number of symbols in the R array, m can be considered constant.<br>Therefore, the overall time complexity of the from_roman function is O(n), where n is the length of the input string.<br><br>to_roman function:<br>The function iterates through the N array to check the Roman numeral values against the input number. The iteration is performed until the input number becomes zero or until the loop reaches the end of the array, which has a fixed size.<br>Therefore, the overall time complexity of the to_roman function can be considered as O(1), as the number of iterations is constant and independent of the input size.<br><br>Overall: The time complexity of the code is O(n) for the from_roman function and O(1) for the to_roman function.<br><br>Space Complexity:<br><br> Array space: The space complexity for the arrays R and N is O(1) because they have a fixed size and do not depend on the input.<br><br>Input parameter space: The space complexity for the input parameters roman and dest depends on the input size. In the worst case, if the input roman string has a length of n, the space complexity would be O(n) to store the string. The space complexity for the dest string depends on the resulting decimal number, which is typically smaller than the input roman string. Therefore, the space complexity for dest can be considered as O(1).<br><br>Overall. The space complexity of the code is O(1) for the arrays and O(n) for the input roman string, where n is the length of the input string.</h3>

###
