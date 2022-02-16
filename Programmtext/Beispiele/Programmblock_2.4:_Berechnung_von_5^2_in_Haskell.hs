power :: Int -> Int
power b = b * b

main :: IO()
main = print (show (power 5))