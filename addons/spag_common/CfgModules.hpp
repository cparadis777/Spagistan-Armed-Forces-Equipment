//Modules

class CfgVehicles
{
	class Logic;
		class Module_F: Logic
		{
			class AttributesBase;
			class ModuleDescription;
		};
		class Spag_ModuleEnding_F: Module_F
		{
			author = "Kalthramis";
			scope = 2;
			scopeCurator = 2;
			category = "MissionFlow";
			displayName = "End Mission (Spagistan)";
			icon = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
			portrait = "\z\spag\addons\common\gui\Spag_Flag_ca.paa";
			function = "spag_common_fnc_moduleEndMission";
			isGlobal = 1;
			isTriggerActivated = 0;
			curatorCanAttach = 1;
			curatorCost = 0;
			class Arguments{};
			class ModuleDescription: ModuleDescription
			{
				description = "Ends the mission with extra details - disables simulation for all players.";
				sync[] = {};
			};
		};

	//zeus example
	/* class ModuleKalLol_f: Module_F
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLightning_F";
		scope = 2;
		scopeCurator = 2;
		category = "Curator";
		displayName = "Kal Lightning Bolt";
		icon = QPATHTOF(gui\Spag_Flag_ca.paa);
		portrait = QPATHTOF(gui\Spag_Flag_ca.paa);
		function = "BIS_fnc_moduleLightning";
		isGlobal = 1;
		isTriggerActivated = 1;
		curatorCanAttach = 1;
		curatorCost = 10;
		class ModuleDescription: ModuleDescription
		{
			description = "Creates a lightning strike powerful enough to destroy an object where it impacts.";
			position = 1;
		};
	}; */

	/* class ace_zeus_moduleBase: Module_F
			{
				author = "ACE-Team";
				category = "ACE";
				function = "ace_common_fnc_dummy";
				functionPriority = 1;
				isGlobal = 1;
				isTriggerActivated = 0;
				scope = 1;
				scopeCurator = 2;
			};
			class ace_zeus_moduleAddSpareTrack: ace_zeus_moduleBase
			{
				curatorCanAttach = 1;
				category = "ace_zeus_Repair";
				displayName = "Add Spare Track";
				function = "ace_zeus_fnc_moduleAddSpareTrack";
				icon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
			}; */


	
};
	//Wiki example
	/* class spag_ModuleTest: Module_F
		{
			// Standard object definitions
			scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
			scopeCurator = 2;
			displayName = "End mission test"; // Name displayed in the menu
			icon = "\myTag_addonName\data\iconNuke_ca.paa"; // Map icon. Delete this entry to use the default icon
			category = "Events";

			// Name of function triggered once conditions are met
			function = "hint 'hi';";
			// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
			functionPriority = 1;
			// 0 for server only execution, 1 for global execution, 2 for persistent global execution
			isGlobal = 1;
			// 1 for module waiting until all synced triggers are activated
			isTriggerActivated = 1;
			// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
			isDisposable = 1;
			// // 1 to run init function in Eden Editor as well
			is3DEN = 0;

			// Menu displayed when the module is placed or double-clicked on by Zeus
			curatorInfoType = "RscDisplayAttributeModuleNuke";

			// Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
			class Attributes: AttributesBase
			{
				// Arguments shared by specific module type (have to be mentioned in order to be present)
				class Units: Units
				{
					property = "myTag_ModuleNuke_Units";
				};
				// Module specific arguments
				class Yield: Combo
	  			{
					// Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
					property = "myTag_ModuleNuke_Yield";
					displayName = "Nuclear weapon yield"; // Argument label
					tooltip = "How strong will the explosion be"; // Tooltip description
					typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
					defaultValue = "50"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
					class Values
					{
						class 50Mt	{name = "50 megatons";	value = 50;}; // Listbox item
						class 100Mt	{name = "100 megatons"; value = 100;};
					};
				};
				class Name: Edit
	  			{
					displayName = "Name";
					tooltip = "Name of the nuclear device";
					// Default text filled in the input box
					// Because it's an expression, to return a String one must have a string within a string
					defaultValue = """Tsar Bomba""";
				};
				class ModuleDescription: ModuleDescription{}; // Module description should be shown last
			};

			// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
			class ModuleDescription: ModuleDescription
			{
				description = "Short module description"; // Short description, will be formatted as structured text
				sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)

				class LocationArea_F
				{
					description[] = { // Multi-line descriptions are supported
						"First line",
						"Second line"
					};
					position = 1; // Position is taken into effect
					direction = 1; // Direction is taken into effect
					optional = 1; // Synced entity is optional
					duplicate = 1; // Multiple entities of this type can be synced
					synced[] = {"BLUFORunit","AnyBrain"}; // Pre-define entities like "AnyBrain" can be used. See the list below
				};
				class BLUFORunit
				{
					description = "Short description";
					displayName = "Any BLUFOR unit"; // Custom name
					icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
					side = 1; // Custom side (will determine icon color)
				};
			};
		}; */

