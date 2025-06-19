# Maximum-Weight-Difference



### 🧠 **Goal**:

Chef and his son split **N items** (with known weights) into **two groups**, where **one group has exactly K items**.
Chef carries the heavier group; his son carries the other.
We need to **maximize the difference** between the weights they carry.

---

### ✅ **Key Idea**:

To **maximize the difference**, try both of these:

1. **Son gets the K lightest items** → So Chef carries the heaviest ones.
2. **Son gets the K heaviest items** → So Chef is forced to take the light ones.

Then pick **the better of the two** options.

---

### 🧮 **Steps in Code**:

1. **Input**: Read number of test cases `T`.

2. For each test case:

   * Read `N` (number of items) and `K`.
   * Read the `N` weights into a vector.
   * Calculate the total weight of all items.
   * Sort the weights in ascending order.

3. **Two Scenarios**:

   * **Case 1**: Son gets the `K` lightest items (first `K` in sorted list).
   * **Case 2**: Son gets the `K` heaviest items (last `K` in sorted list).

4. **Compute weight difference**:

   * In each case, compute weight carried by Chef = total - son's weight.
   * Then compute `abs(ChefWeight - SonWeight)`.
   * Output the **maximum** of both cases.

---

### 📦 Example:

If weights are: `1 2 3 4 5`, N = 5, K = 2
Sorted: `1 2 3 4 5`, Total = 15

* Son gets `1 2` → sum = 3 → Chef gets `12` → diff = 9
* Son gets `4 5` → sum = 9 → Chef gets `6` → diff = 3
  **Max difference = 9**

---

Let me know if you'd like a [visual walkthrough](f) or [trace on input](f).
