// Link to kata: https://www.codewars.com/kata/54da539698b8a2ad76000228

fn is_valid_walk(walk: &[char]) -> bool {
    let mut lat = 0;
    let mut long = 0;

    for c in walk {
        match c {
            'n' => lat += 1,
            's' => lat -= 1,
            'w' => long += 1,
            'e' => long -= 1,
            _ => (),
        }
    }

    if walk.len() == 10 && lat == 0 && long == 0 {
        return true;
    }
    false
}

fn main() {
    assert!(  is_valid_walk(&['n','s','n','s','n','s','n','s','n','s']));
    assert!(! is_valid_walk(&['w','e','w','e','w','e','w','e','w','e','w','e']));
    assert!(! is_valid_walk(&['w']));
    assert!(! is_valid_walk(&['n','n','n','s','n','s','n','s','n','s']));
    assert!(! is_valid_walk(&['e', 'e', 'e', 'e', 'w', 'w', 's', 's', 's', 's']))
}
