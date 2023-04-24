          cd BadgeProject/build
          cmake ..
          make
          cd TestP
          ctest -j4 --output-on-failure --extra-verbose --timeout 300 --coverage
