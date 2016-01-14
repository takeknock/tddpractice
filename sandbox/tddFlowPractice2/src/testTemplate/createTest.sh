#setting
path="../"


cat templateTest.h | sed -e 's/TimeGrid/'$1'/g' > $1"Test.h"
cat templateTest.cpp | sed -e 's/TimeGrid/'$1'/g' > $1"Test.cpp"

# these blow have overwriting risk.
mv $1"Test.h" $path
mv $1"Test.cpp" $path



