#!/usr/bin/python
import sys

def handleContents(contents):
    # Number of inputs
    numInputs = int(contents[0].split()[1])

    # Number of outputs
    numOutputs = int(contents[1].split()[1])

    # Number of terms
    numTerms = int(contents[2].split()[1])

    # Prefix
    print "#include <stdint.h>"
    print "#include <stdio.h>"
    print "int main() {"

    print "uint8_t outforcer;"
    print "volatile uint8_t * out = &outforcer;"
    print "for(uint32_t rep = 0; rep < 200000000; rep++) {"

    print "uint8_t i_0 = 0xFF;"
    print "uint8_t i_1 = 0x00;"
    print "uint8_t i_2 = 0x00;"
    print "uint8_t i_3 = 0x00;"
    print "uint8_t i_4 = 0x00;"
    print "uint8_t i_5 = 0x00;"
    print "uint8_t i_6 = 0x00;"
    print "uint8_t i_7 = 0x00;"

    # Construct the raw terms
    for termIndex in range(numTerms):
        baseTerm = contents[3 + termIndex].split()[0]

        constructedBaseTerm = ""
        numTermsConstructed = 0
        for _ in range(len(baseTerm)):
            if baseTerm[_] == "1":
                if numTermsConstructed != 0:
                    constructedBaseTerm += "& "
                constructedBaseTerm += "i_"
                constructedBaseTerm += str(7 - _) + " "
                numTermsConstructed += 1
            elif baseTerm[_] == "0":
                if numTermsConstructed != 0:
                    constructedBaseTerm += "& "
                constructedBaseTerm += "(~i_"
                constructedBaseTerm += str(7 - _) + ") "
                numTermsConstructed += 1

        print "uint8_t r_" + str(termIndex) + " = " + constructedBaseTerm[:-1] + ";"

    # Construct the functional terms
    for outputBitIndex in range(numOutputs):
        constructedFunctionalTerm = "uint8_t o_" + str(outputBitIndex) + " = "
        outputTerms = 0
        for termIndex in range(numTerms):
            term = contents[3 + termIndex].split()[1]
            if term[7 - outputBitIndex] == "1":
                if outputTerms > 0:
                    constructedFunctionalTerm += "| "                
                constructedFunctionalTerm += ("r_" + str(termIndex) + " ")
                outputTerms += 1
        print constructedFunctionalTerm[:-1] + ";"

    # Suffix
    
    print "if(o_0) o_0 = 1;"
    print "if(o_1) o_1 = 1;"
    print "if(o_2) o_2 = 1;"
    print "if(o_3) o_3 = 1;"
    print "if(o_4) o_4 = 1;"
    print "if(o_5) o_5 = 1;"
    print "if(o_6) o_6 = 1;"
    print "if(o_7) o_7 = 1;"

    print "const uint8_t output = (o_7 << 7) | (o_6 << 6) | (o_5 << 5) | (o_4 << 4) | (o_3 << 3) | (o_2 << 2) | (o_1 << 1) | (o_0 << 0);"
#    print "fprintf(stdout, \"output: %02x\\n\", output);"
    print "*out = output;"
    print "}"
    
    print "}"


if len(sys.argv) < 2:
    print "need to provide an input netlist file"
else:
    f = open(sys.argv[1], "r")
    contents = f.readlines()
    handleContents(contents)
    f.close()

