g++ simple_program.cc --std=c++17 -o simple_program
echo "Running simple_program with arguments: 0"
./simple_program 0
echo "program return value: $?" # `$?` denotes the exit status of the last executed command

echo "Running simple_program with arguments: -1"
./simple_program -1
echo "program return value: $?" # return 255 since the return code from a shell function (and from any Unix/Linux program) is a single byte

rm simple_program