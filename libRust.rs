use std::os::raw::c_char;
use std::fs::File;
use std::io::prelude::*;


pub fn print_hello_world() {
    let mut file = File::create("example.txt").expect("Failed to create file");
    let data = "Hello from Rust!";
    file.write_all(data.as_bytes()).expect("Failed to write data");

}

pub fn get_array(arr: *mut *mut c_char, len: size_t) {
}