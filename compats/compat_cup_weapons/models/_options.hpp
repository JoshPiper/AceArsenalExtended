#define LBL(OPTION) ECSTRING(option_value_dn,OPTION)
#define DSC(OPTION) ECSTRING(option_value_dss,OPTION)
#define LABEL(OPTION) label = LBL(OPTION)
#define DESC(OPTION) description = DSC(OPTION)

#define OLBL(OPTION) ECSTRING(option_dn,OPTION)
#define OLABEL(OPTION) label = OLBL(OPTION)

#define DEFAULT_COLOR "#(rgb,8,8,3)color(0.1,0.1,0.1,1)"
#define DEFAULT_IMAGE image = DEFAULT_COLOR
#define DEFAULT_CLASS(NAME) LABEL(NAME);\
	DEFAULT_IMAGE

#define DEF(NAME) class NAME {\
	DEFAULT_CLASS(NAME);\
}
#define DEFD(NAME) class NAME {\
	DEFAULT_CLASS(NAME);\
	DESC(NAME);\
}

class CamoBase;
class CUPCamo: CamoBase {
	values[] = {};

	#define CAMO(CLASS,IMG) class CLASS {\
		LABEL(CLASS);\
		image = IMG;\
	}
	#define RCAMO(CLASS,FROM) class CLASS: FROM {\
		LABEL(CLASS);\
	}

	class WHT;
	RCAMO(SNW,WHT);
	RCAMO(WNT,WHT);

	class OD;
	RCAMO(GRN,OD);

	CAMO(WDL,"#(rgb,8,8,3)color(0.02,0.39,0.30,1)");

	CAMO(TAN,DEFAULT_COLOR);
	RCAMO(DST,TAN);
	RCAMO(MTAN,TAN);

	CAMO(LUSH,DEFAULT_COLOR);
	CAMO(ARID,DEFAULT_COLOR);
	CAMO(STIG,DEFAULT_COLOR);
	CAMO(TIG,DEFAULT_COLOR);
	CAMO(TWOC,DEFAULT_COLOR);
	CAMO(CTRG,DEFAULT_COLOR);
	CAMO(CTRGT,DEFAULT_COLOR);
	CAMO(CTRGA,DEFAULT_COLOR);
	CAMO(UHEX,DEFAULT_COLOR);
	CAMO(CYT,DEFAULT_COLOR);
	CAMO(JUNG,DEFAULT_COLOR);
	CAMO(DGREY,DEFAULT_COLOR);
	CAMO(HEX,DEFAULT_COLOR);

	#undef CAMO
	#undef RCAMO
};

class CUPModel {
	OLABEL(CUPModel);
	changeingame = 0;
	values[] = {};

	#define AKMDL(NUM) DEF(AK##NUM)
	#define AKMDLD(NUM) DEFD(AK##NUM)

	AKMDLD(101, "5.56 NATO");
	AKMDLD(102, "5.56 NATO / Carbine");
	AKMDLD(103, "7.62x39mm");
	AKMDLD(104, "7.62x39mm / Carbine");
	AKMDLD(105, "5.45x39mm / Carbine");
	AKMDLD(107, "5.45x39mm / 3rnd Burst");
	AKMDLD(108, "5.56 NATO / 3rnd Burst");
	AKMDLD(109, "7.62x39mm / 3rnd Burst");

	AKMDLD(12, "5.45x39mm");
	AKMDLD(15, "7.62x39mm");
	AKMDLD(19, "5.56mm");

	#undef AKMDL
	#undef AKMDLD

	DEFD(A1);
	DEFD(A1G1);
	DEFD(A2);

	DEF(G36);
	DEF(G36A3);
	DEF(G36C);
	DEF(G36CA3);
	DEFD(G36E);
	DEF(G36K);
	DEFD(G36KSK);
	DEF(G36KA3);
	DEFD(MG36);
};

class CUPCaliber {
	OLABEL(CUPCaliber);
	changeingame = 0;
	values[] = {};

	DEFD(Caliber556);
	DEFD(Caliber68);
};

class CUPLength {
	OLABEL(CUPLength);
	changeingame = 0;
	values[] = {};

	DEF(Standard);
	DEF(DMR);
	DEF(Compact);
	DEF(CQC);
	DEFD(Entry);

	#define INCH(LEN) DEFD(Inches##LEN)
	#define PINCH(LEN,SUB) DEFD(Inches##LEN##_##SUB)

	PINCH(14,5);
	INCH(14);
	PINCH(11,3);
	INCH(11);
	INCH(8);

	#undef INCH
	#undef PINCH
};

class CUPUGL {
	OLABEL(CUPUGL);
	changeingame = 0;
	values[] = {};

	DEF(None);
	DEF(M203);
	DEF(M320);
	DEF(EGLM);
	DEF(GP25);
	DEF(GP34);
	DEF(AFG);
	DEF(FG);
	DEFD(FlashGrip);
	DEF(L123A2);
	DEF(G1);
	DEF(AG36);
};

class CUPRail {
	OLABEL(CUPRail);
	changeingame = 0;
	values[] = {};

	DEF(None);
	DEFD(RIS);
	DEFD(Zentico);
	DEF(Scope);
	DEF(Rear);
	DEF(Front);
	DEF(Both);
};

class CUPHandguard {
	OLABEL(CUPHandguard);
	changeingame = 0;
	values[] = {};

	DEFD(Factory);
	DEF(Quad);
	DEFD(MOE);
	DEFD(RC);
	DEF(Standard);
	DEF(Wide);
};

class CUPStock {
	OLABEL(CUPStock);
	changeingame = 0;
	values[] = {};

	DEF(Standard);
	DEF(Solid);
	DEFD(PRS);
};

#undef OLBL
#undef OLABEL
#undef DEFD
#undef DSC
#undef LBL
#undef DESC
#undef LABEL
#undef DEF
#undef DEFAULT_CLASS
#undef DEFAULT_IMAGE
#undef DEFAULT_COLOR
