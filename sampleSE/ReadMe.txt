========================================================================
    CONSOLE APPLICATION : sampleSE Project Overview
========================================================================

AppWizard has created this sampleSE application for you.

This file contains a summary of what you will find in each of the files that
make up your sampleSE application.


sampleSE.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

sampleSE.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

sampleSE.cpp
    This is the main application source file.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named sampleSE.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
I have created a ref.txt file which tells about the input file, output file
and the column number for each value in input file.I have also added a delimiter.

In future if there are any changes in the input format, ref.txt file should be 
modified with appropriate column number. If there is change in delimiter of inputfile,
ref.txt should be updated with new delimiter.


We have defined seperate classes for parsing reference file, Input file.
Input::ParseInput has operation to generate values that are required to create output.
There is a std::map<ticker,output> which stores all the values. Since currently there are
only few tickers, we are using map. If relatively larger number of unique tickers are to 
be present, we can replace std::map with std::unorderedmap<_Tk,_Tv> to improve efficiency
as in Input::ParseInput we are searching through the map is there is already an entry
for the ticker that is parsed from input.


To run the program, open the solution in visual studio and set the reference file path as
input for the application.
In reference file you need to give correct file path for input and output file.




