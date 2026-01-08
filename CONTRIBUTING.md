# Contributing to Bug Hunt Codebase

Thank you for your interest in contributing! This guide will help you get started.

---

## 🚀 Getting Started

1. **Fork the Repository**

   - Click the "Fork" button in the top right corner of the repository

2. **Clone Your Fork**

   ```bash
   git clone https://github.com/YOUR_USERNAME/Push-It-Up.git
   cd Push-It-Up
   ```

3. **Create a Branch**
   ```bash
   git checkout -b fix/bug-name
   ```
   Use descriptive branch names like `fix/first-year-c-factorial` or `fix/second-year-python-fibonacci`

---

## 🐞 How to Fix a Bug

1. **Choose a Bug**

   - Browse through the directories: `First_Year/`, `Second_Year/`, `Third_Year/`
   - Pick a buggy file that interests you
   - Each file contains comments indicating the bug location

2. **Understand the Bug**

   - Read the comments marked with `// BUG:` or `# BUG:`
   - Run the code to see the error
   - Analyze what's wrong and why

3. **Fix the Bug**

   - Make minimal changes - only fix the reported bug
   - Don't refactor or change unrelated code
   - Test your fix thoroughly

4. **Add Comments**
   - Add a comment explaining your fix
   - Use the format: `// FIXED:` or `# FIXED:` followed by explanation
   - Example: `// FIXED: Changed i <= n to i < n to avoid array out of bounds`

---

## 📝 Commit Guidelines

Write clear, descriptive commit messages:

```bash
git add .
git commit -m "Fix: [Language/Year] - [Brief Description]"
```

**Examples:**

- `Fix: First_Year/C - Fix factorial infinite loop by adding i++`
- `Fix: Second_Year/Python - Correct Fibonacci base cases`
- `Fix: Third_Year/CPP - Fix Dijkstra's algorithm visited array check`

---

## 🔍 Testing Your Fix

Before submitting, ensure your fix works:

**For C/C++:**

```bash
gcc bug_name.c -o bug_name
./bug_name
```

**For Python:**

```bash
python bug_name.py
```

**Verify the output matches the expected result** mentioned in the comments.

---

## 📤 Submit a Pull Request

1. **Push Your Changes**

   ```bash
   git push origin fix/bug-name
   ```

2. **Open a Pull Request**

   - Go to the original repository
   - Click "Pull Request" button
   - Fill in the PR template:
     - **Title:** Clear, concise bug fix description
     - **Description:** Explain what bug you fixed and how
     - **Testing:** Mention how you tested the fix

3. **PR Template Example:**

   ```
   ## Description
   Fixed the factorial function in First_Year/C/bug_01_factorial.c

   ## Bug Details
   - Issue: Infinite loop due to missing i++ increment
   - Fix: Added i++ in the while loop

   ## Testing
   - Compiled with gcc
   - Tested with factorial(5) - Expected: 120 ✓
   ```

---

## ✅ Code of Conduct

- Be respectful and helpful
- No spam or self-promotion
- Constructive feedback only
- Follow the repository guidelines

---

## 🎯 One Bug Per PR

- Fix **only one bug** per pull request
- This makes code review easier
- Each PR should be focused and atomic

---

## 🏆 Recognition

Contributors will be recognized in:

- Repository README (Contributors section)
- Monthly highlights for top contributors
- Certificate of contribution

---

## ❓ Need Help?

- Check existing issues and PRs
- Ask questions in PR comments
- Open an issue to discuss approach

---

## 📌 Important Reminders

- ✅ Fix only the reported bug
- ✅ Add clear comments explaining the fix
- ✅ Test thoroughly before submitting
- ✅ Write descriptive commit messages
- ✅ One PR = One bug fix
- ❌ Don't refactor unrelated code
- ❌ Don't change variable/function names unnecessarily
- ❌ Don't submit multiple bugs in one PR

---

## 🤝 Let's Build Together!

We appreciate every contribution, whether it's code fixes, documentation, or ideas. Happy debugging! 🚀

**Remember:** _Debugging is not about fixing code — it's about understanding it._
