﻿#pragma once
#ifndef LeetcodeMath_H
#define LeetCodeMath_H
#include <stdint.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm> 
#include <functional> 
#include <bitset> 
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map> 
#include <unordered_set> 
#include <vector> 
#include <stack> 
using namespace std;
/// <summary>
/// The class is to implement some math solution 
/// </summary>
class LeetCodeMath
{
public:
    /// <summary>
    /// Leet code #6. ZigZag Conversion
    /// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
    ///  P   A   H   N
    ///  A P L S I I G
    ///  Y   I   R
    ///  And then read line by line : "PAHNAPLSIIGYIR"
    ///  Write the code that will take a string and make this conversion given a number of rows :
    /// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
    /// </summary>
    string convertZigZag(string s, int numRows);

    /// <summary>
    /// Leet code #7. Reverse Integer
    /// 
    /// Given a 32-bit signed integer, reverse digits of an integer.
    /// Example 1:
    /// Input: 123
    /// Output: 321
    ///
    /// Example 2:
    /// Input: -123
    /// Output: -321
    ///
    /// Example 3:
    /// Input: 120
    /// Output: 21
    /// Note:
    /// Assume we are dealing with an environment which could only store integers 
    /// within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose 
    /// of this problem, assume that your function returns 0 when the reversed 
    /// integer overflows.
    /// </summary>
    int reverse(int x);

    /// <summary>
    /// Leet code #8. String to Integer (atoi)
    /// 
    /// Implement atoi which converts a string to an integer.
    /// The function first discards as many whitespace characters as necessary 
    /// until the first non-whitespace character is found. Then, starting from 
    /// this character, takes an optional initial plus or minus sign followed 
    /// by as many numerical digits as possible, and interprets them as a 
    /// numerical value.
    /// The string can contain additional characters after those that form the 
    /// integral number, which are ignored and have no effect on the behavior of 
    /// this function.
    /// If the first sequence of non-whitespace characters in str is not a valid 
    /// integral number, or if no such sequence exists because either str is 
    /// empty or it contains only whitespace characters, no conversion is 
    /// performed.
    /// If no valid conversion could be performed, a zero value is returned.
    /// Note:
    /// Only the space character ' ' is considered as whitespace character.
    /// Assume we are dealing with an environment which could only store integers 
    /// within the 32-bit signed integer range: [−2^31,  2^31 − 1]. If the  
    /// numerical value is out of the range of representable values, 
    /// INT_MAX (2^31 − 1) or INT_MIN (−2^31) is returned.
    /// Example 1:
    /// Input: "42"
    /// Output: 42
    ///
    /// Example 2:
    /// Input: "   -42"
    /// Output: -42
    /// Explanation: The first non-whitespace character is '-', which is the minus 
    /// sign. Then take as many numerical digits as possible, which gets 42.
    ///
    /// Example 3:
    /// Input: "4193 with words"
    /// Output: 4193
    /// Explanation: Conversion stops at digit '3' as the next character is not a 
    /// numerical digit.
    ///
    /// Example 4:
    /// Input: "words and 987"
    /// Output: 0
    /// Explanation: The first non-whitespace character is 'w', which is not a 
    /// numerical digit or a +/- sign. Therefore no valid conversion could be 
    /// performed.
    ///
    /// Example 5:
    /// Input: "-91283472332"
    /// Output: -2147483648
    /// Explanation: The number "-91283472332" is out of the range of a 32-bit 
    /// signed integer. Thefore INT_MIN (−231) is returned.
    /// </summary>
    int myAtoi(string str);

    /// <summary>
    /// Leet code #9. Palindrome Number
    /// Determine whether an integer is a palindrome. Do this without extra space.
    /// </summary>
    bool isPalindrome(int x);

    /// <summary>
    /// Leet code #396. Rotate Function 
    ///
    /// Given an array of integers A and let n to be its length. 
    /// Assume Bk to be an array obtained by rotating the array A k positions clock-wise, 
    /// we define a "rotation function" F on A as follow:
    /// F(k) = 0 * Bk[0] + 1 * Bk[1] + ... + (n-1) * Bk[n-1].
    /// Calculate the maximum value of F(0), F(1), ..., F(n-1).
    /// Note:
    ///
    /// Example:
    ///
    /// A = [4, 3, 2, 6]
    /// F(0) = (0 * 4) + (1 * 3) + (2 * 2) + (3 * 6) = 0 + 3 + 4 + 18 = 25
    ///	F(1) = (0 * 6) + (1 * 4) + (2 * 3) + (3 * 2) = 0 + 4 + 6 + 6 = 16
    /// F(2) = (0 * 2) + (1 * 6) + (2 * 4) + (3 * 3) = 0 + 6 + 8 + 9 = 23
    /// F(3) = (0 * 3) + (1 * 2) + (2 * 6) + (3 * 4) = 0 + 2 + 12 + 12 = 26
    /// So the maximum value of F(0), F(1), F(2), F(3) is F(3) = 26.
    /// </summary>
    int maxRotateFunction(vector<int>& A);

    /// <summary>
    /// Leet code #455. Assign Cookies 
    ///
    /// Assume you are an awesome parent and want to give your children some 
    /// cookies. But, you should give each child at most one cookie. Each 
    //// child i has a greed factor gi, which is the minimum size of a 
    /// cookie that the child will be content with; and each cookie j 
    /// has a size sj. If sj >= gi, we can assign the cookie j to the child i, 
    /// and the child i will be content. Your goal is to maximize the number 
    /// of your content children and output the maximum number. 
    /// Note:
    /// You may assume the greed factor is always positive. 
    /// You cannot assign more than one cookie to one child. 
    ///
    /// Example 1:
    /// Input: [1,2,3], [1,1]
    /// Output: 1
    /// Explanation: You have 3 children and 2 cookies. The greed factors 
    /// of 3 children are 1, 2, 3. 
    /// And even though you have 2 cookies, since their size is both 1, you 
    /// could only make the child whose greed factor is 1 content.
    /// You need to output 1.
    ///
    /// Example 2:
    /// Input: [1,2], [1,2,3]
    /// Output: 2
    /// Explanation: You have 2 children and 3 cookies. The greed factors of 2 
    /// children are 1, 2. 
    /// You have 3 cookies and their sizes are big enough to gratify all of 
    /// the children, 
    /// You need to output 2.
    /// </summary>
    int findContentChildren(vector<int>& g, vector<int>& s);

    /// <summary>
    /// Leet code #507. Perfect Number          
    /// 
    /// We define the Perfect Number is a positive integer that is equal to the 
    /// sum of all its positive divisors except itself. 
    /// Now, given an integer n, write a function that returns true when it is a 
    /// perfect number and false when it is not. 
    ///
    /// Example:
    ///
    /// Input: 28
    /// Output: True
    /// Explanation: 28 = 1 + 2 + 4 + 7 + 14
    /// </summary>
    bool checkPerfectNumber(int num);

    /// <summary>
    /// Leet code #537. Complex Number Multiplication       
    /// </summary>
    void parseComplexNumber(string str, pair<int, int>& complex);

    /// <summary>
    /// Leet code #537. Complex Number Multiplication       
    /// 
    /// Given two strings representing two complex numbers. 
    /// You need to return a string representing their multiplication. 
    /// Note i^2 = -1 according to the definition.
    ///
    /// Example 1:
    /// Input: "1+1i", "1+1i"
    /// Output: "0+2i"
    /// Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need 
    /// convert it to the form of 0+2i.
    /// Example 2:
    /// Input: "1+-1i", "1+-1i"
    /// Output: "0+-2i"
    /// Explanation: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need 
    /// convert it to the form of 0+-2i.
    /// Note:
    ///
    /// The input strings will not have extra blank.
    /// The input strings will be given in the form of a+bi, where the integer 
    /// a and b will both belong to the range of [-100, 100]. And the output 
    /// should be also in this form.	 
    /// </summary>
    string complexNumberMultiply(string a, string b);

    /// <summary>
    /// Leet code #564. Find the Closest Palindrome          
    /// 
    /// Given an integer n, find the closest integer (not including itself), which 
    /// is a palindrome. 
    /// The 'closest' is defined as absolute difference minimized between two 
    /// integers.
    /// Example 1:
    /// Input: "123"
    /// Output: "121"
    /// Note:
    /// 1.The input n is a positive integer represented by string, whose length will not exceed 18.
    /// 2.If there is a tie, return the smaller one as answer.
    /// </summary>
    string nearestPalindromic(string n);

    /// <summary>
    /// Leet code #592. Fraction Addition and Subtraction
    /// </summary>
    long long gcd(long long a, long long b);

    /// <summary>
    /// Leet code #592. Fraction Addition and Subtraction
    /// </summary>
    void parseFraction(string& expression, int& index, int& numerator, int& denominator);

    /// <summary>
    /// Leet code #592. Fraction Addition and Subtraction
    /// </summary>
    void addFraction(int n_a, int d_a, int n_b, int d_b, int& numerator, int& denominator);

    /// <summary>
    /// Leet code #592. Fraction Addition and Subtraction
    /// 
    /// Given a string representing an expression of fraction addition and 
    /// subtraction, you need to return the calculation result in string format. 
    /// The final result should be irreducible fraction. If your final result is 
    /// an integer, say 2, you need to change it to the format of fraction that 
    /// has denominator 1. So in this case, 2 should be converted to 2/1.
    /// Example 1:
    /// Input:"-1/2+1/2"
    /// Output: "0/1"
    /// 
    /// Example 2:
    /// Input:"-1/2+1/2+1/3"
    /// Output: "1/3"
    /// 
    /// Example 3:
    /// Input:"1/3-1/2"
    /// Output: "-1/6"
    ///
    /// Example 4:
    /// Input:"5/3+1/3"
    /// Output: "2/1"
    ///
    /// Note:
    /// 1.The input string only contains '0' to '9', '/', '+' and '-'. So does the 
    ///   output.
    /// 2. Each fraction (input and output) has format ±numerator/denominator. If 
    ///    the first input fraction or the output is positive, then '+' will be 
    ///    omitted.
    /// 3. The input only contains valid irreducible fractions, where the numerator
    ///    and denominator of each fraction will always be in the range [1,10]. If 
    ///    the denominator is 1, it means this fraction is actually an integer in a 
    ///    fraction format defined above.
    /// 4. The number of given fractions will be in the range [1,10].
    /// 5. The numerator and denominator of the final result are guaranteed to be 
    ///    valid and in the range of 32-bit int.
    /// </summary>
    string fractionAddition(string expression);

    /// <summary>
    /// Leet code #672. Bulb Switcher II 
    /// 
    /// There is a room with n lights which are turned on initially and 4 
    /// buttons on the wall. After performing exactly m unknown operations 
    /// towards buttons, you need to return how many different kinds of 
    /// status of the n lights could be.
    ///
    /// Suppose n lights are labeled as number [1, 2, 3 ..., n], function of 
    /// these 4 buttons are given below:
    ///
    /// Flip all the lights.
    /// Flip lights with even numbers.
    /// Flip lights with odd numbers.
    /// Flip lights with (3k + 1) numbers, k = 0, 1, 2, ...
    ///
    /// Example 1:
    /// Input: n = 1, m = 1.
    /// Output: 2
    /// Explanation: Status can be: [on], [off]
    ///
    /// Example 2:
    /// Input: n = 2, m = 1.
    /// Output: 3
    /// Explanation: Status can be: [on, off], [off, on], [off, off]
    ///
    /// Example 3:
    /// Input: n = 3, m = 1.
    /// Output: 4
    /// Explanation: Status can be: [off, on, off], [on, off, on], 
    /// [off, off, off], [off, on, on].
    /// Note: n and m both fit in range [0, 1000].
    /// </summary>
    int flipLights(int n, int m);

    /// <summary>
    /// Leet code #780. Reaching Points
    ///
    /// A move consists of taking a point (x, y) and transforming it to either
    /// (x, x+y) or (x+y, y).
    ///
    /// Given a starting point (sx, sy) and a target point (tx, ty), return 
    /// True if and only if a sequence of moves exists to transform the point 
    /// (sx, sy) to (tx, ty). Otherwise, return False.
    ///
    /// Examples:
    /// Input: sx = 1, sy = 1, tx = 3, ty = 5
    /// Output: True
    /// Explanation:
    /// One series of moves that transforms the starting point to the target is:
    /// (1, 1) -> (1, 2)
    /// (1, 2) -> (3, 2)
    /// (3, 2) -> (3, 5)
    ///
    /// Input: sx = 1, sy = 1, tx = 2, ty = 2
    /// Output: False
    ///
    /// Input: sx = 1, sy = 1, tx = 1, ty = 1
    /// Output: True
    ///
    /// Note:
    ///
    /// sx, sy, tx, ty will all be integers in the range [1, 10^9].
    /// </summary>
    bool reachingPoints(int sx, int sy, int tx, int ty);

