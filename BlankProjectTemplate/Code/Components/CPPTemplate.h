#pragma once

// include the header files you want to use here. The InputComponent header is here so it will build without issues, change to what you need.
#include <DefaultComponents/Input/InputComponent.h>

////////////////////////////////////////////////////////
// This is a template that has the bare minimum for anything
// that is IEntityComponent related. Change the class name
// to fit what you need it to Same with all of the items with
// ClassName inside of it.
////////////////////////////////////////////////////////
class ClassName : public IEntityComponent
{
	// Declares the functions we want to use
public:
	ClassName() = default;
	virtual ~ClassName() = default;

	// IEntityComponent
	virtual void Initialize() override;
	// Flags for events such as Gameplay start, become local player and so on.
	virtual Cry::Entity::EventFlags GetEventMask() const override;
	// called as a switch statement inside of this function.
	virtual void ProcessEvent(const SEntityEvent& event) override;

	// Reflect type to set a unique identifier for this component
	static void ReflectType(Schematyc::CTypeDesc<ClassName>& desc)
	{
		// Generate a new GUID and place inside of the empty string in desc.SetGUID
		desc.SetGUID(""_cry_guid);
	}

protected:
	// Add your components with nullptrs here.
};
