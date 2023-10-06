cmake_minimum_required(VERSION 2.8)

project(CSP-Solver)
add_executable(${PROJECT_NAME} "main.cpp" "core-element/Variable.cc" "core-element/Variable.hh" "core-element/Constraint.cc" "core-element/Constraint.hh" "solver/Solver.cc" "solver/Solver.hh"
    "global-constraint/allDiff/AllDifferent.cc" "global-constraint/allDiff/AllDifferent.hh"
    "global-constraint/cumulative/cumulative.cc" "global-constraint/cumulative/cumulative.hh"
)
