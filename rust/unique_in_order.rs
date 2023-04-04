// Link to kata: https://www.codewars.com/kata/54e6533c92449cc251001667/

fn unique_in_order<T>(sequence: T) -> Vec<T::Item>
where
    T: std::iter::IntoIterator,
    T::Item: std::cmp::PartialEq + std::fmt::Debug,
{
    let mut res: Vec<T::Item> = vec![];

    for item in sequence {
        if res.last() != Some(&item) {
            res.push(item);
        }
    }

    res
}

// Solution using the dedup method, the code is cleaner, but less interesting.
fn unique_in_order_dedup<T>(sequence: T) -> Vec<T::Item>
where
    T: std::iter::IntoIterator,
    T::Item: std::cmp::PartialEq + std::fmt::Debug,
{
    let mut vec: Vec<_> = sequence.into_iter().collect();
    vec.dedup();
    vec
}
