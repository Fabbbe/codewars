// Link to kata: https://www.codewars.com/kata/546f922b54af40e1e90001da

// This is an awful solution
fn alphabet_position(text: &str) -> String {
    let mut s = String::new();
    for character in text.chars() {
        if !character.is_ascii() {
            continue;
        }

        let c = character as u32;

        if c > 64 && c < 91 {
            let tmp = c - 64;
            let s_tmp = format!("{} ", tmp);
            s.push_str(&s_tmp);
        }
        else if c > 96 && c < 123 {
            let tmp = c - 96;
            let s_tmp = format!("{} ", tmp);
            s.push_str(&s_tmp);
        }
    }

    if s.len() != 0 {
        s.truncate(s.len()-1);
    }
    s
}

// This is a cooler solution
fn alphabet_position_iter(text: &str) -> String {
    text.to_lowercase()
        .chars()
        .filter(|c| c >= &'a' && c <= &'z')
        .map(|c| (c as u64 - 96).to_string())
        .collect::<Vec<String>>()
        .join(" ")
}

fn main() {
    println!("'{}'", alphabet_position_iter("test test test"));
    println!("'{}'", alphabet_position_iter(""));
    println!("'{}'", alphabet_position("test test test"));
    println!("'{}'", alphabet_position(""));
}
