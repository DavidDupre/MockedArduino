# Mocked Arduino

This repository shows how Arduino projects can be run as console applications without a real emulator. `mocked_arduino.ino` is the Arduino entry point, wrapping the real functionality in `sat.cpp`. The `sat.cpp` file also includes the `main` function as an entry point for the console application.

Every file in `src` that includes `Arduino.h` must also include `mock_arduino.h`.

Libraries can also be mocked out by including empty versions of their header files in `include/` and adding mocked versions to `mock_arduino` (or other files with a `#ifdef EMULATED` guard).
