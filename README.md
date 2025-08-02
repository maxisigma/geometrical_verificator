# geometrical_verificator
This C program determines whether a given point lies **inside or outside** a **circle** and a **rectangle** on a Cartesian plane. Based on user-provided coordinates, it calculates the point’s relative position with respect to both shapes.
# Point Verification in Circle and Rectangle (C Language)

## 🧮 What Does It Do?

1. Prompts the user to enter:
   - The center and radius of the circle.
   - Coordinates of two opposite vertices of the rectangle.
   - Coordinates of the point to analyze.
2. Verifies:
   - If the point is inside the circle.
   - If the point is inside the rectangle.
   - If the point is inside both or neither.
3. Displays the result in the terminal.

---

## ⚙️ Compilation

Use a C compiler like `gcc` to compile the program:

```bash
gcc -o verifier verifier.c -lm
