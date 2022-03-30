-- Link to challenge: https://www.codewars.com/kata/514b92a657cdc65150000006/
module MultiplesOf3And5 where

-- Returns the sum of all integers smaller than n that are divisable by 3 or 5
solution :: Integer -> Integer
solution n = sum [x | x <- [1..(n-1)], x `mod` 3 == 0 || x `mod` 5 == 0]
