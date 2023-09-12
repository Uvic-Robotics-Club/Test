# Git Test Repo

- cloned this repo
- made a branch
- added a file
- made a commit
- opened a Pull Request (PR)
- merged code!


# Clone Repository
(remember: '#' means something is just a helpful comment. Enter the commands that come after '$')
```
# Navigate to the directory where you want to clone this repo.
# (ideally somewhere that's not inside another git repo!)
# For example:
$ cd ~

# Clone the repo:
$ git clone https://github.com/Uvic-Robotics-Club/Test.git

$ cd Test
$ git status
... on branch master ...
```

If you see 'on branch master,' you've successfully cloned the repo!

# Make a Commit on a New Branch
You're on branch master, but it's not good practice to make your changes here. Instead, make a new branch:

```
# When you see <...> in this context, that typically means you should replace that
# phrase, including the '<' and '>'.
$ git checkout -b <your_name>/intro-branch  # example: git checkout -b Joshua-Gabriel/intro-branch
```
Make a new file in it and call it your name:
```
touch <FirstLast>.txt
```

Now, edit the file and include following information:
Your name, pronouns, year in school, and major
A sentence or two describing your previous programming experience
A few sentences describing what you enjoy doing outside of school and rover

You can do this either from the terminal, with vim or nano, or from a standard editor like VSCode.
```
vim <FirstLast>.txt
```

When you're done editing, you can run git status and the file name should appear in red text. Add it to git:
```
# Adding a file to git prepares it to be committed.
$ git <FirstLast>.txt
```

If you run git status again, the file name should have turned green. Now make a commit with a helpful message:
```
git commit -m "Create <FirstLast>.txt"
```

Creating a commit save the current state of your added changes. If this is unfamiliar, read more about commits here.

Finally, push your commit to the remote repository hosted on GitHub:

```
git push origin <initials>/intro-branch
```

# Make a Pull Request
A pull request (PR) is a request to merge code from one branch into another. Rather than doing this locally in the terminal like most Git operations, this is done through Github in your browser.
Your goal is to merge your new branch, <initials>/intro-branch, into master. First, make sure your branch was successfully pushed to the remote repository on Github. 

Look for a drop down menu that currently says master. Click on the drop down, and search through the branch names until you find your own. If you see this, you're in luck!

There are multiple ways to actually create the PR, but the most reliable is as follows:

1) Make sure you are in the main repo, for this case, the [Test Repo](https://github.com/Uvic-Robotics-Club/Test). Click "Pull Request" at the top of the page.
2) Click the green button that says 'New pull request.'
3) This will give you options for a 'base' branch and a 'compare' branch. The 'base' branch should be master because master is the branch you are merging into. The 'compare' branch should be the new branch that you pushed to the remote repo in the steps above. This will allow you to see exactly what changes your new branch would add to master.
4) Ideally, some green text should show up, saying 'Able to merge.' Now click the green button that says 'Create pull request.' In future PRs, you may not get the confirmation saying 'Able to merge' because there are conflicts between changes on your branch and master. This is okay -- you can still create the PR and fix the conflicts afterwards.
5) Make sure the editable text box has a reasonable message that accurately sums up your changes.
6) Decide who should review the PR and add them by searching for them on the right hand side. Who should review a PR is highly dependent on the changes you're making, but keep in mind it's generally best to add too many people rather than too few. For this PR, add Joshua Blanch and at least one other software member (preferably someone who has never reviewed a PR).
7) Finally, create the pull request!

# Merge Your Changes
If you closed the tab and need to get back to it, you should be able to again go to the 'pull requests' tab for the repo and find yours among the list.

Once a PR has been approved by all reviewers, press the green button that says 'Merge pull request.' Fill in any boxes with reasonable information, and finalize the merge!
