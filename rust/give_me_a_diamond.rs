// Link to kata: https://www.codewars.com/kata/5503013e34137eeeaa001648

fn print(n: i32) -> Option<String> {
    if n <= 0 || n % 2 == 0 {
        return None;
    }

    let mut outstring = String::new();
    for i in 0..n {
        let spaces = (n/2 - i).abs();
        let stars = n - 2 * spaces;
        outstring.push_str(&" ".repeat(spaces as usize));
        outstring.push_str(&"*".repeat(stars as usize));
        outstring.push('\n');
    }

    Some(outstring)
}


fn main() {
    assert_eq!(print(3), Some(" *\n***\n *\n".to_string()) );
    assert_eq!(print(5), Some("  *\n ***\n*****\n ***\n  *\n".to_string()) );
    assert_eq!(print(-3),None);
    assert_eq!(print(2),None);
    assert_eq!(print(0),None);
    assert_eq!(print(1), Some("*\n".to_string()) );
}
