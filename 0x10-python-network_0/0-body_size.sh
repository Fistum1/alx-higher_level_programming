#!/bin/bash
# It takes in a URL, sends a request and displays the size of the body
curl -sI "$1" | grep "Content-Length" | cut -d " " -f2
