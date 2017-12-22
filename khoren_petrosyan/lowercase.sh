#!/bin/bash

echo Write anything, and I\'ll lowercase it!!!
read text
echo $text | perl -ne 'print lc'

