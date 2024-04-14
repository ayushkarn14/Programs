import re

t = int(input())


def solve(tag):
    pattern = r"</([a-z][a-z0-9]*)>"
    match = re.match(pattern, tag)
    if match:
        print("SUCCESS")
    else:
        print("ERROR")


for i in range(t):
    solve(input())


# Example usage
tag1 = "</div>"
tag2 = "</h1>"
tag3 = "</123>"
tag4 = "</a1b2c3>"
tag5 = "</>"
tag6 = "</div123>"

print(check_html_closing_tag(tag1))  # Output: SUCCESS
print(check_html_closing_tag(tag2))  # Output: SUCCESS
print(check_html_closing_tag(tag3))  # Output: ERROR
print(check_html_closing_tag(tag4))  # Output: ERROR
print(check_html_closing_tag(tag5))  # Output: ERROR
print(check_html_closing_tag(tag6))  # Output: ERROR
