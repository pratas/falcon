#!/bin/bash
git clone https://github.com/pratas/falcon.git
cd falcon/src/
cmake .
make
cd ../../
cp falcon/src/FALCON .
cp falcon/scripts/GetHumanCHMParse.sh .
cp falcon/scripts/DownloadBacteria.pl .
rm -fr falcon/
perl DownloadBacteria.pl
. GetHumanCHMParse.sh
rm -f CHM;
for((x=1; x<=23 ; ++x)); do cat CHM$x >> CHM; rm -f CHM$x; done
(time ./FALCON -F -v -l 38 -c 90 -n 1 -t 1000 -x TOP-CHM CHM Bacteria.fa ) &> REPORT-CHM
