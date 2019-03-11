INSTALL
-------
# Create environment and install mcfit
conda create -n CLEFT-env -c bccp mcfit statsmodels nb_conda matplotlib 


RUN
---
on helios:
run job

on laptop:
cd ps_py3_package/
source activate CLEFT-env
python3 main.py --pfile pklin_RunPB.txt --saveq True --saver True --saveqfunc True
python3 main.py --pfile pklin_RunPB.txt --qfile pklin_RunPB_cleftQ_z000.txt --rfile pklin_RunPB_cleftR_z000.txt

