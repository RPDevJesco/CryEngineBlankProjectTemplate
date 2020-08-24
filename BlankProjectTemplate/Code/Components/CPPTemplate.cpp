// You must include StdAfx and the Class header file for this class file.
// Remember to change all instances of ClassName to be whatever the name of the class is.
#include "StdAfx.h"
#include "ClassName.h"

namespace
{
	// Change the RegisterClassNameComponent to be whatever you want it to be.
	static void RegisterClassNameComponent(Schematyc::IEnvRegistrar& registrar)
	{
		Schematyc::CEnvRegistrationScope scope = registrar.Scope(IEntity::GetEntityScopeGUID());
		{
			// Change from ClassName to whatever you named the class.
			Schematyc::CEnvRegistrationScope componentScope = scope.Register(SCHEMATYC_MAKE_ENV_COMPONENT(ClassName));
		}
	}

	// Change from RegisterClassNameComponent to whatever you named the function to be.
	CRY_STATIC_AUTO_REGISTER_FUNCTION(&RegisterClassNameComponent);
}

void ClassName::Initialize() {
	// Add your initialization code here.
}

Cry::Entity::EventFlags ClassName::GetEventMask() const
{
	return
		Cry::Entity::EEvent::GameplayStarted |
		Cry::Entity::EEvent::Update |
		Cry::Entity::EEvent::Reset;
}

void ClassName::ProcessEvent(const SEntityEvent& event)
{
	switch (event.event)
	{
	case Cry::Entity::EEvent::GameplayStarted:
	{
		// This calls the initialize function. Since it is in initialization, it can be assumed that it is needed at
		// the time the game play has started.
		Initialize();
	}
	break;
	case Cry::Entity::EEvent::Update:
	{}
	break;
	case Cry::Entity::EEvent::Reset:
	{}
	break;
	}
}