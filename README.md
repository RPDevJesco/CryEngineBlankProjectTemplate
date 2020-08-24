# CryEngineBlankProjectTemplate

To get started after cloning this repository:

Right click on Game to generate the solution files with Visual Studio 2019. This will generate the solution that you can open in Visual Studio to edit.

Inside of the Code folder, you will see a single sub directory called Components, a CMakeLists file, a GamePlugin.cpp, GamePlugin.h, StdAfx.cpp and StdAfx.h files.

The CMakeLists file is where you will add or remove files you want to be added into the solution.

add_sources("Components_uber.cpp"
    PROJECTS Game
    SOURCE_GROUP "Components"
		"Components/CPPTemplate.cpp"
		"Components/CPPTemplate.h"
)

If you change the CPPTemplate.cpp and CPPTemplate.h file names, reflect it by changing it in the CMakeList file where it is showcased above. If you are adding new files,
make sure to add them the exact same way you see the CPPTemplate.cpp and CPPTemplate.h file showcased above.

Inside of the Components folder, you will see the actual CPPTemplate.cpp and CPPTemplate.h files. Add your new files here.

Once you have done so, you can generate the solution files with Visual Studio 2019. You can do it as many times as you want.

Inside of the CPPTemplate.h file, you will see a function called ReflectType. Inside of the function will be desc.SetGUID(""_cry_guid);
You will need to provide a GUID by generating it with Visual Studio.

To do this, Select tools and Create GUID.
Make sure the format you want for the GUID is option 4. Registry Format.
For example, you could have a generated result of {008275AE-DEBA-4B2E-9117-D95BC514358A}

If that is the result, then the desc.SetGUID function will be filled out as followed.

desc.SetGUID("{008275AE-DEBA-4B2E-9117-D95BC514358A}"_cry_guid);

The full function will look like this:
	// Reflect type to set a unique identifier for this component
	static void ReflectType(Schematyc::CTypeDesc<CPPTemplate>& desc)
	{
		// Generate a new GUID.
		desc.SetGUID("{008275AE-DEBA-4B2E-9117-D95BC514358A}"_cry_guid);
	}

Once you have made the changes you want, build the Game project by itself.
You can then debug by launching the editor project with the local debugger.
