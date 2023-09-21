// Link to kata: https://www.codewars.com/kata/530e15517bc88ac656000716

fn rot13(message: &str) -> String {
    message.chars().map( |c|
        if c.is_ascii_alphabetic() {
            // Isolate the character into just the bits that count
            let s = c as u8 & 0b01100000;
            let l = c as u8 & 0b00011111;

            // Rotate the character
            let l = (l + 12) % 26 + 1;

            // Push it to the String
            (l | s) as char
        } else {
            c
        }).collect()
}

fn main() {

    const ERR_MSG: &str = "\nYour result (left) did not match the expected output (right)";

    fn dotest(s: &str, expected: &str) {
        assert_eq!(rot13(s), expected, "{ERR_MSG} with message = \"{s}\"")
    }

    dotest("abcdefghijklmnopqrstuvwxyz", "nopqrstuvwxyzabcdefghijklm");
    dotest("Test", "Grfg");
}

