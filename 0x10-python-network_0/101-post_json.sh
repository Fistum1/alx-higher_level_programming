#!/bin/bash
# It sends a JSON POST request as first argument, displays a body of response
curl - sX POST - d "@$2" - H "Content-Type: application/json" "$1"
