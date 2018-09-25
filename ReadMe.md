## NuclearData package from Lanzhou University

"nuclear_data_of_12435_nuclei.xlsx" and "NuclearData/data_table.txt"
contain the binding energies, separation energies, decay energies,
and the pairing energy gap information of 12435 nuclei.

NuclearData package provides a c++ class, named NuclearData,
which is used to get the nuclear binding energies,
one-nucleon and two-nucleon separation energy (Sn, Sp, S2n, S2p),
alpha- and beta-decay energies (Q_alpha and Q_beta-, Q_beta+, Q_betaEC),
pairing gap Delta_n, pairing gap Delta_p.

## Usage

tar zxvf NuclearData_LZU.tar.gz

cd NuclearData_LZU

cd NuclearData

make clean

make

./test

"NuclearData/test.cpp" gives a demonstration, which can be modified with the users' interests.

## Contact

For questions and discussions,
zhanghongfei@lzu.edu.cn ; mann13@lzu.edu.cn
