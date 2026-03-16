f x = x^2 - 2
df x = 2*x
x0 = 1.0
n = 10

mnr :: (Double -> Double) -> (Double -> Double) -> Double -> Integer -> Double
mnr f df x0 n = x' n
  where
    x' 0 = x0
    x' n = x' (n - 1) - f (x' (n - 1)) / df (x' (n - 1))

main :: IO ()
main = do
  let root = mnr f df x0 n
  putStrLn $ "Raiz aproximada: " ++ show root  