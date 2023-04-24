#!/bin/bash
cd BadgeProject/build
cmake ..
make
cd TestP
cd ..
cd ..
echo "check test file"
ls /home/runner/work/TestBadge/TestBadge/BadgeProject/TestP/tst_cal_test.cpp
echo "check gcno"
ls /home/runner/work/TestBadge/TestBadge/BadgeProject/build/TestP/CMakeFiles/cal_test.dir/tst_cal_test.cpp.gcno
echo "check gcno ..."
ls /home/runner/work/TestBadge/TestBadge/BadgeProject/build/TestP/CMakeFiles/cal_test.dir/tst_cal_test.cpp.gcno
pwd
tree
