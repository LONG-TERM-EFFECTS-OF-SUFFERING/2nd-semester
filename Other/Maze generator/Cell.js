
function index(x, y) {
	if (x < 0 || y < 0 || x > columns || y > rows) {
		return undefined
	} else return y * columns + x
}


class Cell {
	constructor(x, y) {
		this.x = x
		this.y = y
		this.walls = [true, true, true, true]
		this.visited = false
	}

	highlight() {
		const x = this.x * squareSize
		const y = this.y * squareSize

		noStroke()
		fill(255, 255, 175)
		rect(x, y, squareSize, squareSize)
	}

	checkNeighbors() {
		const x = this.x
		const y = this.y
		let neighbors = []

		const top = table[index(x, y - 1)]
		const right = table[index(x + 1, y)]
		const bottom = table[index(x, y + 1)]
		const left = table[index(x - 1, y)]

		if (top && !top.visited) {
			neighbors.push(top)
		}

		if (right && !right.visited) {
			neighbors.push(right)
		}

		if (bottom && !bottom.visited) {
			neighbors.push(bottom)
		}

		if (left && !left.visited) {
			neighbors.push(left)
		}

		if (neighbors.length > 0) {
			const random = floor(Math.random() * neighbors.length)

			return neighbors[random]
		} else {
			return undefined
		}
	}

	show() {
		const x = this.x * squareSize
		const y = this.y * squareSize

		stroke(255)

		if (this.walls[0]) {
			line(x, y, x + squareSize, y) // Top
		}
		if (this.walls[1]) {
			line(x + squareSize, y, x + squareSize, y + squareSize) // Right
		}
		if (this.walls[2]) {
			line(x + squareSize, y + squareSize, x, y + squareSize) // Bottom
		}
		if (this.walls[3]) {
			line(x, y + squareSize, x, y) // Left
		}

		if (this.visited) {
			noStroke() // Draw the rectangles without stroke
			fill(135, 175, 215)
			rect(x, y, squareSize, squareSize)
		}
	}
}


function removeWalls(currentCell, nextCell) {
	const x = nextCell.x - currentCell.x
	const y = nextCell.y - currentCell.y

	if (x === 1) { // Next cell on the left of the current cell
		currentCell.walls[1] = false // Remove right wall of the current cell
		nextCell.walls[3] = false // Remove left wall of the next cell
	} else if (x === -1) { // Next cell on the right of the current cell
		currentCell.walls[3] = false // Remove left wall of the current cell
		nextCell.walls[1] = false // Remove right wall of the next cell
	}

	if (y === 1) { // Next cell above current cell
		currentCell.walls[2] = false // Remove bottom wall of the current cell
		nextCell.walls[0] = false // Remove upper wall of the next cell
	} else if (y === -1) {
		currentCell.walls[0] = false // Remove upper wall of the current cell
		nextCell.walls[2] = false // Remove bottom wall of the next cell
	}
}
