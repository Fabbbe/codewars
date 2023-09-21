// Link to kata: https://www.codewars.com/kata/526571aae218b8ee490006f4

fn count_bits(n: i64) -> u32 {
    let mut sum = 0;
    for i in 0..63 {
        sum += (n >> i) & 1;
    }
    sum as u32
}

fn main() {
    assert_eq!(count_bits(0), 0);
    assert_eq!(count_bits(4), 1);
    assert_eq!(count_bits(7), 3);
    assert_eq!(count_bits(9), 2);
    assert_eq!(count_bits(10), 2);
}
