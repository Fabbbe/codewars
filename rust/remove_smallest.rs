// Link to Kata: https://www.codewars.com/kata/563cf89eb4747c5fb100001b/

fn remove_smallest(numbers: &[u32]) -> Vec<u32> {
    
    // Find the lowest number in iter, if there is no lowest number return 
    // empty vector.
    let Some(lowest) = numbers.into_iter().min() else {return vec![]};

    let mut removed = false;
    numbers.clone().into_iter()
        .filter_map(|x| {
            if !removed && *x == *lowest {
                removed = true;
                return None;
            }
            Some(*x)
        })
        .collect::<Vec<u32>>()
}

