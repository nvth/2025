pwn.college{AzPXwwvH-XGFRdEth6HsVNqCQBr.QX5QTN0wCN2gjNwEzW}

Imagine we want to access some file located at /tmp/a/b/my_file.

If my cwd is /, then a relative path to the file is tmp/a/b/my_file.
If my cwd is /tmp, then a relative path to the file is a/b/my_file.
If my cwd is /tmp/a/b/c, then a relative path to the file is ../my_file. The .. refers to the parent directory.
`relitive path not start with /`