
fn main(){
    let  mut x: f64 = 0.0;

    let ptr: *mut f64 = &mut x;

    let ptr_ptr: *mut *mut f64 = &mut(ptr as *mut f64);

    unsafe{
        **ptr_ptr = 100.0;
    }

    println!("x = {}", x);
}