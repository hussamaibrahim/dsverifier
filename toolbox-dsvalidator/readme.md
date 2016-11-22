#DSVerifier Validation

In order to reproduce all counterexamples in MATLAB, some scripts were developed to perform and check automatically the reproduction of dsverifier counterexamples.

##Configuration:

* Required tools to run the scripts: Linux/MATLAB;
* MATLAB version: 2016a (minimum);
* Support for CBMC 5.5 and ESBMC 3.0

##Installation:

* Execute the file **DSVerifier Counterexamples Validation.mltbx** to install automatically the toolbox.

##Steps to run the validation:

**Precondition:**

You need to have a directory with all counterexamples (i.e. .out files) generated by DSVerifier.

*How can a user generate '.out' file in DSVerifier?*

Run in command line the verification using the --show-ce-data.

Example: 

*dsverifier input.c --property OVERFLOW --realization DFI --x-size 10 --bmc CBMC --solver boolector --show-ce-data > ds1_overflow_DFI.out*

Where: 
* ds1_overflow_DFI.out is the output file generated from verification;
* --show-ce-data: ensuring that a counterexample will be printed in .out file.

1) Call the function **'dsv_validation'**

*>> dsv_validation(path, property, ovmode, rmode, filename);*

**path** is the directory with all counterexamples and **property** is the *property* to be validated. It could be:
* 'm': for Minimum Phase Validation;
* 's': for Stability Validation;
* 'o': for Overflow Validation;
* 'lc': for Limit Cycle Validation.

**vmode** is the overflow mode. The values could be:
* 'saturate' for saturate overflow     
* 'wrap' for wrap around overflow

**rmode** is the rounding mode. The values could be:
* 'round' to use round as rounded mode
* 'floor' to use floor as rounded mode

**filename:** the name of .MAT file generated as result from validation. By default, the value is 'digital_system'.

Examples of usage:

*dsv_validation('/home/user/log/limit_cycle/','lc','wrap','round','ds_limit');*

*dsv_validation('/home/user/log/limit_cycle/','lc','saturate','floor','ds_limit');*

*dsv_validation('/home/user/log/overflow/','o','','','ds_overflow');*

*dsv_validation('/home/user/log/stability/','s','wrap','round','ds_stability');*


2) .MAT File:
You can see all counterexamples extracted from .out files as variables in MATLAB. The counterexamples are organized as a group of structs.

##MATLAB Results:
After you run the automatic validation, a .MAT file is generated with all counterexamples extracted and their results from validation: Successful or Failed.

* Successful: this means that the validation is OK;
* Failed: the validation performed by MATLAB has a different result of DSVerifier.

You can check the counterexamples saved in .MAT file either, it's implemented and organized as a group of structs with informations about the digital system, implementation, inputs, outputs, realization, word length, dynamical range and sample time.

Beside that, a report will be printed in command workspace. Example:
 ```c
Running Automatic Validation...
 
Counterexamples Validation Report...
 
Test case 1 time: 0.19962 status: successful
Test case 2 time: 0.005506 status: successful
Test case 3 time: 0.00487 status: successful
Test case 4 time: 0.008773 status: successful
Test case 5 time: 0.002986 status: successful

General Report:
 
Total Successull: 5
Total Failed: 0
Total Tests: 5
Total Time Execution: 0.26169
 ```

##MATLAB Scripts:

There are 5 scripts developed to run the validation step by step:

1. **dsv_extraction**: extract all parameters from counterexamples folder;
2. **dsv_parser**: transform all parameters in variables on MATLAB workspace;
3. **dsv_simulation**: call realization scripts and run all counterexamples;
4. **dsv_comparison**: comparison between MATLAB and DSVerifier outputs.
5. **dsv_report**: report about the reproduction of all counterexamples in MATLAB.

All these scripts are called in **dsv_validation** and it runs all this steps automatically.

In dsv_extraction, some shell scripts are called in order to manipulate strings and get the parameters required to validation. The scripts are organized in **shell-scripts** directory.

The MATLAB models are implemented as scripts in **DFI, DFII and TDFII** realization.