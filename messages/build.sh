#!/bin/bash

protoc -I=. --cpp_out=. ./parameters.proto
