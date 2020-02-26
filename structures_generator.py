import string
import random

size = 200

random.choice(string.ascii_letters)

generated = []

types = ["HELLO", "SOMEONE", "SMELLS", "LIKE", "HOPELESS_CRACKERS", "FEEL_OFF_A_CHICKEN", "IN_THE_WINTER"]

def rcap():
    return random.choice(string.ascii_letters).upper()

for i in range(size):
    generated.append({
        'key': f"{rcap()}{rcap()}",
        'desc': ''.join(random.choices(string.ascii_uppercase + string.digits, k=random.randrange(10, 20))),
        'kind': types[random.randrange(len(types))]
    })

with open("src/structures.h", "w") as f:
    f.write("""
#pragma once

#include <unordered_map>
#include <map>
#include <vector>
#include <string>

using namespace std;

namespace test {
    struct S {
        string key;
        string desc;
        string type;
    };
""")

    f.write("const unordered_map<int, std::string> num_to_key = {\n")
    for i in range(len(generated)):
        f.write("  {" + f'{i}' + f', "{generated[i]["key"]}"' + "},\n")
    f.write("};\n")

    f.write("const vector<std::pair<string, S>> vec = {\n")
    for t in generated:
        full_str = '  {"' + t['key'] + '", {' + f'"{t["key"]}"' + ', ' + f'"{t["desc"]}"' + ', ' + f'"{t["kind"]}"' + '}},\n'
        f.write(full_str)
    f.write("};\n")

    f.write("const unordered_map<string, S> u_mp = {\n")
    for t in generated:
        full_str = '  {"' + t['key'] + '", {' + f'"{t["key"]}"' + ', ' + f'"{t["desc"]}"' + ', ' + f'"{t["kind"]}"' + '}},\n'
        f.write(full_str)
    f.write("};\n")

    f.write("const map<string, S> mp = {\n")
    for t in generated:
        full_str = '  {"' + t['key'] + '", {' + f'"{t["key"]}"' + ', ' + f'"{t["desc"]}"' + ', ' + f'"{t["kind"]}"' + '}},\n'
        f.write(full_str)
    f.write("};\n")

    f.write("}")