package main

import "fmt"

func main() {
	a := []int{1, 2, 8, 3, 10, 23, 32, 45}

	fmt.Println(a[1:5])
	fmt.Println(a[1:])
	fmt.Println(a[:5])

}
