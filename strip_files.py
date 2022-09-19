import chardet
from pathlib import Path
import argparse
import os


EXTENSIONS = ('*.c', '*.cpp', '*.h', '*.fx', '*.ini', '*.txt', '*.ani')


def strip_file(filename):
    print(f'{filename}')
    content = ''

    with open(filename, 'r') as file:
        for line in file:
            line = line.rstrip()
            content += line + '\n'

    with open(filename, 'w') as f:
        f.write(content)

    return True


def process_directory(path):
    files = []
    for ext in EXTENSIONS:
        files.extend(Path(path).rglob(ext))

    errors = []
    for filename in files:
        if not strip_file(filename):
            errors.append(filename)

    return errors


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("path", help="root directory for a file search")
    args = parser.parse_args()

    path = os.path.abspath(args.path)
    errors = process_directory(path)

    if errors:
        print("errors:")
        for x in errors:
          print(x)