    /// <summary>
    /// Leet code #878. Nth Magical Number
    /// 
    /// A positive integer is magical if it is divisible by either A or B.
    ///
    /// Return the N-th magical number.  Since the answer may be very large, 
    /// return it modulo 10^9 + 7.
    ///
    /// Example 1:
    /// Input: N = 1, A = 2, B = 3
    /// Output: 2
    ///
    /// Example 2:
    /// Input: N = 4, A = 2, B = 3
    /// Output: 6
    ///
    /// Example 3:
    /// Input: N = 5, A = 2, B = 4
    /// Output: 10
    ///
    /// Example 4:
    /// Input: N = 3, A = 6, B = 4
    /// Output: 8
    ///
    /// Note:
    /// 1. 1 <= N <= 10^9
    /// 2. 2 <= A <= 40000
    /// 3. 2 <= B <= 40000
    /// </summary>
    int nthMagicalNumber(int N, int A, int B);

    /// <summary>
    /// Leet code #914. X of a Kind in a Deck of Cards
    /// 
    /// In a deck of cards, each card has an integer written on it.
    ///
    /// Return true if and only if you can choose X >= 2 such that it is possible 
    /// to split the entire deck into 1 or more groups of cards, where:
    ///
    /// Each group has exactly X cards.
    /// All the cards in each group have the same integer.
    /// 
    /// Example 1:
    ///
    /// Input: [1,2,3,4,4,3,2,1]
    /// Output: true
    /// Explanation: Possible partition [1,1],[2,2],[3,3],[4,4]
    ///
    /// Example 2:
    ///
    /// Input: [1,1,1,2,2,2,3,3]
    /// Output: false
    /// Explanation: No possible partition.
    ///
    /// Example 3:
    ///
    /// Input: [1]
    /// Output: false
    /// Explanation: No possible partition.
    ///
    /// Example 4:
    ///
    /// Input: [1,1]
    /// Output: true
    /// Explanation: Possible partition [1,1]
    ///
    /// Example 5:
    ///
    /// Input: [1,1,2,2,2,2]
    /// Output: true
    /// Explanation: Possible partition [1,1],[2,2],[2,2]
    ///
    /// Note:
    ///
    /// 1. 1 <= deck.length <= 10000
    /// 2. 0 <= deck[i] < 10000
    /// </summary>
    bool hasGroupsSizeX(vector<int>& deck);

    /// <summary>
    /// Leet code #1118. Number of Days in a Month
    /// 
    /// Given a year Y and a month M, return how many days there are in that month.
    /// 
    /// Example 1:
    /// Input: Y = 1992, M = 7
    /// Output: 31
    ///
    /// Example 2:
    /// Input: Y = 2000, M = 2
    /// Output: 29
    /// Example 3:
    ///
    /// Input: Y = 1900, M = 2
    /// Output: 28
    /// 
    /// Note:
    /// 1. 1583 <= Y <= 2100
    /// 2. 1 <= M <= 12
    /// </summary>
    int numberOfDays(int Y, int M);

