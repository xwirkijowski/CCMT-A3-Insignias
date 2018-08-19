/*--------------------------------------------------------+
|    __________  ___   ________________   ____  ____  ___
|   / ____/ __ \/   | / ___/_  __/  _/ | / / / / /  |/  /
|  / /   / /_/ / /| | \__ \ / /  / //  |/ / / / / /|_/ /
| / /___/ _, _/ ___ |___/ // / _/ // /|  / /_/ / /  / /
| \____/_/ |_/_/  |_/____//_/ /___/_/ |_/\____/_/  /_/
|
+---------------------------------------------------------+
| Made with ❤️ by Crastinum Community's Modding Team
| http://community.crastinum.eu/
+---------------------------------------------------------+
| 📧 modding[at]community.crastinum.eu
+--------------------------------------------------------*/

class CfgPatches {
	class ccmt_insignias {
		name = "CCMT Insignias";
		version = "0.1";
		author[]= {"Crastinum Community Modding Team"};
		authorUrl = "http://community.crastinum.eu/";
	};
};

/**
 * Naming / versions:
 * * Standard
 * * Inverted
 * * Desert
 * * Multicam
 * * Forest
 * * ACU-DARK
 * * ACU-LIGHT
 * * SWAT / Black
 *
 * * Other colors
 */

class CfgUnitInsignia {
	
	// Medic
	class ccmt_ins_medic {
		displayName = "[CCMT] Medic";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\medic.paa";
		textureVehicle = "";
	};

	// Medic Cross
	class ccmt_ins_medic_cross {
		displayName = "[CCMT] Medic Cross";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\medic_cross.paa";
		textureVehicle = "";
	};

		// Medic Cross / Red
		class ccmt_ins_medic_cross_red {
			displayName = "[CCMT] Medic Cross (Red)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_red.paa";
			textureVehicle = "";
		};

		// Medic Cross / SWAT
		class ccmt_ins_medic_cross_swat {
			displayName = "[CCMT] Medic Cross (SWAT/BLK)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_swat.paa";
			textureVehicle = "";
		};

		// Medic Cross / Desert
		class ccmt_ins_medic_cross_desert {
			displayName = "[CCMT] Medic Cross (Desert)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_desert.paa";
			textureVehicle = "";
		};

		// Medic Cross / Multicam
		class ccmt_ins_medic_cross_multicam {
			displayName = "[CCMT] Medic Cross (Multicam)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_multicam.paa";
			textureVehicle = "";
		};

		// Medic Cross / Forest
		class ccmt_ins_medic_cross_forest {
			displayName = "[CCMT] Medic Cross (Forest)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_forest.paa";
			textureVehicle = "";
		};

		// Medic Cross / ACU-L
		class ccmt_ins_medic_cross_acul {
			displayName = "[CCMT] Medic Cross (ACU-LIGHT)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_acul.paa";
			textureVehicle = "";
		};

		// Medic Cross / ACU-D
		class ccmt_ins_medic_cross_acud {
			displayName = "[CCMT] Medic Cross (ACU-DARK)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\medic_cross_acud.paa";
			textureVehicle = "";
		};

	/*****************************************
	 * Flags
	 */

	// Poland
	class ccmt_ins_poland {
		displayName = "[CCMT][FLAG] Poland";
		author = "CCMT_RaixHQ";
		texture = "\ccmt_insignias\img\flag_poland.paa";
		textureVehicle = "";
	};

		// Poland / Text
		class ccmt_ins_poland_text {
			displayName = "[CCMT][FLAG] Poland (Text)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\flag_poland_text.paa";
			textureVehicle = "";
		};

		// Poland / SWAT
		class ccmt_ins_poland_text {
			displayName = "[CCMT][FLAG] Poland (SWAT/BLK)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\flag_poland_swat.paa";
			textureVehicle = "";
		};

	// United States
	class ccmt_ins_usa {
		displayName = "[CCMT][FLAG] United States";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\flag_usa.paa";
		textureVehicle = "";
	};

		// United States / Desert
		class ccmt_ins_usa_desert {
			displayName = "[CCMT][FLAG] United States (Desert)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\flag_usa_desert.paa";
			textureVehicle = "";
		};

		// United States / Multicam
		class ccmt_ins_usa_multicam {
			displayName = "[CCMT][FLAG] United States (Multicam)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\flag_usa_multicam.paa";
			textureVehicle = "";
		};

		// United States / Forest
		class ccmt_ins_usa_forest {
			displayName = "[CCMT][FLAG] United States (Forest)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\flag_usa_forest.paa";
			textureVehicle = "";
		};

		// United States / SWAT
		class ccmt_ins_usa_swat {
			displayName = "[CCMT][FLAG] United States (SWAT/BLK)";
			author = "CCMT_SleepyAsh17";
			texture = "\ccmt_insignias\img\flag_usa_swat.paa";
			textureVehicle = "";
		};

	// Germany
	class ccmt_ins_germany {
		displayName = "[CCMT][FLAG] Germany";
		author = "CCMT_RaixHQ";
		texture = "\ccmt_insignias\img\flag_germany.paa";
		textureVehicle = "";
	};

	// Sweden
	class ccmt_ins_sweden {
		displayName = "[CCMT][FLAG] Sweden";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\flag_sweden.paa";
		textureVehicle = "";
	};

	// Belgium
	class ccmt_ins_belgium {
		displayName = "[CCMT][FLAG] Belgium";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\flag_belgium.paa";
		textureVehicle = "";
	};

	// France
	class ccmt_ins_france {
		displayName = "[CCMT][FLAG] France";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\flag_france.paa";
		textureVehicle = "";
	};

	/*****************************************
	 * Other
	 */

	// Crastinum Community
	class ccmt_ins_cc {
		displayName = "[CCMT][OTHER] Crastinum Community";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\cc.paa";
		textureVehicle = "";
	};

	// Crastinum Agency
	class ccmt_ins_ca {
		displayName = "[CCMT][OTHER] Crastinum Agency";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\ca.paa";
		textureVehicle = "";
	};

	// Crastinum Security Agency
	class ccmt_ins_csa {
		displayName = "[CCMT][OTHER] Crastinum Security Agency";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\csa.paa";
		textureVehicle = "";
	};
};