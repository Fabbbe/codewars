fn descending_order(x: u64) -> u64 {

    let mut res = 0;

    let mut length = 0;
    let mut x_tmp = x;
    while x_tmp != 0 {
        length += 1;
        x_tmp /= 10;
    }

    // not mutable anymore
    let length = length;
    let mut power = length-1;

    // loop through every digit (biggest first)
    for digit in (0..=9).rev() {
        // loop through every number
        let mut temp = x;
        for _n in 0..length {
            if temp%10 == digit {
                res += digit*(10_u64.pow(power as u32));
                power -= 1;
            }
            temp /= 10;
        }
    }

    res
}

fn descending_order_string(x: u64) -> u64 {
    // This allocates a buffer on the heap, which is :-(
    let s = x.to_string(); 
    let mut s = s.into_bytes();

    // Reverse sort
    s.sort_by(|a, b| b.cmp(a));

    // Recreate string and parse it as u64
    str::from_utf8(&s).unwrap().parse::<u64>().unwrap()
}
