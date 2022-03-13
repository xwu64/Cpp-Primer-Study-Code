g++ standard_input_output.cc --std=c++17 -o standard_input_output
echo "Enter a number: "
./standard_input_output > out.log 2> err.log
echo "out.log:"
cat out.log
echo "err.log:"
cat err.log
rm standard_input_output out.log err.log