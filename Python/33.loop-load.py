import time

curr = time.ctime(time.time())
print("Current time:", curr)
for i in range(99999):
    print(f" Loading... {i + 1}", end="\r")
print("\nDone!")  # Print a new line after completion
curr = time.ctime(time.time())
print("Current time:", curr)