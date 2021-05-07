# roadC
Read-Only Array Data Compaction (roadC)

Standard data compression techniques cannot be applied for traditional embedded systems since these systems are typically too restricted by timing constraints or by memory limitations. 

Read-Only Array Data Compaction (roadC) addresses this problem: it is an approach for compression of read-only array data. The main advantage over standard approaches is the ability to access compressed data without any decompression, i.e. without any extra computational and memory costs.

Memory handling of CPUs can require special demands on the way data is stored in the memory. In this context roadC can handle data alignment, data structure padding, and memory protection. 

The core functionality of roadC is closely related the shortest common superstring problem (SCS): to find the shortest possible string that contains every string in a given set as substrings.

The roadC library is a reference implementation of the roadC algorithm. It is implemented in C and can be compiled using a C or C++ compiler.

## Short Desciption

Implementation of an optimized greedy approximation algorithm for the shortest common superstring problem (SCS). Additionally data alignment and data structure padding are supported. Data alignment restricts the start address of a data array. Typically the address is some multiple of the computer's word size to improve the system's performance. Data structure padding in handled on the finest granularity possible, on bit level.

## Quickstart Guide

1. Get the roadC library and type

    ```bash
    make all
    ```

2. Run the example programs, e.g.

    ```bash
    roadc-example1
    ```

**Happy coding!**

## Requirements

* gcc compiler

## Contributing

We welcome any contributions.  
If you want to contribute to this project, please read the [contributing guide](CONTRIBUTING.md).  
To get started with the development, please read the documentation.

## Code of Conduct

Please read our [Code of Conduct](CODE_OF_CONDUCT.md) as it is our base for interaction.

## License

This project is licensed under the [MIT LICENSE](LICENSE.md).

## Provider Information

Please visit <https://github.com/Daimler/daimler-foss/blob/master/LEGAL_IMPRINT.md> for information on the provider.

Notice: Before you use the program in productive use, please take all necessary precautions,
e.g. testing and verifying the program with regard to your specific use.
The program was tested solely for our own use cases, which might differ from yours.
