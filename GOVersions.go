package main
import "fmt"
import "math/rand"
import "strconv"

func printString(input string) {
fmt.Println(input)
}

func random1DArray(size int) []int{
array := make([]int, size)
for i:=0; i<len(array); i++{
array[i] = rand.Int()
}
return array
}

func intRand2DArray(row int, col int) [][]int {
var mat = make([][]int, row)
for i := range mat {
mat[i] = make([]int, col)
}
for i:=0; i<row; i++ {
for j:=0; j<col; j++ {
temp := rand.Int()%2
rI := rand.Intn((2147483647-0)-0)
if temp == 0{
mat[i][j] = rI
}else{
mat[i][j] = ((rI -1) *-1)
}
}
}
return mat
}

func int2DToString(matrix [][]int) string {
    s := ""
    rows := len(matrix)
	cols := len(matrix[0])
	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++{
		s = s + strconv.Itoa(matrix[i][j]) + " "
		}
		s = s + "\n"
	}

	return s
}

func promptForInput(msg string) string {
var userInput string
fmt.Scanln(&userInput)
fmt.Println(msg)
return userInput
}

func orderedArray(size int) []int {
var a []int
a = make([]int, size)
for i := 0; i<size; i++{
a[i] = i
}
return a
}

func int2D10x(row int, col int) [][]int {

grid := make([][]int, row)

for i := 0; i < row; i++ {
grid[i] = make([]int, 3)
}

for i := 0; i < row; i++ {
for j := 0; j < col; j++{
grid[i][j] = i*10+j;
}
}

return grid
}

func sumArray(input[] int)int {
result := 0;
for e := range input{
result += input[e];
}
return result;
}

func averageArray(input[] int)int {
result := 0;
for e := range input{
result += input[e];
}
return result/len(input)
}

func sum2D(arr [][]int) int {
sum := 0;
for i := 0; i < len(arr); i++ {
for j := 0; j < len(arr[0]); j++ {
sum = sum + arr[i][j]
}
}
return sum
}

func main() {
    fmt.Println("Hello World")
}