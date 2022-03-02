# MidTermProject
John Brown and Kyle Hardison MidTermProject

Software Architecture Mid-Project

This should be done in a team 

The goal is pull together the following topic and make sure we understand how to they would work together.
We are going to stub out a fake application with several shared libraries.

I want you to make the following.
0)	Read the requirements.  Come up with estimate of the work needed.  And the end, compare your estimate to amount of time spent.  Evaluate why the estimate was met or not met.
1)	Make up a concept of application and briefly describe it.  The sky is the limit as long as it as PG friendly.  WorldDomination, Minecraft clone, or something like a email program.
2)	Generate scaffolding of your application
a.	We are going to make two executables.  One that is going to call into our UI libraries and be run interactive.  And the other executable is going to be a batch mode to run in a more automated fashion.
b.	I want a nice defined architecture to these libraries (this will be in your report, you can make a diagram using powerpoint or excel). I want a total of 7 libraries. 
i.	At least one of these should be considered core or lowest level library.  
ii.	At least one of these libraries should be considered a UI library.  Which depends upon the “core” and application libraries.
iii.	At least one of these libraries should be considered an application library.  Which does not depend upon the “UI” libraries, and depends upon the “core”.
iv.	These libraries at a particular level (UI, Application, core) can depend upon libraries at that level and lower.  I.e. an application library can depend upon another application library or lower “core” libraries.  But an application library cannot depend a UI library.
v.	Each of these libraries should consist of a header file and implementation file (C++).  And contain a class with some methods and\or functions.  These methods\functions do not need to do anything.  However you need to export your functions\classes so they are callable outside of you library.  We are making stubs (aka “no-ops”).  The idea here is to reflect a working application’s scaffolding\infrastructure.  You will need to put in a some cout statements for each call, so the grader can confirm that you called a method\function in each library.  
vi.	You will need to call a function\method in each library layer (as appropriate).  In the case of the batch mode executable it will not be calling into the “UI” libraries for example.
vii.	Your API can be anything, you can be boring, an have “BoringGenericUI” library, which has a function called “MakeBoringUI” and so on.  Or you can be cheeky and make an application called WorldDomination.  Just keep it PG (as in the movie rating).
3)	Using the boost library, use the localization utility to translate your “cout” statements.  At least one per library. Set up in the code to make it easier to switch between locales.  That is comment out the locale setting code so we can switch between English and say German (I’d use the german since that is what we did for the assignment, but if you want to do another language go for it).  This is similar to what I did in the code I provided you for showing how to do the translation.
a.	You will need to provide contexts for the .po file(s).  You can have a .po and .mo file per file, or I believe you should be able to concatenate the files to one.  I’d suggest putting it in one file.
b.	Again these statements don’t have to be real.  Saying “Obligatory statement 1” and translate that to “German Obligatory statement 1” is fine.  We are just going through the mechanics here.
c.	Call translation statements must use a context for the translator.   This context can be generic, but I expect to see these in the code and po files.  
4)	Digitally sign the binaries using “self -signing”.  Show output of signtool verify /pa /v <all binaries> in your report.
5)	Licensing.   Answer the following questions:
a.	If we are consider using a toolkit like FlexNet (aka FlexLm), where would we put the calls to initialize the license server?   Would this approach be too heavy handed for your application, if yes why?
b.	Another alternative, could be an DRM like approach, where some type of hash\key is stored on the computer that indicates what is allowed.  Would this approach be better.  This is like the model of steam, entering in a product key, and so on.
c.	If your boss\product manager told you to think about having multiple licenses for different functionality (instead of monolithic, but more atomic).  How you would you suggest to organizing the entitlements (i.e. what pieces of functionality to have against what license)?
6)	Put your code on GitHub, so it can access it and pull it down to grade.  List in the report clearly where your repo is.

For Submission: 
•	PDF of answers to relevant questions (like 0, 1, 5, 6).


