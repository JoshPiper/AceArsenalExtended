class XtdGearModels {
	#include "_options.hpp"

	#define M(NAME) CUP_##NAME
	#define LBL(OPTION) ECSTRING(model_dn,M(OPTION))
	#define LABEL(OPTION) label = LBL(OPTION)
	#define HDR(OPTION) LABEL(OPTION);\
		DEFAULT_AUTHOR

	class CfgWeapons {
		#include "acr.hpp"
		#include "ak10.hpp"
		#include "ak100.hpp"
		#include "asval.hpp"
		#include "cz807.hpp"
		#include "czbren2.hpp"
		#include "czs.hpp"
		#include "enfield.hpp"
		#include "g22.hpp"
		#include "g36.hpp"
		#include "g3a3.hpp"
		#include "galil.hpp"
		#include "hk416.hpp"
		#include "hk417.hpp"
		#include "l115a3.hpp"
		#include "l129a1.hpp"
		#include "l7a2.hpp"
		#include "l85a2.hpp"
		#include "m1014.hpp"
		#include "m107.hpp"
		#include "m110.hpp"
		#include "m2010.hpp"
		#include "m21.hpp"
		#include "m24.hpp"
		#include "m27.hpp"
		#include "m3a1.hpp"
		#include "m4a1.hpp"
		#include "m4a1sopmod.hpp"
		#include "m4sbr.hpp"
		#include "m60e4.hpp"
		#include "mac10.hpp"
		#include "mag60.hpp"
		#include "mg3.hpp"
		#include "mk14.hpp"
		#include "mk16.hpp"
		#include "mk17.hpp"
		#include "mk18.hpp"
		#include "mk48.hpp"
		#include "mp5a5.hpp"
		#include "mp7a1.hpp"
		#include "ots14.hpp"
		#include "p90.hpp"
		#include "pp1901.hpp"
		#include "romat.hpp"
		#include "sa58.hpp"
	};

	#undef HDR
	#undef LABEL
	#undef LBL
	#undef M
};
