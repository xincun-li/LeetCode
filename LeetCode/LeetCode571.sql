-----------------------------------------------------------------------
--  LeetCode 571. Find Median Given Frequency of Numbers
--  Hard
--
--  SQL Schema
--
--  The Numbers table keeps the value of number and its frequency.
--  +----------+-------------+
--  |  Number  |  Frequency  |
--  +----------+-------------|
--  |  0       |  7          |
--  |  1       |  1          |
--  |  2       |  3          |
--  |  3       |  1          |
--  +----------+-------------+
--  In this table, the numbers are 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 
--  so the median is (0 + 0) / 2 = 0.
--  +--------+
--  | median |
--  +--------|
--  | 0.0000 |
--  +--------+
--  Write a query to find the median of all numbers and name the result 
--  as median.
----------------------------------------------------------------
DECLARE  @TotalCount INT;
SELECT  @TotalCount = SUM(Frequency) FROM  Numbers;

SELECT
    AVG(CONVERT(NUMERIC(18,2), Number)) AS median
FROM
(
    SELECT 
        A.Number,
        MAX(A.Frequency) AS Frequency,
        SUM(CASE WHEN B.Number < A.Number THEN B.Frequency ELSE 0 END) AS Accumulate
    FROM Numbers AS A
    CROSS JOIN Numbers AS B
    GROUP BY A.Number
) AS T
WHERE  ((Accumulate <= (@TotalCount - 1) /2) AND ((@TotalCount - 1) /2 < (Accumulate + Frequency))) OR
       ((Accumulate <= @TotalCount /2) AND (@TotalCount /2 < (Accumulate + Frequency)))