    /// <summary>
    /// Leet code #1131. Maximum of Absolute Value Expression
    /// 
    /// Given two arrays of integers with equal lengths, return the maximum 
    /// value of:
    ///
    /// |arr1[i] - arr1[j]| + |arr2[i] - arr2[j]| + |i - j|
    ///
    /// where the maximum is taken over all 0 <= i, j < arr1.length.
    /// 
    ///  
    /// Example 1:
    /// Input: arr1 = [1,2,3,4], arr2 = [-1,4,5,6]
    /// Output: 13
    ///
    /// Example 2:
    /// Input: arr1 = [1,-2,-5,0,10], arr2 = [0,-2,-1,-7,-4]
    /// Output: 20
    /// 
    /// Constraints:
    /// 1. 2 <= arr1.length == arr2.length <= 40000
    /// 2. -10^6 <= arr1[i], arr2[i] <= 10^6
    /// </summary>
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2);

    /// <summary>
    /// Leet code #1137. N-th Tribonacci Number
    /// 
    /// The Tribonacci sequence Tn is defined as follows: 
    ///
    /// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
    ///
    /// Given n, return the value of Tn.
    /// 
    /// Example 1:
    ///
    /// Input: n = 4
    /// Output: 4
    /// Explanation:
    /// T_3 = 0 + 1 + 1 = 2
    /// T_4 = 1 + 1 + 2 = 4
    ///
    /// Example 2:
    ///
    /// Input: n = 25
    /// Output: 1389537
    /// Constraints:
    /// 1. 0 <= n <= 37
    /// 2. The answer is guaranteed to fit within a 32-bit integer, 
    ///    ie. answer <= 2^31 - 1.
    /// </summary>
    int tribonacci(int n);

    /// <summary>
    /// Leet code #1134. Armstrong Number
    /// 
    /// The k-digit number N is an Armstrong number if and only if the k-th 
    /// power of each digit sums to N.
    ///
    /// Given a positive integer N, return true if and only if it is an 
    /// Armstrong number.
    ///
    /// Example 1:
    /// Input: 153
    /// Output: true
    /// Explanation: 
    /// 153 is a 3-digit number, and 153 = 1^3 + 5^3 + 3^3.
    ///
    /// Example 2:
    /// Input: 123
    /// Output: false
    /// Explanation: 
    /// 123 is a 3-digit number, and 123 != 1^3 + 2^3 + 3^3 = 36.
    /// 
    /// Note:
    /// 1. 1 <= N <= 10^8
    /// </summary>
    bool isArmstrong(int N);

    /// <summary>
    /// Leet code #1144. Decrease Elements To Make Array Zigzag
    /// 
    /// Given an array nums of integers, a move consists of choosing any 
    /// element and decreasing it by 1.
    ///
    /// An array A is a zigzag array if either:
    ///
    /// Every even-indexed element is greater than adjacent elements, 
    /// ie. A[0] > A[1] < A[2] > A[3] < A[4] > ... OR, every odd-indexed 
    /// element is greater than adjacent elements, ie. 
    /// A[0] < A[1] > A[2] < A[3] > A[4] < ...
    /// Return the minimum number of moves to transform the given array 
    /// nums into a zigzag array.
    ///
    /// Example 1:
    ///
    /// Input: nums = [1,2,3]
    /// Output: 2
    /// Explanation: We can decrease 2 to 0 or 3 to 1.
    ///
    /// Example 2:
    /// 
    /// Input: nums = [9,6,1,6,2]
    /// Output: 4
    /// 
    /// Constraints:
    /// 1. 1 <= nums.length <= 1000
    /// 2. 1 <= nums[i] <= 1000
    /// </summary>
    int movesToMakeZigzag(vector<int>& nums);

    /// <summary>
    /// Leet code #1154. Day of the Year
    /// 
    /// Given a string date representing a Gregorian calendar date formatted 
    /// as YYYY-MM-DD, return the day number of the year.
    /// Example 1:
    /// Input: date = "2019-01-09"
    /// Output: 9
    /// Explanation: Given date is the 9th day of the year in 2019.
    ///
    /// Example 2:
    /// Input: date = "2019-02-10"
    /// Output: 41
    ///
    /// Example 3:
    /// Input: date = "2003-03-01"
    /// Output: 60
    ///
    /// Example 4:
    /// Input: date = "2004-03-01"
    /// Output: 61
    ///  
    /// Constraints:
    /// 1. date.length == 10
    /// 2. date[4] == date[7] == '-', and all other date[i]'s are digits
    /// 3. date represents a calendar date between Jan 1st, 1900 and Dec 31, 2019.
    /// </summary>
    int dayOfYear(string date);

    /// <summary>
    /// Leet code #553. Optimal Division
    /// 
    /// Given a list of positive integers, the adjacent integers will perform 
    /// the float division. For example, [2,3,4] -> 2 / 3 / 4.
    /// However, you can add any number of parenthesis at any position to 
    /// change the priority of operations. You should find out how to add 
    /// parenthesis to get the maximum result, and return the corresponding 
    /// expression in string format. Your expression should NOT contain 
    /// redundant parenthesis.
    /// Example:
    /// Input: [1000,100,10,2]
    /// Output: "1000/(100/10/2)"
    /// Explanation:
    /// 1000/(100/10/2) = 1000/((100/10)/2) = 200
    /// However, the bold parenthesis in "1000/((100/10)/2)" are redundant, 
    /// since they don't influence the operation priority. So you should return 
    /// "1000/(100/10/2)". 
    ///
    /// Other cases:
    /// 1000/(100/10)/2 = 50
    /// 1000/(100/(10/2)) = 50
    /// 1000/100/10/2 = 0.5
    /// 1000/100/(10/2) = 2
    /// Note: 
    /// 1. The length of the input array is [1, 10].
    /// 2. Elements in the given array will be in range [2, 1000].
    /// 3. There is only one optimal division for each test case.
    /// </summary>
    string optimalDivision(vector<int>& nums);

    /// <summary>
    /// Leet code #1175. Prime Arrangements
    /// 
    /// Return the number of permutations of 1 to n so that prime numbers are 
    /// at prime indices (1-indexed.)
    /// (Recall that an integer is prime if and only if it is greater than 1, 
    /// and cannot be written as a product of two positive integers both 
    /// smaller than it.)
    /// Since the answer may be large, return the answer modulo 10^9 + 7.
    /// 
    /// Example 1:
    /// Input: n = 5
    /// Output: 12
    /// Explanation: For example [1,2,5,4,3] is a valid permutation, but 
    /// [5,2,3,4,1] is not because the prime number 5 is at index 1.
    ///
    /// Example 2:
    /// Input: n = 100
    /// Output: 682289015
    /// 
    /// Constraints:
    /// 1. 1 <= n <= 100
    /// </summary>
    int numPrimeArrangements(int n);

    /// <summary>
    /// Leet code #1185. Day of the Week
    /// 
    /// Given a date, return the corresponding day of the week for that date.
    /// The input is given as three integers representing the day, month and 
    /// year respectively.
    /// Return the answer as one of the following values {"Sunday", "Monday", 
    /// "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}.
    /// 
    /// Example 1:
    /// Input: day = 31, month = 8, year = 2019
    /// Output: "Saturday"
    ///
    /// Example 2:
    /// Input: day = 18, month = 7, year = 1999
    /// Output: "Sunday"
    ///
    /// Example 3:
    /// Input: day = 15, month = 8, year = 1993
    /// Output: "Sunday"
    /// 
    /// Constraints:
    /// The given dates are valid dates between the years 1971 and 2100.
    /// </summary>
    string dayOfTheWeek(int day, int month, int year);

    /// <summary>
    /// Leet code #1201. Ugly Number III
    /// 
    /// Write a program to find the n-th ugly number.
    /// Ugly numbers are positive integers which are divisible by a or b or c.
    /// 
    /// Example 1:
    /// Input: n = 3, a = 2, b = 3, c = 5
    /// Output: 4
    /// Explanation: The ugly numbers are 2, 3, 4, 5, 6, 8, 9, 10... The 3rd is 4.
    /// Example 2:
    /// Input: n = 4, a = 2, b = 3, c = 4
    /// Output: 6
    /// Explanation: The ugly numbers are 2, 3, 4, 6, 8, 9, 10, 12... The 4th is 6.
    /// Example 3:
    /// Input: n = 5, a = 2, b = 11, c = 13
    /// Output: 10
    /// Explanation: The ugly numbers are 2, 4, 6, 8, 10, 11, 12, 13... The 5th 
    /// is 10.
    /// Example 4:
    /// Input: n = 1000000000, a = 2, b = 217983653, c = 336916467
    /// Output: 1999999984
    /// 
    /// Constraints:
    /// 1. 1 <= n, a, b, c <= 10^9
    /// 2. 1 <= a * b * c <= 10^18
    /// 3. It's guaranteed that the result will be in range [1, 2 * 10^9]
    /// </summary>
    int nthUglyNumber(int n, int a, int b, int c);

    /// <summary>
    /// Leet code #1217. Play with Chips      
    ///
    /// There are some chips, and the i-th chip is at position chips[i].
    /// You can perform any of the two following types of moves any number of 
    /// times (possibly zero) on any chip:
    /// Move the i-th chip by 2 units to the left or to the right with a cost of 0.
    /// Move the i-th chip by 1 unit to the left or to the right with a cost of 1.
    /// There can be two or more chips at the same position initially.
    /// Return the minimum cost needed to move all the chips to the same position 
    /// (any position).
    /// 
    /// Example 1:
    /// Input: chips = [1,2,3]
    /// Output: 1
    /// Explanation: Second chip will be moved to positon 3 with cost 1. First 
    /// chip will be moved to position 3 with cost 0. Total cost is 1.
    /// Example 2:
    /// Input: chips = [2,2,2,3,3]
    /// Output: 2
    /// Explanation: Both fourth and fifth chip will be moved to position two 
    /// with cost 1. Total minimum cost will be 2.
    /// 
    /// Constraints:
    /// 1. 1 <= chips.length <= 100
    /// 2. 1 <= chips[i] <= 10^9
    /// </summary>
    int minCostToMoveChips(vector<int>& chips);

    /// <summary>
    /// Leet code #1227. Airplane Seat Assignment Probability
    /// 
    /// n passengers board an airplane with exactly n seats. The first 
    /// passenger has lost the ticket and picks a seat randomly. But 
    /// after that, the rest of passengers will:
    ///
    /// Take their own seat if it is still available, 
    /// Pick other seats randomly when they find their seat occupied 
    /// What is the probability that the n-th person can get his own seat?
    ///
    /// Example 1:
    /// Input: n = 1
    /// Output: 1.00000
    /// Explanation: The first person can only get the first seat.
    ///
    /// Example 2:
    /// Input: n = 2
    /// Output: 0.50000
    /// Explanation: The second person has a probability of 0.5 to get the 
    /// second seat (when first person gets the first seat).
    /// 
    /// 1. Constraints:
    /// 2. 1 <= n <= 10^5
    /// </summary>
    double nthPersonGetsNthSeat(int n);

    /// <summary>
    /// Leet code #1232. Check If It Is a Straight Line
    /// 
    /// You are given an array coordinates, coordinates[i] = [x, y], where 
    /// [x, y] represents the coordinate of a point. Check if these points 
    /// make a straight line in the XY plane.
    /// 
    /// Example 1:
    /// Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
    /// Output: true
    ///
    /// Example 2:
    /// Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
    /// Output: false
    /// 
    /// Constraints:
    /// 1. 2 <= coordinates.length <= 1000
    /// 2. coordinates[i].length == 2
    /// 3. -10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
    /// 4. coordinates contains no duplicate point.
    /// </summary>
    bool checkStraightLine(vector<vector<int>>& coordinates);

    /// <summary>
    /// Leet code #1250. Check If It Is a Good Array
    ///  
    /// Given an array nums of positive integers. Your task is to select some 
    /// subset of nums, multiply each element by an integer and add all these 
    /// numbers. The array is said to be good if you can obtain a sum of 1 from 
    /// the array by any possible subset and multiplicand.
    ///
    /// Return True if the array is good otherwise return False.
    ///
    /// Example 1:
    ///
    /// Input: nums = [12,5,7,23]
    /// Output: true
    /// Explanation: Pick numbers 5 and 7.
    /// 5*3 + 7*(-2) = 1
    ///
    /// Example 2:
    ///
    /// Input: nums = [29,6,10]
    /// Output: true
    /// Explanation: Pick numbers 29, 6 and 10.
    /// 29*1 + 6*(-3) + 10*(-1) = 1
    ///
    /// Example 3:
    /// 
    /// Input: nums = [3,6]
    /// Output: false
    /// 
    /// Constraints:
    /// 1. 1 <= nums.length <= 10^5
    /// 2. 1 <= nums[i] <= 10^9
    /// </summary>
    bool isGoodArray(vector<int>& nums);

    /// <summary>
    /// Leet code #1040. Moving Stones Until Consecutive II
    /// 
    /// On an infinite number line, the position of the i-th stone is given by 
    /// stones[i].  Call a stone an endpoint stone if it has the smallest or 
    /// largest position.
    ///
    /// Each turn, you pick up an endpoint stone and move it to an unoccupied 
    /// position so that it is no longer an endpoint stone.
    ///
    /// In particular, if the stones are at say, stones = [1,2,5], you cannot 
    /// move the endpoint stone at position 5, since moving it to any position 
    /// (such as 0, or 3) will still keep that stone as an endpoint stone.
    ///
    /// The game ends when you cannot make any more moves, ie. the stones are 
    /// in consecutive positions.
    ///
    /// When the game ends, what is the minimum and maximum number of moves that 
    /// you could have made?  Return the answer as an length 2 array: answer = 
    /// [minimum_moves, maximum_moves]
    ///
    /// Example 1:
    ///
    /// Input: [7,4,9]
    /// Output: [1,2]
    /// Explanation: 
    /// We can move 4 -> 8 for one move to finish the game.
    /// Or, we can move 9 -> 5, 4 -> 6 for two moves to finish the game.
    ///
    /// Example 2:
    ///
    /// Input: [6,5,4,3,10]
    /// Output: [2,3]
    /// We can move 3 -> 8 then 10 -> 7 to finish the game.
    /// Or, we can move 3 -> 7, 4 -> 8, 5 -> 9 to finish the game.
    /// Notice we cannot move 10 -> 2 to finish the game, because that would be 
    /// an illegal move.
    ///
    /// Example 3:
    ///
    /// Input: [100,101,104,102,103]
    /// Output: [0,0]
    /// Note:
    ///
    /// 1. 3 <= stones.length <= 10^4
    /// 2. 1 <= stones[i] <= 10^9
    /// 3. stones[i] have distinct values.
    /// </summary>
    vector<int> numMovesStonesII(vector<int>& stones);

    /// <summary>
    /// Leet code #1058. Minimize Rounding Error to Meet Target
    /// 
    /// Given an array of prices [p1,p2...,pn] and a target, round each price 
    /// pi to Roundi(pi) so that the rounded array [Round1(p1),Round2(p2)...,
    /// Roundn(pn)] sums to the given target. Each operation Roundi(pi) could 
    /// be either Floor(pi) or Ceil(pi).
    /// Return the string "-1" if the rounded array is impossible to sum to 
    /// target. Otherwise, return the smallest rounding error, which is 
    /// defined as Σ |Roundi(pi) - (pi)| for i from 1 to n, as a string with 
    /// three places after the decimal.
    ///
    /// Example 1:
    /// Input: prices = ["0.700","2.800","4.900"], target = 8
    /// Output: "1.000"
    /// Explanation: 
    /// Use Floor, Ceil and Ceil operations to get (0.7 - 0) + (3 - 2.8) + 
    /// (5 - 4.9) = 0.7 + 0.2 + 0.1 = 1.0 .
    /// 
    /// Example 2:
    /// Input: prices = ["1.500","2.500","3.500"], target = 10
    /// Output: "-1"
    /// Explanation: 
    /// It is impossible to meet the target.
    ///
    /// Note:
    /// 1. 1 <= prices.length <= 500.
    /// 2. Each string of prices prices[i] represents a real number which 
    ///    is between 0 and 1000 and has exactly 3 decimal places.
    /// 3. target is between 0 and 1000000.
    /// </summary>
    string minRoundError(vector<string>& prices, int target);

    /// <summary>
    /// Leet code #1085. Sum of Digits in the Minimum Number
    /// 
    /// Given an array A of positive integers, let S be the sum of the digits 
    /// of the minimal element of A.
    /// 
    /// Return 0 if S is odd, otherwise return 1.
    ///
    /// Example 1:
    ///
    /// Input: [34,23,1,24,75,33,54,8]
    /// Output: 0
    /// Explanation: 
    /// The minimal element is 1, and the sum of those digits is S = 1 
    /// which is odd, so the answer is 0.
    ///
    /// Example 2:
    ///
    /// Input: [99,77,33,66,55]
    /// Output: 1
    /// Explanation: 
    /// The minimal element is 33, and the sum of those digits is 
    /// S = 3 + 3 = 6 which is even, so the answer is 1.
    ///  
    /// Note:
    /// 1. 1 <= A.length <= 100
    /// 2. 1 <= A[i].length <= 100
    /// </summary>
    int sumOfDigits(vector<int>& A);

    /// <summary>
    /// Leet code #1088. Confusing Number II
    /// </summary>
    bool confusingNumberII(string str);

    /// <summary>
    /// Leet code #1088. Confusing Number II
    /// 
    /// We can rotate digits by 180 degrees to form new digits. When 
    /// 0, 1, 6, 8, 9 are rotated 180 degrees, they become 0, 1, 9, 8, 6 
    /// respectively. When 2, 3, 4, 5 and 7 are rotated 180 degrees, they 
    /// become invalid.
    ///
    /// A confusing number is a number that when rotated 180 degrees 
    /// becomes a different number with each digit valid.(Note that the 
    /// rotated number can be greater than the original number.)
    ///
    /// Given a positive integer N, return the number of confusing numbers 
    /// between 1 and N inclusive.
    /// 
    /// Example 1:
    ///
    /// Input: 20
    /// Output: 6
    /// Explanation: 
    /// The confusing numbers are [6,9,10,16,18,19].
    /// 6 converts to 9.
    /// 9 converts to 6.
    /// 10 converts to 01 which is just 1.
    /// 16 converts to 91.
    /// 18 converts to 81.
    /// 19 converts to 61.
    ///
    /// Example 2:
    ///
    /// Input: 100
    /// Output: 19
    /// Explanation: 
    /// The confusing numbers are [6,9,10,16,18,19,60,61,66,68,80,81,86,89,
    /// 90,91,98,99,100].
    ///
    ///
    /// Note:
    ///
    ///  1. 1 <= N <= 10^9
    /// </summary>
    int confusingNumberII(int N);

    /// <summary>
    /// Leet code #1093. Statistics from a Large Sample
    /// 
    /// We sampled integers between 0 and 255, and stored the results in an 
    /// array count:  count[k] is the number of integers we sampled equal to k.
    ///
    /// Return the minimum, maximum, mean, median, and mode of the sample 
    /// respectively, as an array of floating point numbers.  The mode is 
    /// guaranteed to be unique.
    ///
    /// (Recall that the median of a sample is:
    ///
    /// The middle element, if the elements of the sample were sorted and the 
    /// number of elements is odd;
    /// The average of the middle two elements, if the elements of the sample 
    /// were sorted and the number of elements is even.)
    ///
    /// Example 1:
    ///
    /// Input: count = 
    /// [0,1,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0]
    /// Output: [1.00000,3.00000,2.37500,2.50000,3.00000]
    /// Example 2:
    /// Input: count = 
    /// [0,4,3,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    ///  0,0,0,0,0,0,0,0,0,0,0]
    /// Output: [1.00000,4.00000,2.18182,2.00000,1.00000]
    /// 
    /// Constraints:
    ///
    /// 1. count.length == 256
    /// 2. 1 <= sum(count) <= 10^9
    /// 3. The mode of the sample that count represents is unique.
    /// 4. Answers within 10^-5 of the true value will be accepted as correct.
    /// </summary>
    vector<double> sampleStats(vector<int>& count);

    /// <summary>
    /// Leet code #1103. Distribute Candies to People
    /// 
    /// We distribute some number of candies, to a row of n = num_people people 
    /// in the following way:
    ///
    /// We then give 1 candy to the first person, 2 candies to the second person, 
    /// and so on until we give n candies to the last person.
    ///
    /// Then, we go back to the start of the row, giving n + 1 candies to the 
    /// first person, n + 2 candies to the second person, and so on until we give 
    /// 2 * n candies to the last person.
    ///
    /// This process repeats (with us giving one more candy each time, and moving 
    /// to the start of the row after we reach the end) until we run out of 
    /// candies.  The last person will receive all of our remaining candies 
    /// (not necessarily one more than the previous gift).
    ///
    /// Return an array (of length num_people and sum candies) that represents the 
    /// final distribution of candies.
    ///
    /// Example 1:
    ///
    /// Input: candies = 7, num_people = 4
    /// Output: [1,2,3,1]
    ///
    /// Explanation:
    /// On the first turn, ans[0] += 1, and the array is [1,0,0,0].
    /// On the second turn, ans[1] += 2, and the array is [1,2,0,0].
    /// On the third turn, ans[2] += 3, and the array is [1,2,3,0].
    /// On the fourth turn, ans[3] += 1 (because there is only one candy left), and
    /// the final array is [1,2,3,1].
    ///
    /// Example 2:
    ///
    /// Input: candies = 10, num_people = 3
    /// Output: [5,2,3]
    /// Explanation: 
    /// On the first turn, ans[0] += 1, and the array is [1,0,0].
    /// On the second turn, ans[1] += 2, and the array is [1,2,0].
    /// On the third turn, ans[2] += 3, and the array is [1,2,3].
    /// On the fourth turn, ans[0] += 4, and the final array is [5,2,3].
    ///  
    /// Constraints:
    /// 1. 1 <= candies <= 10^9
    /// 2. 1 <= num_people <= 1000
    /// </summary>
    vector<int> distributeCandies(int candies, int num_people);

    /// <summary>
    /// Leet code #66. Plus One
    ///  
    /// Given a non-empty array of digits representing a non-negative 
    /// integer, plus one to the integer.
    ///
    /// The digits are stored such that the most significant digit is at 
    /// the head of the list, and each element in the array contain a 
    /// single digit.
    ///
    /// You may assume the integer does not contain any leading zero, 
    /// except the number 0 itself.
    ///
    /// Example 1:
    ///
    /// Input: [1,2,3]
    /// Output: [1,2,4]
    /// Explanation: The array represents the integer 123.
    ///
    /// Example 2:
    ///
    /// Input: [4,3,2,1]
    /// Output: [4,3,2,2]
    /// Explanation: The array represents the integer 4321.
    /// </summary>
    vector<int> plusOne(vector<int>& digits);

    /// <summary>
    /// Leet code #258. Add Digits
    ///  
    /// Given a non-negative integer num, repeatedly add all its digits until
    /// the result has only one digit.
    ///
    /// Example:
    ///
    /// Input: 38
    /// Output: 2 
    /// Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
    ///              Since 2 has only one digit, return it.
    /// Follow up:
    /// Could you do it without any loop/recursion in O(1) runtime?
    /// </summary>
    int addDigits(int num);

    /// <summary>
    /// Leet code #335. Self Crossing
    ///  
    /// You are given an array x of n positive numbers. You start at 
    /// point (0,0) and moves x[0] metres to the north, then x[1] metres 
    /// to the west, x[2] metres to the south, x[3] metres to the east 
    /// and so on. In other words, after each move your direction changes 
    /// counter-clockwise.
    /// 
    /// Write a one-pass algorithm with O(1) extra space to determine, if 
    /// your path crosses itself, or not.
    ///
    /// Example 1:
    /// ┌───┐
    /// │   │
    /// └───┼──>
    ///     │
    /// 
    /// Input: [2,1,1,2]
    /// Output: true
    ///
    /// Example 2:
    /// ┌──────┐
    /// │      │
    /// │
    /// │
    /// └────────────>
    ///
    /// Input: [1,2,3,4]
    /// Output: false 
    /// 
    /// Example 3:
    /// ┌───┐
    /// │   │
    /// └───┼>
    ///
    /// Input: [1,1,1,1]
    /// Output: true 
    /// </summary>
    bool isSelfCrossing(vector<int>& x);

    /// <summary>
    /// Leet code #319. Bulb Switcher
    ///  
    /// There are n bulbs that are initially off. You first turn on all the 
    /// bulbs. Then, you turn off every second bulb. On the third round, 
    /// you toggle every third bulb (turning on if it's off or turning off 
    /// if it's on). For the i-th round, you toggle every i bulb. For the 
    /// n-th round, you only toggle the last bulb. Find how many bulbs are 
    /// on after n rounds.
    ///
    /// Example:
    /// 
    /// Input: 3
    /// Output: 1 
    /// Explanation: 
    /// At first, the three bulbs are [off, off, off].
    /// After first round, the three bulbs are [on, on, on].
    /// After second round, the three bulbs are [on, off, on].
    /// After third round, the three bulbs are [on, off, off]. 
    ///
    /// So you should return 1, because there is only one bulb is on.
    /// </summary>
    int bulbSwitch(int n);

    /// <summary>
    /// Leet code #29. Divide Two Integers
    ///  
    /// Given two integers dividend and divisor, divide two integers without 
    /// using multiplication, division and mod operator.
    ///
    /// Return the quotient after dividing dividend by divisor.
    ///
    /// The integer division should truncate toward zero.
    ///
    /// Example 1:
    ///
    /// Input: dividend = 10, divisor = 3
    /// Output: 3
    ///
    /// Example 2:
    ///
    /// Input: dividend = 7, divisor = -3
    /// Output: -2
    /// Note:
    /// Both dividend and divisor will be 32-bit signed integers.
    /// The divisor will never be 0.
    /// Assume we are dealing with an environment which could only store 
    /// integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. 
    /// For the purpose of this problem, assume that your function 
    /// returns 2^31 − 1 when the division result overflows.
    /// </summary>
    int divide(int dividend, int divisor);

    /// <summary>
    /// Leet code #149. Max Points on a Line
    ///  
    /// Given n points on a 2D plane, find the maximum number of points that 
    /// lie on the same straight line.
    ///
    /// Example 1:
    ///
    /// Input: [[1,1],[2,2],[3,3]]
    /// Output: 3
    /// Explanation:
    /// ^
    /// |
    /// |        o
    /// |     o
    /// |  o  
    /// +------------->
    /// 0  1  2  3  4
    ///
    /// Example 2:
    ///
    /// Input: [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
    /// Output: 4
    /// Explanation:
    /// ^
    /// |
    /// |  o
    /// |     o        o
    /// |        o
    /// |  o        o
    /// +------------------->
    /// 0  1  2  3  4  5  6
    /// NOTE: input types have been changed on April 15, 2019. Please reset 
    /// to default code definition to get new method signature.
    /// </summary>
    int maxPoints(vector<Point>& points);

    /// <summary>
    /// Leet code #172. Factorial Trailing Zeroes
    ///  
    /// Given an integer n, return the number of trailing zeroes in n!.
    ///
    /// Example 1:
    ///
    /// Input: 3
    /// Output: 0
    /// Explanation: 3! = 6, no trailing zero.
    ///
    /// Example 2:
    /// Input: 5
    /// Output: 1
    /// Explanation: 5! = 120, one trailing zero.
    /// Note: Your solution should be in logarithmic time complexity.
    /// </summary>
    int trailingZeroes(int n);

    /// <summary>
    /// Leet code #441. Arranging Coins 
    ///
    /// You have a total of n coins that you want to form in a staircase 
    /// shape, where every k-th row must have exactly k coins.
    /// Given n, find the total number of full staircase rows that can be 
    /// formed.
    /// n is a non-negative integer and fits within the range of a 32-bit 
    /// signed integer.
    ///
    /// Example 1: 
    /// n = 5
    /// The coins can form the following rows:
    /// #
    /// # #
    /// # #
    /// Because the 3rd row is incomplete, we return 2.
    /// 
    /// Example 2: 
    /// n = 8
    /// The coins can form the following rows:
    /// #
    /// # #
    /// # # #
    /// # #
    /// Because the 4th row is incomplete, we return 3.
    /// </summary>
    int arrangeCoins(int n);

    /// <summary>
    /// Leet code #1037. Valid Boomerang
    /// </summary>
    double distance(vector<int>& x, vector<int>& y);

    /// <summary>
    /// Leet code #1037. Valid Boomerang
    /// 
    /// A boomerang is a set of 3 points that are all distinct and not in a 
    /// straight line.
    ///
    /// Given a list of three points in the plane, return whether these points 
    /// are a boomerang.
    ///
    /// 
    ///
    /// Example 1:
    ///
    /// Input: [[1,1],[2,3],[3,2]]
    /// Output: true
    /// Example 2:
    ///
    /// Input: [[1,1],[2,2],[3,3]]
    /// Output: false
    ///  
    /// Note:
    /// 1. points.length == 3
    /// 2. points[i].length == 2
    /// 3. 0 <= points[i][j] <= 100
    /// </summary>
    bool isBoomerang(vector<vector<int>>& points);

    /// <summary>
    /// Leet code #1033. Moving Stones Until Consecutive
    /// 
    /// Three stones are on a number line at positions a, b, and c.
    ///
    /// Each turn, let's say the stones are currently at positions x, y, z with 
    /// x < y < z.  You pick up the stone at either position x or position z, and 
    /// move that stone to an integer position k, with x < k < z and k != y.
    ///
    /// The game ends when you cannot make any more moves, ie. the stones are in 
    /// consecutive positions.
    ///
    /// When the game ends, what is the minimum and maximum number of moves that 
    /// you could have made?  Return the answer as an length 2 array: answer = 
    /// [minimum_moves, maximum_moves]
    ///
    /// Example 1:
    /// Input: a = 1, b = 2, c = 5
    /// Output: [1, 2]
    /// Explanation: Move stone from 5 to 4 then to 3, or we can move it directly 
    /// to 3.
    ///
    /// Example 2:
    /// Input: a = 4, b = 3, c = 2
    /// Output: [0, 0]
    /// Explanation: We cannot make any moves.
    ///
    /// Note:
    /// 1. 1 <= a <= 100
    /// 2. 1 <= b <= 100
    /// 3. 1 <= c <= 100
    /// 4. a != b, b != c, c != a
    /// </summary>
    vector<int> numMovesStones(int a, int b, int c);

    /// <summary>
    /// Leet code #1015. Smallest Integer Divisible by K
    /// 
    /// Given a positive integer K, you need find the smallest positive integer 
    /// N such that N is divisible by K, and N only contains the digit 1.
    ///
    /// Return the length of N.  If there is no such N, return -1.
    ///
    /// Example 1:
    /// Input: 1
    /// Output: 1
    /// Explanation: The smallest answer is N = 1, which has length 1.
    ///
    /// Example 2:
    /// Input: 2
    /// Output: -1
    /// Explanation: There is no such positive integer N divisible by 2.
    ///
    /// Example 3:
    /// Input: 3
    /// Output: 3
    /// Explanation: The smallest answer is N = 111, which has length 3.
    /// 
    /// Note:
    ///
    /// 1 <= K <= 10^5
    /// </summary>
    int smallestRepunitDivByK(int K);

    /// <summary>
    /// Leet code #1256. Encode Number
    /// 
    /// Given a non-negative integer num, Return its encoding string.
    /// 
    /// The encoding is done by converting the integer to a string using 
    /// a secret function that you should deduce from the following table:
    ///
    /// Example 1:
    ///
    /// Input: num = 23
    /// Output: "1000"
    ///
    /// Example 2:
    ///
    /// Input: num = 107
    /// Output: "101100"
    /// </summary>
    string encode(int num);

    /// <summary>
    /// Leet code #1262. Greatest Sum Divisible by Three
    /// 
    /// Given an array nums of integers, we need to find the maximum possible 
    /// sum of elements of the array such that it is divisible by three.
    ///
    /// Example 1:
    ///
    /// Input: nums = [3,6,5,1,8]
    /// Output: 18
    /// Explanation: Pick numbers 3, 6, 1 and 8 their sum is 18 (maximum sum 
    /// divisible by 3).
    ///
    /// Example 2:
    /// 
    /// Input: nums = [4]
    /// Output: 0
    /// Explanation: Since 4 is not divisible by 3, do not pick any number.
    ///
    /// Example 3:
    ///
    /// Input: nums = [1,2,3,4,4]
    /// Output: 12
    /// Explanation: Pick numbers 1, 3, 4 and 4 their sum is 12 (maximum sum 
    /// divisible by 3).
    ///
    ///
    /// Constraints:
    ///
    /// 1. 1 <= nums.length <= 4 * 10^4
    /// 2. 1 <= nums[i] <= 10^4
    /// </summary>
    int maxSumDivThree(vector<int>& nums);

    /// <summary>
    /// Leet code #292. Nim Game
    /// 
    /// You are playing the following Nim Game with your friend: There is 
    /// a heap of stones on the table, each time one of you take turns to 
    /// remove 1 to 3 stones. The one who removes the last stone will be 
    /// the winner. You will take the first turn to remove the stones.
    ///
    /// Both of you are very clever and have optimal strategies for the 
    /// game. Write a function to determine whether you can win the game 
    /// given the number of stones in the heap.
    ///
    /// Example:
    ///
    /// Input: 4
    /// Output: false 
    /// Explanation: If there are 4 stones in the heap, then you will never 
    /// win the game; No matter 1, 2, or 3 stones you remove, the last stone 
    /// will always be removed by your friend.
    /// </summary>
    bool canWinNim(int n);

    /// <summary>
    /// Leet code #273. Integer to English Words
    /// 
    /// Convert a non-negative integer to its english words representation. 
    /// Given input is guaranteed to be less than 231 - 1.
    ///
    /// Example 1:
    ///
    /// Input: 123
    /// Output: "One Hundred Twenty Three"
    ///
    /// Example 2:
    ///
    /// Input: 12345
    /// Output: "Twelve Thousand Three Hundred Forty Five"
    ///
    /// Example 3:
    ///
    /// Input: 1234567
    /// Output: "One Million Two Hundred Thirty Four Thousand Five Hundred 
    /// Sixty Seven"
    ///
    /// Example 4:
    ///
    /// Input: 1234567891
    /// Output: "One Billion Two Hundred Thirty Four Million Five Hundred 
    /// Sixty Seven Thousand Eight Hundred Ninety One"
    /// </summary>
    string numberToWords(int num);

    /// <summary>
    /// Leet code #50. Pow(x, n) 
    /// 
    /// Implement pow(x, n), which calculates x raised to the power n (x^n).
    ///
    /// Example 1:
    /// 
    /// Input: 2.00000, 10
    /// Output: 1024.00000
    ///
    /// Example 2:
    ///
    /// Input: 2.10000, 3
    /// Output: 9.26100
    ///
    /// Example 3:
    ///
    /// Input: 2.00000, -2
    /// Output: 0.25000
    /// Explanation: 2^-2 = 1/2^2 = 1/4 = 0.25
    ///
    /// Note:
    ///
    /// 1. -100.0 < x < 100.0
    /// 2. n is a 32-bit signed integer, within the range [−2^31, 2^31 − 1]
    /// </summary>
    double myPow(double x, int n);

    /// <summary>
    /// Leet code #223. Rectangle Area 
    /// 
    /// Find the total area covered by two rectilinear rectangles in a 2D 
    /// plane.
    ///
    /// Each rectangle is defined by its bottom left corner and top right 
    /// corner as shown in the figure.
    ///
    /// Rectangle Area
    ///
    /// Example:
    ///
    /// Input: A = -3, B = 0, C = 3, D = 4, E = 0, F = -1, G = 9, H = 2
    /// Output: 45
    /// Note:
    ///
    /// Assume that the total area is never beyond the maximum possible 
    /// value of int.
    /// </summary>
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H);

    /// <summary>
    /// Leet code #43. Multiply Strings
    /// 
    /// Given two non-negative integers num1 and num2 represented as strings, 
    /// return the product of num1 and num2, also represented as a string.
    ///
    /// Example 1:
    /// Input: num1 = "2", num2 = "3"
    /// Output: "6"
    ///
    /// Example 2:
    ///
    /// Input: num1 = "123", num2 = "456"
    /// Output: "56088"
    ///
    /// Note:
    ///
    /// 1. The length of both num1 and num2 is < 110.
    /// 2. Both num1 and num2 contain only digits 0-9.
    /// 3. Both num1 and num2 do not contain any leading zero, except the number 
    ///    0 itself.
    /// 4. You must not use any built-in BigInteger library or convert the inputs 
    ///    to integer directly.
    /// </summary>
    string multiply(string num1, string num2);

    /// <summary>
    /// Leet code #365. Water and Jug Problem  
    ///
    /// You are given two jugs with capacities x and y litres. There is an 
    /// infinite amount of water supply available. 
    /// You need to determine whether it is possible to measure exactly z 
    //  litres using these two jugs.
    /// If z liters of water is measurable, you must have z liters of water 
    /// contained within one or both buckets by the end.
    /// Operations allowed: 
    /// Fill any of the jugs completely with water.
    /// Empty any of the jugs.
    /// Pour water from one jug into another till the other jug is completely 
    /// full or the first jug itself is empty.
    ///
    /// Example 1: (From the famous "Die Hard" example)
    /// Input: x = 3, y = 5, z = 4 
    /// Output: True
    /// 
    /// Example 2:
    /// Input: x = 2, y = 6, z = 5
    /// Output: False 	
    /// </summary>
    bool canMeasureWater(int x, int y, int z);

    /// <summary>
    /// Leet code #447. Number of Boomerangs  
    ///
    /// Given n points in the plane that are all pairwise distinct, a 
    /// "boomerang" is a tuple of points (i, j, k) 
    /// such that the distance between i and j equals the distance between 
    /// i and k (the order of the tuple matters).
    ///
    /// Find the number of boomerangs. You may assume that n will be at 
    /// most 500 and coordinates of points are all in the 
    /// range [-10000, 10000] (inclusive).
    ///
    /// Example:
    ///
    /// Input:
    /// [[0,0],[1,0],[2,0]]
    /// Output:
    /// 2
    /// Explanation:
    /// The two boomerangs are [[1,0],[0,0],[2,0]] and [[1,0],[2,0],[0,0]]
    /// </summary>
    int numberOfBoomerangs(vector<pair<int, int>>& points);

    /// <summary>
    /// Leet code #372. Super Pow 
    ///
    /// Your task is to calculate a^b mod 1337 where a is a positive integer 
    /// and b is an extremely large 
    /// positive integer given in the form of an array.  
    ///
    /// Example1: 
    /// a = 2
    /// b = [3]
    /// Result: 8
    /// 
    /// Example2: 
    /// a = 2
    /// b = [1,0]
    /// Result: 1024
    /// </summary>
    int superPow(int a, vector<int>& b);

    /// <summary>
    /// Leet code #356. Line Reflection       
    /// 
    /// Given n points on a 2D plane, find if there is such a line parallel 
    /// to y-axis that reflect the given points.
    ///
    /// Example 1:
    /// Given points = [[1,1],[-1,1]], return true. 
    ///
    /// Example 2:
    /// Given points = [[1,1],[-1,-1]], return false. 
    /// Follow up:
    /// Could you do better than O(n2)? 
    /// Hint:
    /// 1.Find the smallest and largest x-value for all points.
    /// 2.If there is a line then it should be at y = (minX + maxX) / 2.
    /// 3.For each point, make sure that it has a reflected point in the 
    ///   opposite side.
    /// </summary>
    bool isReflected(vector<pair<int, int>>& points);

    /// <summary>
    /// Leet code #469. Convex Polygon 
    /// determinant of 2x2 matrix [point1-point0, point2-point0]
    /// </summary>
    long det2(vector<int>& point0, vector<int>& point1, vector<int>& point2);

    /// <summary>
    /// Leet code #469. Convex Polygon       
    /// 
    /// Given a list of points that form a polygon when joined sequentially, 
    /// find if this polygon is convex 
    /// (Convex polygon definition).
    /// 
    /// Note: 
    /// 1.There are at least 3 and at most 10,000 points.
    /// 2.Coordinates are in the range -10,000 to 10,000.
    /// 3.You may assume the polygon formed by given points is always a simple 
    ///   polygon 
    /// (Simple polygon definition). In other words, we ensure that exactly 
    /// two edges intersect at each vertex, and that edges otherwise don't 
    /// intersect each other. 
    ///
    /// Example 1: 
    /// [[0,0],[0,1],[1,1],[1,0]]
    ///
    /// Answer: True
    /// Example 2: 
    /// [[0,0],[0,10],[10,10],[10,0],[5,5]]
    /// Answer: False
    /// </summary>
    /// Great solution inspired by @Ipeq1! Here is a C++ version with 
    /// extracted determinant calculation.
    /// The key observation for convexity is that vector pi+1-pi always 
    /// turns to the same direction 
    /// to pi+2-pi formed by any 3 sequentially adjacent vertices, i.e., 
    /// cross product (pi+1-pi) x (pi+2-pi) 
    /// does not change sign when traversing sequentially along polygon 
    /// vertices.
    /// Note that for any 2D vectors v1, v2,
    /// v1 x v2 = det([v1, v2])
    /// which is the determinant of 2x2 matrix [v1, v2]. And the sign of 
    /// det([v1, v2]) represents 
    /// the positive z-direction of right-hand system from v1 to v2. 
    /// So det([v1, v2]) ≥ 0 
    /// if and only if v1 turns at most 180 degrees counterclockwise to v2.
    bool isConvex(vector<vector<int>>& points);

    /// <summary>
    /// Leet code #483. Smallest Good Base       
    /// </summary>
    unsigned long long sumBase(unsigned long long base, int digits);

    /// <summary>
    /// Leet code #483. Smallest Good Base       
    /// 
    /// For an integer n, we call k>=2 a good base of n, if all digits of n 
    /// base k are 1. 
    /// Now given a string representing n, you should return the smallest 
    /// good base of n 
    /// in string format.
    /// 
    /// Example 1: 
    /// Input: "13"
    /// Output: "3"
    /// Explanation: 13 base 3 is 111.
    /// 
    /// Example 2:
    /// Input: "4681" 
    /// Output: "8"
    /// Explanation: 4681 base 8 is 11111.
    /// 
    ///
    /// Example 3:
    /// Input: "1000000000000000000" 
    /// Output: "999999999999999999"
    /// Explanation: 1000000000000000000 base 999999999999999999 is 11.
    /// Note:
    /// 1.The range of n is [3, 10^18].
    /// 2.The string representing n is always valid and will not have 
    ///   leading zeros.
    /// </summary>
    string smallestGoodBase(string n);

    /// <summary>
    /// Leet code #360. Sort Transformed Array        
    /// 
    /// Given a sorted array of integers nums and integer values a, b and c. 
    /// Apply a function of the form f(x) = ax2 + bx + c to each element x in 
    /// the array.  
    /// The returned array must be in sorted order. 
    /// Expected time complexity: O(n) 
    ///
    /// Example:
    /// nums = [-4, -2, 2, 4], a = 1, b = 3, c = 5, 
    /// Result: [3, 9, 15, 33]
    /// 
    /// nums = [-4, -2, 2, 4], a = -1, b = 3, c = 5. 
    /// Result: [-23, -5, 1, 7]
    /// </summary>
    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c);

    /// <summary>
    /// Leet code #343. Integer Break
    /// 
    /// Given a positive integer n, break it into the sum of at least two 
    /// positive integers and maximize the product of those integers. 
    /// Return the maximum product you can get.
    ///
    /// Example 1:
    ///
    /// Input: 2
    /// Output: 1
    /// Explanation: 2 = 1 + 1, 1 × 1 = 1.
    ///
    /// Example 2:
    ///
    /// Input: 10
    /// Output: 36
    /// Explanation: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36.
    /// Note: You may assume that n is not less than 2 and not larger than 58.
    /// </summary>
    int integerBreak(int n);

    /// <summary>
    /// Leet code #38. Count and Say 
    ///
    /// The count-and-say sequence is the sequence of integers beginning as follows:
    /// 1, 11, 21, 1211, 111221, ...  
    /// 1 is read off as "one 1" or 11. 
    /// 11 is read off as "two 1s" or 21.
    /// 21 is read off as "one 2, then one 1" or 1211.
    /// Given an integer n, generate the nth sequence.	
    /// Note: The sequence of integers will be represented as a string. 
    /// </summary>
    string countAndSay(int n);

    /// <summary>
    /// Leet code #391. Perfect Rectangle
    ///
    /// Given N axis-aligned rectangles where N > 0, determine if they all 
    /// together form an exact cover of a rectangular region. 
    /// Each rectangle is represented as a bottom-left point and a top-right point. 
    /// For example, a unit square is represented as [1,1,2,2]. 
    /// (coordinate of bottom-left point is (1, 1) and top-right point is (2, 2)). 
    /// Example 1: 
    /// rectangles = 
    /// [
    ///   [1,1,3,3],
    ///   [3,1,4,2],
    ///   [3,2,4,4],
    ///   [1,3,2,4],
    ///   [2,3,3,4]
    /// ]
    /// Return true. All 5 rectangles together form an exact cover of a 
    /// rectangular region.
    /// Example 2: 
    /// rectangles = 
    /// [
    ///   [1,1,2,3],
    ///   [1,3,2,4],
    ///   [3,1,4,2],
    ///   [3,2,4,4]
    /// ]
    /// Return false. Because there is a gap between the two rectangular regions.
    /// Example 3: 
    /// rectangles = 
    /// [
    ///   [1,1,3,3],
    ///   [3,1,4,2],
    ///   [1,3,2,4],
    ///   [3,2,4,4]
    /// ]
    /// Return false. Because there is a gap in the top center.
    /// Example 4: 
    /// rectangles = 
    /// [
    ///   [1,1,3,3],
    ///   [3,1,4,2],
    ///   [1,3,2,4],
    ///   [2,2,4,4]
    /// ]
    /// Return false. Because two of the rectangles overlap with each other.
    /// </summary>
    bool isRectangleCover(vector<vector<int>>& rectangles);

    /// <summary>
    /// Leet code #458. Poor Pigs
    /// 
    /// There are 1000 buckets, one and only one of them is poisonous, while 
    /// the rest are filled with water. They all look identical. If a pig 
    /// drinks the poison it will die within 15 minutes. What is the minimum 
    /// amount of pigs you need to figure out which bucket is poisonous within 
    /// one hour?
    /// 
    /// Answer this question, and write an algorithm for the general case.
    ///
    /// General case:
    ///
    /// If there are n buckets and a pig drinking poison will die within m 
    /// minutes, how many pigs (x) you need to figure out the poisonous bucket 
    /// within p minutes? There is exactly one bucket with poison.
    ///
    /// Note:
    ///
    /// A pig can be allowed to drink simultaneously on as many buckets as one 
    /// would like, and the feeding takes no time.
    /// After a pig has instantly finished drinking buckets, there has to be a 
    /// cool down time of m minutes. During this time, only observation is 
    /// allowed and no feedings at all.
    /// Any given bucket can be sampled an infinite number of times 
    /// (by an unlimited number of pigs).
    /// </summary>
    int poorPigs(int buckets, int minutesToDie, int minutesToTest);

    /// <summary>
    /// Leet code #492. Construct the Rectangle       
    /// 
    /// For a web developer, it is very important to know how to design a 
    /// web page's size. 
    /// So, given a specific rectangular web page’s area, your job by now is 
    /// to design a rectangular web page, whose length L and width W satisfy 
    /// the following requirements:
    ///
    /// 1. The area of the rectangular web page you designed must equal to the 
    ///    given target area.
    /// 2. The width W should not be larger than the length L, which 
    ///    means L >= W.
    ///	3. The difference between length L and width W should be as small as 
    ///   possible.
    /// 
    /// You need to output the length L and the width W of the web page you 
    /// designed in sequence. 
    ///
    /// Example:
    /// 
    /// Input: 4
    /// Output: [2, 2]
    /// Explanation: The target area is 4, and all the possible ways to 
    /// construct it are [1,4], [2,2], [4,1]. 
    /// But according to requirement 2, [1,4] is illegal; according to 
    /// requirement 3, [4,1] is not optimal compared to [2,2]. So the length L 
    /// is 2, and the width W is 2.
    ///
    /// Note:
    /// 1.The given area won't exceed 10,000,000 and is a positive integer
    /// 2.The web page's width and length you designed must be positive integers.
    /// </summary>
    vector<int> constructRectangle(int area);

    /// <summary>
    /// Leet code #504. Base 7         
    /// 
    /// Given an integer, return its base 7 string representation.
    /// Example 1:
    /// Input: 100
    /// Output: "202"
    ///
    /// Example 2:
    /// Input: -7
    /// Output: "-10"
    ///
    /// Note: The input will be in range of [-1e7, 1e7]. 
    /// </summary>
    string convertToBase7(int num);

    /// <summary>
    /// Leet code #509. Fibonacci Number
    /// 
    /// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the 
    /// Fibonacci sequence, such that each number is the sum of the two preceding 
    /// ones, starting from 0 and 1. That is,
    ///
    /// F(0) = 0,   F(1) = 1
    /// F(N) = F(N - 1) + F(N - 2), for N > 1.
    /// Given N, calculate F(N).
    ///
    /// Example 1:
    ///
    /// Input: 2
    /// Output: 1
    /// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
    ///
    /// Example 2:
    /// Input: 3
    /// Output: 2
    /// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
    ///
    /// Example 3:
    /// Input: 4
    /// Output: 3
    /// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
    ///  
    /// Note:
    /// 1. 0 ≤ N ≤ 30.
    /// </summary>
    int fib(int N);

    /// <summary>
    /// Leet code #587. Erect the Fence          
    /// </summary>
    int orientation(Point p, Point q, Point r);

    /// <summary>
    /// Leet code #587. Erect the Fence          
    /// 
    /// There are some trees, where each tree is represented by (x,y) coordinate 
    /// in a two-dimensional garden. Your job is to fence the entire garden 
    /// using the minimum length of rope as it is expensive. The garden is well 
    /// fenced only if all the trees are enclosed. Your task is to help find the 
    /// coordinates of trees which are exactly located on the fence perimeter.
    ///
    /// Example 1:
    /// Input: [[1,1],[2,2],[2,0],[2,4],[3,3],[4,2]]
    /// Output: [[1,1],[2,0],[4,2],[3,3],[2,4]]
    /// Explanation:
    ///
    /// Example 2:
    /// Input: [[1,2],[2,2],[4,2]]
    /// Output: [[1,2],[2,2],[4,2]]
    /// Explanation:
    ///
    /// Even you only have trees in a line, you need to use rope to enclose them. 
    ///
    /// Note: 
    /// 1. All trees should be enclosed together. You cannot cut the rope to enclose 
    ///    trees that will separate them in more than one group.
    /// 2. All input integers will range from 0 to 100. 
    /// 3. The garden has at least one tree. 
    /// 4. All coordinates are distinct. 
    /// 5. Input points have NO order. No order required for output.
    /// </summary>
    vector<Point> outerTrees(vector<Point>& points);

    /// <summary>
    /// Leet code #593. Valid Square 
    /// </summary>
    int distance_square(vector<int>& p1, vector<int>& p2);

    /// <summary>
    /// Leet code #593. Valid Square 
    ///
    /// Given the coordinates of four points in 2D space, return whether the 
    /// four points could construct a square.
    /// The coordinate (x,y) of a point is represented by an integer array 
    /// with two integers.
    ///
    /// Example:
    /// Input: p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]
    /// Output: True
    /// Note:
    /// All the input integers are in the range [-10000, 10000].
    /// A valid square has four equal sides with positive length and four 
    /// equal angles (90-degree angles).
    /// Input points have no order.
    /// </summary>
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4);

    /// <summary>
    /// Leet code #611. Valid Triangle Number
    /// 
    /// Given an array consists of non-negative integers, your task is to 
    /// count the number of triplets chosen from the array that can make 
    /// triangles if we take them as side lengths of a triangle. 
    ///
    /// Example 1:
    ///
    /// Input: [2,2,3,4]
    /// Output: 3
    /// Explanation:
    /// Valid combinations are: 
    /// 2,3,4 (using the first 2)
    /// 2,3,4 (using the second 2)
    /// 2,2,3
    /// Note:
    /// 1.The length of the given array won't exceed 1000.
    /// 2.The integers in the given array are in the range of [0, 1000].
    /// </summary>
    int triangleNumber(vector<int>& nums);

    /// <summary>
    /// Leet code #812. Largest Triangle Area
    /// 
    /// You have a list of points in the plane. Return the area of the largest 
    /// triangle that can be formed by any 3 of the points.
    /// 
    /// Example:
    /// Input: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
    /// Output: 2
    /// Explanation: 
    /// The five points are show in the figure below. The red triangle is the 
    /// largest.
    ///
    /// Notes:
    /// 1. 3 <= points.length <= 50.
    /// 2. No points will be duplicated.
    /// 3. -50 <= points[i][j] <= 50.
    /// 4. Answers within 10^-6 of the true value will be accepted as correct.
    /// </summary>
    double largestTriangleArea(vector<vector<int>>& points);

    /// <summary>
    /// Leet code #858. Mirror Reflection
    /// 
    /// There is a special square room with mirrors on each of the four walls.  
    /// Except for the southwest corner, there are receptors on each of the 
    /// remaining corners, numbered 0, 1, and 2.
    ///
    /// The square room has walls of length p, and a laser ray from the southwest 
    /// corner first meets the east wall at a distance q from the 0th receptor.
    ///
    /// Return the number of the receptor that the ray meets first.  (It is 
    /// guaranteed that the ray will meet a receptor eventually.)
    ///
    /// Example 1:
    ///
    /// Input: p = 2, q = 1
    /// Output: 2
    /// Explanation: The ray meets receptor 2 the first time it gets reflected 
    /// back to the left wall.
    ///
    /// Note:
    /// 1. 1 <= p <= 1000
    /// 2. 0 <= q <= p
    /// </summary>
    int mirrorReflection(int p, int q);

    /// <summary>
    /// Leet code #866. Prime Palindrome
    /// </summary>
    bool isPrime(int N);

    /// <summary>
    /// Leet code #866. Prime Palindrome
    /// 
    /// Find the smallest prime palindrome greater than or equal to N.
    ///
    /// Recall that a number is prime if it's only divisors are 1 and itself, 
    /// and it is greater than 1. 
    ///
    /// For example, 2,3,5,7,11 and 13 are primes.
    ///
    /// Recall that a number is a palindrome if it reads the same from left 
    /// to right as it does from right to left. 
    ///
    /// For example, 12321 is a palindrome.
    ///
    /// Example 1:
    /// Input: 6
    /// Output: 7
    ///
    /// Example 2:
    /// Input: 8
    /// Output: 11
    ///
    /// Example 3:
    /// Input: 13
    /// Output: 101
    ///
    /// Note:
    /// 
    /// 1. 1 <= N <= 10^8
    /// 2. The answer is guaranteed to exist and be less than 2 * 10^8.
    /// </summary>
    int primePalindrome(int N);

    /// <summary>
    /// Leet code #869. Reordered Power of 2
    /// 
    /// Starting with a positive integer N, we reorder the digits in any order 
    /// (including the original order) such that the leading digit is not zero.
    ///
    /// Return true if and only if we can do this in a way such that the 
    /// resulting number is a power of 2.
    ///
    /// Example 1:
    /// Input: 1
    /// Output: true
    ///
    /// Example 2:
    /// Input: 10
    /// Output: false
    ///
    /// Example 3:
    /// Input: 16
    /// Output: true
    ///
    /// Example 4:
    /// Input: 24
    /// Output: false
    ///
    /// Example 5:
    /// Input: 46
    /// Output: true
    ///  
    /// Note:
    /// 1. 1 <= N <= 10^9
    /// </summary>
    bool reorderedPowerOf2(int N);

    /// <summary>
    /// Leet code #906. Super Palindromes
    /// 
    /// Let's say a positive integer is a superpalindrome if it is a palindrome, 
    /// and it is also the square of a palindrome.
    ///
    /// Now, given two positive integers L and R (represented as strings), return 
    /// the number of superpalindromes in the inclusive range [L, R].
    /// 
    /// Example 1:
    /// Input: L = "4", R = "1000"
    /// Output: 4
    /// Explanation: 4, 9, 121, and 484 are superpalindromes.
    /// Note that 676 is not a superpalindrome: 26 * 26 = 676, but 26 is not a 
    /// palindrome.
    ///  
    /// Note:
    /// 1. 1 <= len(L) <= 18
    /// 2. 1 <= len(R) <= 18
    /// 3. L and R are strings representing integers in the range [1, 10^18).
    /// 4. int(L) <= int(R)
    /// </summary>
    int superpalindromesInRange(string L, string R);

    /// <summary>
    /// Leet code #949. Largest Time for Given Digits
    /// 
    /// Given an array of 4 digits, return the largest 24 hour time that can 
    /// be made.
    ///
    /// The smallest 24 hour time is 00:00, and the largest is 23:59.  
    /// Starting from 00:00, a time is larger if more time has elapsed since 
    /// midnight.
    /// 
    /// Return the answer as a string of length 5.  If no valid time can be 
    /// made, return an empty string.
    ///
    /// Example 1:
    ///
    /// Input: [1,2,3,4]
    /// Output: "23:41"
    ///
    /// Example 2:
    ///
    /// Input: [5,5,5,5]
    /// Output: ""
    /// 
    /// Note:
    ///
    /// 1. A.length == 4
    /// 2. 0 <= A[i] <= 9
    /// </summary>
    string largestTimeFromDigits(vector<int>& A);

    /// <summary>
    /// Leet code #976. Largest Perimeter Triangle
    /// 
    /// Given an array A of positive lengths, return the largest perimeter of a 
    /// triangle with non-zero area, formed from 3 of these lengths.
    ///
    /// If it is impossible to form any triangle of non-zero area, return 0.
    ///
    /// 
    /// Example 1:
    ///
    /// Input: [2,1,2]
    /// Output: 5
    ///
    /// Example 2:
    ///
    /// Input: [1,2,1]
    /// Output: 0
    ///
    /// Example 3:
    ///
    /// Input: [3,2,3,4]
    /// Output: 10
    ///
    /// Example 4:
    ///
    /// Input: [3,6,2,3]
    /// Output: 8
    /// 
    /// Note:
    /// 
    /// 1. 3 <= A.length <= 10000
    /// 2. 1 <= A[i] <= 10^6
    /// </summary>
    int largestPerimeter(vector<int>& A);

    /// <summary>
     /// Leet code #991. Broken Calculator
     /// 
     /// On a broken calculator that has a number showing on its display, 
     /// we can perform two operations:
     ///
     /// Double: Multiply the number on the display by 2, or;
     /// Decrement: Subtract 1 from the number on the display.
     /// Initially, the calculator is displaying the number X.
     ///
     /// Return the minimum number of operations needed to display the number Y.
     /// 
     /// Example 1:
     /// Input: X = 2, Y = 3
     /// Output: 2
     /// Explanation: Use double operation and then decrement 
     /// operation {2 -> 4 -> 3}.
     ///
     /// Example 2:
     /// Input: X = 5, Y = 8
     /// Output: 2
     /// Explanation: Use decrement and then double {5 -> 4 -> 8}.
     ///
     /// Example 3:
     /// Input: X = 3, Y = 10
     /// Output: 3
     /// Explanation:  Use double, decrement and double {3 -> 6 -> 5 -> 10}.
     ///
     /// Example 4:
     /// Input: X = 1024, Y = 1
     /// Output: 1023
     /// Explanation: Use decrement operations 1023 times.
     ///
     /// Note:
     /// 1. 1 <= X <= 10^9
     /// 2. 1 <= Y <= 10^9
     /// </summary>
    int brokenCalc(int X, int Y);

    /// <summary>
    /// Leet code #963. Minimum Area Rectangle II
    /// 
    /// Given a set of points in the xy-plane, determine the minimum area of any 
    /// rectangle formed from these points, with sides not necessarily parallel 
    /// to the x and y axes.
    ///
    /// If there isn't any rectangle, return 0.
    /// 
    /// Example 1:
    /// Input: [[1,2],[2,1],[1,0],[0,1]]
    /// Output: 2.00000
    /// Explanation: The minimum area rectangle occurs at [1,2],[2,1],[1,0],[0,1], 
    /// with an area of 2.
    ///
    /// Example 2:
    /// Input: [[0,1],[2,1],[1,1],[1,0],[2,0]]
    /// Output: 1.00000
    /// Explanation: The minimum area rectangle occurs at [1,0],[1,1],[2,1],[2,0], 
    /// with an area of 1.
    ///
    /// Example 3:
    /// Input: [[0,3],[1,2],[3,1],[1,3],[2,1]]
    /// Output: 0
    /// Explanation: There is no possible rectangle to form from these points.
    ///
    /// Example 4:
    /// Input: [[3,1],[1,1],[0,1],[2,1],[3,3],[3,2],[0,2],[2,3]]
    /// Output: 2.00000
    /// Explanation: The minimum area rectangle occurs at [2,1],[2,3],[3,3],[3,1], 
    /// with an area of 2.
    ///
    /// Note:
    /// 1. 1 <= points.length <= 50
    /// 2. 0 <= points[i][0] <= 40000
    /// 3. 0 <= points[i][1] <= 40000
    /// 4. All points are distinct.
    /// 5. Answers within 10^-5 of the actual value will be accepted as correct.
    /// </summary>
    double minAreaFreeRect(vector<vector<int>>& points);

    /// <summary>
    /// Leet code #1266. Minimum Time Visiting All Points
    /// 
    /// On a plane there are n points with integer coordinates 
    /// points[i] = [xi, yi]. Your task is to find the minimum time in 
    /// seconds to visit all points.
    ///
    /// You can move according to the next rules:
    ///
    /// In one second always you can either move vertically, horizontally 
    /// by one unit or diagonally (it means to move one unit vertically and 
    /// one unit horizontally in one second).
    /// You have to visit the points in the same order as they appear in the 
    /// array.
    ///
    /// Example 1:
    /// 
    /// Input: points = [[1,1],[3,4],[-1,0]]
    /// Output: 7
    /// Explanation: One optimal path is [1,1] -> [2,2] -> [3,3] -> 
    /// [3,4] -> [2,3] -> [1,2] -> [0,1] -> [-1,0]   
    /// Time from [1,1] to [3,4] = 3 seconds 
    /// Time from [3,4] to [-1,0] = 4 seconds
    /// Total time = 7 seconds
    ///
    /// Example 2:
    ///
    /// Input: points = [[3,2],[-2,2]]
    /// Output: 5
    /// 
    /// Constraints:
    /// 1. points.length == n
    /// 2. 1 <= n <= 100
    /// 3. points[i].length == 2
    /// 4. -1000 <= points[i][0], points[i][1] <= 1000
    /// </summary>
    int minTimeToVisitAllPoints(vector<vector<int>>& points);

    /// <summary>
    /// Leet code #1271. Hexspeak
    /// 
    /// A decimal number can be converted to its Hexspeak representation by 
    /// first converting it to an uppercase hexadecimal string, then 
    /// replacing all occurrences of the digit 0 with the letter O, and the
    /// digit 1 with the letter I.  Such a representation is valid if and 
    /// only if it consists only of the letters in the set {"A", "B", "C",
    /// "D", "E", "F", "I", "O"}.
    ///
    /// Given a string num representing a decimal integer N, return the 
    ///  Hexspeak representation of N if it is valid, otherwise return "ERROR".
    /// 
    /// Example 1:
    ///
    /// Input: num = "257"
    /// Output: "IOI"
    /// Explanation:  257 is 101 in hexadecimal.
    ///
    /// Example 2:
    ///
    /// Input: num = "3"
    /// Output: "ERROR"
    ///
    /// Constraints:
    /// 1. 1 <= N <= 10^12
    /// 2. There are no leading zeros in the given string.
    /// 3. All answers must be in uppercase letters.
    /// </summary>
    string toHexspeak(string num);

    /// <summary>
    /// Leetcode #1276. Number of Burgers with No Waste of Ingredients
    /// 
    /// Given two integers tomatoSlices and cheeseSlices. The ingredients 
    /// of different burgers are as follows:
    ///
    /// Jumbo Burger: 4 tomato slices and 1 cheese slice.
    /// Small Burger: 2 Tomato slices and 1 cheese slice.
    /// Return [total_jumbo, total_small] so that the number of remaining 
    /// tomatoSlices equal to 0 and the number of remaining cheeseSlices 
    /// equal to 0. If it is not possible to make the remaining tomatoSlices 
    /// and cheeseSlices equal to 0 return [].
    ///
    ///
    /// Example 1:
    /// Input: tomatoSlices = 16, cheeseSlices = 7
    /// Output: [1,6]
    /// Explantion: To make one jumbo burger and 6 small burgers we 
    /// need 4*1 + 2*6 = 16 tomato and 1 + 6 = 7 cheese. There will be no 
    /// remaining ingredients.
    ///
    /// Example 2:
    ///
    /// Input: tomatoSlices = 17, cheeseSlices = 4
    /// Output: []
    /// Explantion: There will be no way to use all ingredients to make small 
    /// and jumbo burgers.
    ///
    /// Example 3:
    ///
    /// Input: tomatoSlices = 4, cheeseSlices = 17
    /// Output: []
    /// Explantion: Making 1 jumbo burger there will be 16 cheese remaining 
    /// and making 2 small burgers there will be 15 cheese remaining.
    ///
    /// Example 4:
    ///
    /// Input: tomatoSlices = 0, cheeseSlices = 0
    /// Output: [0,0]
    ///
    /// Example 5:
    ///
    /// Input: tomatoSlices = 2, cheeseSlices = 1
    /// Output: [0,1]
    /// 
    /// Constraints:
    /// 1. 0 <= tomatoSlices <= 10^7
    /// 2. 0 <= cheeseSlices <= 10^7
    /// </summary>
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices);

    /// <summary>
    /// Leet code #412. Fizz Buzz 
    /// Write a program that outputs the string representation of numbers from 1 to n.
    /// But for multiples of three it should output 揊izz?instead of the number and for the multiples of five output 揃uzz? 
    /// For numbers which are multiples of both three and five output 揊izzBuzz?
    /// Example: 
    /// Return:
    /// [
    ///    "1",
    ///    "2",
    ///    "Fizz",
    ///    "4",
    ///    "Buzz",
    ///    "Fizz",
    ///    "7",
    ///    "8",
    ///    "Fizz",
    ///    "Buzz",
    ///    "11",
    ///    "Fizz",
    ///    "13",
    ///    "14",
    ///    "FizzBuzz"
    /// ]
    /// </summary>
    vector<string> fizzBuzz(int n);

    /// <summary>
    /// Leet code #453. Minimum Moves to Equal Array Elements
    ///
    /// Given a non-empty integer array of size n, find the minimum number 
    /// of moves required to make all 
    /// array elements equal, where a move is incrementing n - 1 elements by 1. 
    ///
    /// Example: 
    /// Input:
    /// [1,2,3] 
    /// Output:
    /// 3
    /// 
    /// Explanation:
    /// Only three moves are needed (remember each move increments two elements):
    /// [1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
    /// </summary>
    int minMoves(vector<int>& nums);

    /// <summary>
    /// Leet code #462. Minimum Moves to Equal Array Elements II   
    /// Given a non-empty integer array, find the minimum number of moves 
    /// required to make all 
    /// array elements equal, where a move is incrementing a selected 
    /// element by 1 or decrementing 
    /// a selected element by 1.
    /// You may assume the array's length is at most 10,000.  
    ///
    /// Example: 
    /// Input:
    /// [1,2,3]
    /// Output:
    /// 2
    /// Explanation:
    /// Only two moves are needed (remember each move increments or decrements one element):
    /// [1,2,3]  =>  [2,2,3]  =>  [2,2,2]
    /// </summary>
    int minMoves2(vector<int>& nums);

    /// <summary>
    /// Leet code #326. Power of Three    
    /// Given an integer, write a function to determine if it is a power 
    /// of three. 
    /// Follow up:
    /// Could you do it without using any loop / recursion? 
    /// </summary>
    bool isPowerOfThree(int n);

    /// <summary>
    /// Leet code #625. Minimum Factorization
    /// 
    /// Given a positive integer a, find the smallest positive integer b whose 
    /// multiplication of each digit equals to a. 
    ///
    /// If there is no answer or the answer is not fit in 32-bit signed 
    /// integer, then return 0.
    ///
    /// Example 1
    /// Input: 48 
    /// Output: 68
    ///
    /// Example 2
    /// Input: 15
    /// Output: 35
    /// </summary>
    int smallestFactorization(int a);

    /// <summary>
    /// Leet code #633. Sum of Square Numbers
    /// 
    /// Given a non-negative integer c, your task is to decide whether 
    /// there're two integers a and b such that a^2 + b^2 = c. 
    /// Example 1:
    /// Input: 5
    /// Output: True
    ///
    /// Explanation: 1 * 1 + 2 * 2 = 5
    /// Example 2:
    /// Input: 3
    /// Output: False
    /// </summary>
    bool judgeSquareSum(int c);

    /// <summary>
    /// Leet code #479. Largest Palindrome Product 
    /// 
    /// Find the largest palindrome made from the product of two n-digit 
    /// numbers. 
    /// Since the result could be very large, you should return the largest 
    /// palindrome mod 1337.
    /// Example: 
    /// Input: 2
    /// Output: 987
    /// Explanation: 99 x 91 = 9009, 9009 % 1337 = 987 
    ///
    /// Note: 
    /// The range of n is [1,8].
    /// </summary>
    int largestPalindrome(int n);

    /// <summary>
    /// Leet code #657. Judge Route Circle 
    /// 
    /// Initially, there is a Robot at position (0, 0). Given a sequence of 
    /// its moves, judge if this robot makes a circle, which means it moves 
    /// back to the original place. 
    /// The move sequence is represented by a string. And each move is 
    /// represent by a character. The valid robot moves are R (Right), 
    /// L (Left), U (Up) and D (down). The output should be true or false 
    /// representing whether the robot makes a circle. 
    /// Example 1:
    /// Input: "UD"
    /// Output: true
    ///
    /// Example 2:
    /// Input: "LL"
    /// Output: false
    /// </summary>
    bool judgeCircle(string moves);

    /// <summary>
    /// Leet code #754. Reach a Number    
    /// You are standing at position 0 on an infinite number line. There is a 
    /// goal at position target.
    ///
    /// On each move, you can either go left or right. During the n-th move 
    /// (starting from 1), you take n steps.
    /// 
    /// Return the minimum number of steps required to reach the destination.
    ///
    /// Example 1:
    /// Input: target = 3
    /// Output: 2
    /// Explanation:
    /// On the first move we step from 0 to 1.
    /// On the second step we step from 1 to 3.
    /// Example 2:
    /// Input: target = 2
    /// Output: 3
    /// Explanation:
    /// On the first move we step from 0 to 1.
    /// On the second move we step  from 1 to -1.
    /// On the third move we step from -1 to 2.
    /// Note:
    /// 1. target will be a non-zero integer in the range [-10^9, 10^9].
    /// </summary>
    int reachNumber(int target);

    /// <summary>
    /// Leet code #781. Rabbits in Forest    
    ///
    /// In a forest, each rabbit has some color. Some subset of rabbits 
    /// (possibly all of them) tell you how many other rabbits have the 
    /// same color as them. Those answers are placed in an array.
    ///
    /// Return the minimum number of rabbits that could be in the forest.
    ///
    /// Examples:
    /// Input: answers = [1, 1, 2]
    /// Output: 5
    /// Explanation:
    /// The two rabbits that answered "1" could both be the same color, 
    /// say red.
    /// The rabbit than answered "2" can't be red or the answers would be 
    /// inconsistent.
    /// Say the rabbit that answered "2" was blue.
    /// Then there should be 2 other blue rabbits in the forest that didn't 
    /// answer into the array.
    /// The smallest possible number of rabbits in the forest is therefore 
    /// 5: 3 that answered plus 2 that didn't.
    ///
    /// Input: answers = [10, 10, 10]
    /// Output: 11
    ///
    /// Input: answers = []
    /// Output: 0
    /// Note:
    ///
    /// 1. answers will have length at most 1000.
    /// 2. Each answers[i] will be an integer in the range [0, 999].
    /// </summary>
    int numRabbits(vector<int>& answers);

    /// <summary>
    /// Leet code #794. Valid Tic-Tac-Toe State
    ///
    /// A Tic-Tac-Toe board is given as a string array board. Return True if 
    /// and only if it is possible to reach this board position during the 
    /// course of a valid tic-tac-toe game.
    ///
    /// The board is a 3 x 3 array, and consists of characters " ", "X", and 
    /// "O".  The " " character represents an empty square.
    ///
    /// Here are the rules of Tic-Tac-Toe:
    ///
    /// Players take turns placing characters into empty squares (" ").
    /// The first player always places "X" characters, while the second player
    /// always places "O" characters.
    /// "X" and "O" characters are always placed into empty squares, never 
    /// filled ones.
    /// The game ends when there are 3 of the same (non-empty) character 
    /// filling any row, column, or diagonal.
    /// The game also ends if all squares are non-empty.
    /// No more moves can be played if the game is over.
    /// Example 1:
    /// Input: board = ["O  ", "   ", "   "]
    /// Output: false
    /// Explanation: The first player always plays "X".
    ///
    /// Example 2:
    /// Input: board = ["XOX", " X ", "   "]
    /// Output: false
    /// Explanation: Players take turns making moves.
    ///
    /// Example 3:
    /// Input: board = ["XXX", "   ", "OOO"]
    /// Output: false
    ///
    /// Example 4:
    /// Input: board = ["XOX", "O O", "XOX"]
    /// Output: true
    /// Note:
    ///
    /// board is a length-3 array of strings, where each string board[i] has 
    /// length 3.
    /// Each board[i][j] is a character in the set {" ", "X", "O"}.
    /// </summary>
    bool validTicTacToe(vector<string>& board);

    /// <summary>
    /// Leet code #1281. Subtract the Product and Sum of Digits of an Integer
    ///
    /// Easy
    ///
    /// Given an integer number n, return the difference between the product 
    /// of its digits and the sum of its digits. 
    ///
    /// Example 1:
    /// Input: n = 234
    /// Output: 15 
    /// Explanation: 
    /// Product of digits = 2 * 3 * 4 = 24 
    /// Sum of digits = 2 + 3 + 4 = 9 
    /// Result = 24 - 9 = 15
    ///
    /// Example 2:
    /// Input: n = 4421
    /// Output: 21
    /// Explanation: 
    /// Product of digits = 4 * 4 * 2 * 1 = 32 
    /// Sum of digits = 4 + 4 + 2 + 1 = 11 
    /// Result = 32 - 11 = 21
    /// </summary>
    int subtractProductAndSum(int n);

    /// <summary>
    /// Leet code #1291. Sequential Digits
    ///
    /// Medium
    ///
    /// An integer has sequential digits if and only if each digit in the 
    /// number is one more than the previous digit.
    ///
    /// Return a sorted list of all the integers in the range [low, high] 
    /// inclusive that have sequential digits.
    /// 
    /// Example 1:
    /// Input: low = 100, high = 300
    /// Output: [123,234]
    ///
    /// Example 2:
    /// Input: low = 1000, high = 13000
    /// Output: [1234,2345,3456,4567,5678,6789,12345]
    ///
    /// Constraints:
    /// 1. 10 <= low <= high <= 10^9
    /// </summary>
    vector<int> sequentialDigits(int low, int high);

    /// <summary>
    /// Leetcode #1295. Find Numbers with Even Number of Digits
    /// 
    /// Given an array nums of integers, return how many of them contain an 
    /// even number of digits.
    /// 
    /// Example 1:
    ///
    /// Input: nums = [12,345,2,6,7896]
    /// Output: 2
    /// Explanation: 
    /// 12 contains 2 digits (even number of digits). 
    /// 345 contains 3 digits (odd number of digits). 
    /// 2 contains 1 digit (odd number of digits). 
    /// 6 contains 1 digit (odd number of digits). 
    /// 7896 contains 4 digits (even number of digits). 
    /// Therefore only 12 and 7896 contain an even number of digits.
    ///
    /// Example 2:
    ///  
    /// Input: nums = [555,901,482,1771]
    /// Output: 1 
    /// Explanation: 
    /// Only 1771 contains an even number of digits.
    ///
    /// Constraints:
    /// 1. 1 <= nums.length <= 500
    /// 2. 1 <= nums[i] <= 10^5
    /// </summary>
    int findNumbers(vector<int>& nums);

    /// <summary>
    /// Leet code #800. Similar RGB Color
    /// 
    /// In the following, every capital letter represents some hexadecimal 
    /// digit from 0 to f.
    ///
    /// The red-green-blue color "#AABBCC" can be written as "#ABC" in 
    /// shorthand.  For example, "#15c" is shorthand for the color "#1155cc".
    ///
    /// Now, say the similarity between two colors "#ABCDEF" and "#UVWXYZ" 
    /// is -(AB - UV)^2 - (CD - WX)^2 - (EF - YZ)^2.
    ///
    /// Given the color "#ABCDEF", return a 7 character color that is most 
    /// similar to #ABCDEF, and has a shorthand (that is, it can be represented
    /// as some "#XYZ"
    ///
    /// Example 1:
    /// Input: color = "#09f166"
    /// Output: "#11ee66"
    /// Explanation:  
    /// The similarity is -(0x09 - 0x11)^2 -(0xf1 - 0xee)^2 - (0x66 - 0x66)^2 
    /// = -64 -9 -0 = -73.
    /// This is the highest among any shorthand color.
    /// Note:
    ///
    /// 1. color is a string of length 7.
    /// 2. color is a valid RGB color: for i > 0, color[i] is a hexadecimal 
    ///    digit from 0 to f
    /// 3. Any answer which has the same (highest) similarity as the best 
    ///    answer will be accepted.
    /// 4. All inputs and outputs should use lowercase letters, and the 
    ///    output is 7 characters.
    /// </summary>
    string similarRGB(string color);

    /// <summary>
    /// Leet code #810. Chalkboard XOR Game
    /// 
    /// We are given non-negative integers nums[i] which are written on a 
    /// chalkboard.  Alice and Bob take turns erasing exactly one number 
    /// from the chalkboard, with Alice starting first.  If erasing a number 
    /// causes the bitwise XOR of all the elements of the chalkboard to become 
    /// 0, then that player loses.  (Also, we'll say the bitwise XOR of one 
    /// element is that element itself, and the bitwise XOR of no elements is 
    /// 0.)
    ///
    /// Also, if any player starts their turn with the bitwise XOR of all the 
    /// elements of the chalkboard equal to 0, then that player wins.
    ///
    /// Return True if and only if Alice wins the game, assuming both players 
    /// play optimally.
    ///
    /// Example:
    /// Input: nums = [1, 1, 2]
    /// Output: false
    /// Explanation: 
    /// Alice has two choices: erase 1 or erase 2. 
    /// If she erases 1, the nums array becomes [1, 2]. The bitwise XOR of all 
    /// the elements of the chalkboard is 1 XOR 2 = 3. Now Bob can remove any 
    /// element he wants, because Alice will be the one to erase the last 
    /// element and she will lose. 
    /// If Alice erases 2 first, now nums becomes [1, 1]. The bitwise XOR of 
    /// all the elements of the chalkboard is 1 XOR 1 = 0. Alice will lose.
    ///
    /// Notes:
    ///
    /// 1. 1 <= N <= 1000. 
    /// 2. 0 <= nums[i] <= 2^16.
    /// </summary>
    bool xorGame(vector<int>& nums);

    /// <summary>
    /// Leetcode #1304. Find N Unique Integers Sum up to Zero
    ///
    /// Easy	
    ///
    /// Given an integer n, return any array containing n unique integers 
    /// such that they add up to 0.
    /// 
    /// Example 1: 
    /// Input: n = 5
    /// Output: [-7,-1,1,3,4]
    /// Explanation: These arrays also are accepted [-5,-1,1,2,3], 
    /// [-3,-1,2,-2,4].
    ///
    /// Example 2:
    /// Input: n = 3
    /// Output: [-1,0,1]
    ///
    /// Example 3:
    ///
    /// Input: n = 1
    /// Output: [0]
    ///  
    /// Constraints:
    /// 1. 1 <= n <= 1000
    /// </summary>
    vector<int> sumZero(int n);

    /// <summary>
    /// Leet code #1317. Convert Integer to the Sum of Two No-Zero Integers
    ///
    /// Easy
    ///
    /// Given an integer n. No-Zero integer is a positive integer which doesn't 
    /// contain any 0 in its decimal representation.
    ///
    /// Return a list of two integers [A, B] where:
    ///
    /// A and B are No-Zero integers.
    /// A + B = n
    /// It's guarateed that there is at least one valid solution. If there are 
    /// many valid solutions you can return any of them.
    /// 
    /// Example 1:
    /// Input: n = 2
    /// Output: [1,1]
    /// Explanation: A = 1, B = 1. A + B = n and both A and B don't contain 
    /// any 0 in their decimal representation.
    ///
    /// Example 2:
    /// Input: n = 11
    /// Output: [2,9]
    ///
    /// Example 3:
    /// Input: n = 10000
    /// Output: [1,9999]
    ///
    /// Example 4:
    /// Input: n = 69
    /// Output: [1,68]
    //
    /// Example 5:
    /// Input: n = 1010
    /// Output: [11,999]
    /// 
    /// Constraints:
    /// 1. 2 <= n <= 10^4
    /// </summary>
    vector<int> getNoZeroIntegers(int n);

    /// <summary>
    /// Leet code #1318. Minimum Flips to Make a OR b Equal to c
    ///
    /// Medium
    ///
    /// Given 3 positives numbers a, b and c. Return the minimum flips required 
    /// in some bits of a and b to make ( a OR b == c ). (bitwise OR operation).
    /// Flip operation consists of change any single bit 1 to 0 or change the 
    /// bit 0 to 1 in their binary representation.
    /// 
    /// Example 1:
    /// Input: a = 2, b = 6, c = 5
    /// Output: 3
    /// Explanation: After flips a = 1 , b = 4 , c = 5 such that (a OR b == c)
    ///
    /// Example 2:
    /// Input: a = 4, b = 2, c = 7
    /// Output: 1
    ///
    /// Example 3:
    /// Input: a = 1, b = 2, c = 3
    /// Output: 0
    ///
    /// Constraints:
    /// 1. 1 <= a <= 10^9
    /// 2. 1 <= b <= 10^9
    /// 3. 1 <= c <= 10^9
    /// </summary>
    int minFlips(int a, int b, int c);
};
#endif
