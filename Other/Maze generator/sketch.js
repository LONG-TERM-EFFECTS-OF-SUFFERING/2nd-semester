let columns,rows
let squareSize = 10
var table = []
var current
var stack = []


function setup() {
	createCanvas(400, 400)
	frameRate(60)

	columns = floor(width / squareSize)
	rows = floor(height / squareSize)

	for (var y = 0 ; y < rows ; y++) {
		for (var x = 0 ; x < columns ; x++) {
			var cell = new Cell(x, y)
			table.push(cell)
		}
	}

	current = table[0] // Starting cell of the route
}


function draw() {
	background(188, 188, 188)

	for (let cell of table) {
		cell.show()
	}

	current.visited = true

	current.highlight()
	// STEP 2 Choose one of the unvisited neighbors
	const next = current.checkNeighbors()

	if (next) {
		next.visited = true
		// STEP 1 Push the current cell to the stack
		stack.push(current)

		//STEP 3 Remove the wall between the current cell and the chosen cell
		removeWalls(current, next)

		// STEP 4 Mark the chosen cell as visited and push it to the stack
		current = next
	} else if (stack.length > 0) current = stack.pop()
	else noLoop()
}
