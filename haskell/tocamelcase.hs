-- Link to challenge: https://www.codewars.com/kata/517abf86da9663f1d2000003/
module CamelCase where
import Data.Char

-- Turns e.g. "hello_my_dude" to "helloMyDude"
toCamelCase :: String -> String
toCamelCase []      = []
toCamelCase ['-']   = []
toCamelCase ['_']   = []
toCamelCase [n]     = [n]
toCamelCase (n:n2:ns)
    | n `elem` ['-','_'] = toCamelCase ((toUpper n2):ns)
    | otherwise = n:(toCamelCase (n2:ns))
