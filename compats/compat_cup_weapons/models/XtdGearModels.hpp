class XtdGearModels {
	#include "_options.hpp"

	#define M(NAME) CUP_##NAME
	#define LBL(OPTION) ECSTRING(model_dn,M(OPTION))
	#define LABEL(OPTION) label = LBL(OPTION)
	#define HDR(OPTION) LABEL(OPTION);\
		DEFAULT_AUTHOR

	class CfgWeapons {
		#include "acr.hpp"
		#include "hk417.hpp"
		#include "hk416.hpp"
		#include "m4a1.hpp"
		#include "m4a1sopmod.hpp"
		#include "m4sbr.hpp"
		#include "ak100.hpp"
		#include "ak10.hpp"
		#include "asval.hpp"
		#include "m27.hpp"
		#include "czs.hpp"
		#include "m3a1.hpp"
		#include "m60e4.hpp"
		#include "mac10.hpp"
		#include "sa58.hpp"
		#include "l115a3.hpp"
		#include "l129a1.hpp"
		#include "l7a2.hpp"
		#include "l85a2.hpp"
		#include "m1014.hpp"
		#include "m107.hpp"
		#include "m110.hpp"
		#include "cz807.hpp"
		#include "czbren2.hpp"
		#include "g22.hpp"
		#include "m2010.hpp"
	};

	#undef HDR
	#undef LABEL
	#undef LBL
	#undef M
};
