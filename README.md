
# GCC-Bridge Example Project

This is an example of how the gcc-bridge plugin can be used independently of Renjin to compile
C and Fortran sources to JVM class files that can be used as any other JAR.

## Project Layout

The project follows the standard Maven layout:

```
src/main/c     -- C Sources
src/test/java  -- Java test sources demonstrating how the C files can be used
pom.xml        -- Maven setup
```

The C sources are taken as an example from the GNU R nmath library.

## Requirements

The GCC-Bridge maven plugin requires GCC 4.6 to be installed to compile C and Fortran Sources. 

You will also need Java  Apache Maven 3.x.

On Ubuntu, you can install all required tools via `apt-get`:

```
sudo apt-get install maven gcc-4.6 gcc-4.6-plugin-dev gfortran-4.6 gcc-4.6.multilib
```

## Compiling

You can build the java library by running

```
mvn install
```



 


