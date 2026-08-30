# Learning Git and GitHub

This repository is a beginner-friendly space to learn Git commands and GitHub working methods step by step.

## What You Will Learn

- Core Git commands
- Daily Git workflow (edit → stage → commit → push)
- Branching and merging
- Conflict resolution basics
- GitHub collaboration (issues, pull requests, reviews)

## Git Command Cheat Sheet

### Setup

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git --version
```

### Start a Repository

```bash
git init
git clone <repository-url>
```

### Check Status and History

```bash
git status
git log --oneline --graph --decorate --all
```

### Stage and Commit

```bash
git add <file-name>
git add .
git commit -m "your commit message"
```

### Work with Remotes

```bash
git remote -v
git push origin <branch-name>
git pull origin <branch-name>
```

### Branching

```bash
git branch
git checkout -b <new-branch>
git switch <branch-name>
git merge <branch-name>
```

### Undo and Fix

```bash
git restore <file-name>
git restore --staged <file-name>
git revert <commit-hash>
git reset --soft HEAD~1
```

## Git Working Method (Recommended)

1. Pull latest changes from the main branch.
2. Create a new branch for your task.
3. Make changes in small steps.
4. Run `git status` and review changes.
5. Stage and commit with a clear message.
6. Push branch to GitHub.
7. Open a Pull Request.
8. Address review comments.
9. Merge after approval.

## GitHub Working Method

### 1) Issues
- Create an issue for each bug/feature.
- Add clear title, description, and labels.

### 2) Pull Requests
- Keep PRs focused on one task.
- Explain what changed and why.
- Link the related issue.

### 3) Code Review
- Request review from collaborators.
- Discuss improvements in comments.
- Update code and push again.

### 4) Merge and Cleanup
- Merge after checks pass.
- Delete merged branch.

## Practice Plan

- Day 1: `init`, `clone`, `status`, `add`, `commit`
- Day 2: `push`, `pull`, `log`, `branch`, `switch`
- Day 3: `merge`, conflict resolution
- Day 4: issue + pull request workflow on GitHub

## Goal of This Repository

By practicing here regularly, you will build confidence in both Git commands and GitHub collaboration workflow used in real projects.
