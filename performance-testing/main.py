import random


def tiger_files():
    extension = "tig"

    prefix = "let\n  var sum : int := 0\n"
    middle = "in\n"
    suffix = "  sum\nend"

    for LOC in range(100, 1100, 100):
        filename = str(LOC) + "-LOC." + extension

        my_file = open(filename, "w")

        content = ""
        functions = ""
        calls = ""

        for i in range(LOC // 2):
            functions += "  function add_int_n" + str(i) + "(x : int) : int = x + " + str(random.randint(0, 1000)) + "\n"
            calls += "  sum := sum + add_int_n" + str(i) + "(" + str(i) + ");\n"

        content = prefix + functions + middle + calls + suffix

        my_file.write(content)

        my_file.flush()
        my_file.close()


def cpp_files():
    extension = "cpp"

    prefix = ""
    middle = "\nint main(void) {\n  long long_sum = 0;\n"
    suffix = "}"

    for LOC in range(100, 1100, 100):
        filename = str(LOC) + "-LOC." + extension

        my_file = open(filename, "w")

        content = ""
        functions = ""
        calls = ""

        for i in range(LOC // 2):
            functions += "  long add_long_n" + str(i) + "(long x) { return x + " + str(random.randint(0, 1000)) + "; }\n"
            calls += "  long_sum += add_long_n" + str(i) + "(" + str(i) + ");\n"

        content = prefix + functions + middle + calls + suffix

        my_file.write(content)

        my_file.flush()
        my_file.close()


#tiger_files()
cpp_files()
