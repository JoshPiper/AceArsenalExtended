
#define PATTERN_UNIFORM_UBAS(name, c, s, g) \
	class name: Uniform_Base                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "amf_uniform_ubas";           \
			camo = #c;                            \
			sleeves = #s;                         \
			gloves = #g;                         \
		};                                        \
	}; 

#define PATTERN_UNIFORM_F3(name, c, g) \
	class name: Uniform_Base                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = "amf_uniform_f3";             \
			camo = #c;                            \
			gloves = #g;                         \
		};                                        \
	}; 

#define PATTERN_HELMET(name, base, m, c, s, g) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			cover = #c;                           \
			sordin = #s;                          \
			goggles = #g;                         \
		};                                        \
	}; 


#define PATTERN_OPSCB(name, base, m, c, s, g, t) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			cover = #c;                           \
			sordin = #s;                          \
			goggles = #g;                         \
			top = #t;                             \
		};                                        \
	}; 


#define PATTERN_SMB_R(name, m, c, l, w, b, r, tex) \
	class ##name##_##r : name                      \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #c;                            \
			loadout = #l;                         \
			weapon = #w;                          \
			belt = #b;                            \
			rank = #r;                         \
		};                                        \
		class ItemInfo : ItemInfo { \
			hiddenSelectionsTextures[]= { tex, "amf_vests\data\blood_grade\amf_patch_co.paa" }; \
		}; \
		hiddenSelectionsTextures[]= { tex, "amf_vests\data\blood_grade\amf_patch_co.paa" }; \
	}; 											  

#define PATTERN_SMB(name, base, m, c, l, w, b) \
	class name: base                              \
	{                                             \
		class XtdGearInfo                         \
		{                                         \
			model = #m;                           \
			camo = #c;                            \
			loadout = #l;                         \
			weapon = #w;                          \
			belt = #b;                            \
			rank = "1CL"                          \
		};                                        \
		class ItemInfo; \
	}; 											  \
	PATTERN_SMB_R(name,m, c, l, w, b, 2CL, "") \
	PATTERN_SMB_R(name,m, c, l, w, b, CPL, "amf_vests\data\grades\cpl_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, CCH, "amf_vests\data\grades\cplchef_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, CC1, "amf_vests\data\grades\cplchef1_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, SGT, "amf_vests\data\grades\sgt_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, SCH, "amf_vests\data\grades\sgtchef_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, ADJ, "amf_vests\data\grades\adj_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, ADC, "amf_vests\data\grades\adjchel_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, MAJ, "amf_vests\data\grades\maj_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, ASP, "amf_vests\data\grades\asp_co.paa") \
	PATTERN_SMB_R(name,m, c, l, w, b, LTN, "amf_vests\data\grades\lt_co.paa") 


class CfgWeapons
{
	class Uniform_Base;
	class H_HelmetB;
	class ItemCore;

	// amf_uniform_ubas
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE,CE_TAN,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE,CE_TAN,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_OD,CE_OD,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_OD,CE_OD,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_DA,DA,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_DA,DA,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_S,SERVAL,Full,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_S,SERVAL,Half,MX)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_2,CE_TAN,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_2,CE_TAN,Half,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_CE_OD_2,CE_OD,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_CE_OD_2,CE_OD,Half,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_DA_2,DA,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_DA_2,DA,Half,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_01_S_2,SERVAL,Full,none)
	PATTERN_UNIFORM_UBAS(amf_uniform_02_S_2,SERVAL,Half,none)


	// amf_uniform_f3
	PATTERN_UNIFORM_F3(amf_uniform_03_CE,CE,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_DA,DA,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_S,SERVAL,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_MTP,MTP,MX)
	PATTERN_UNIFORM_F3(amf_uniform_03_CE_2,CE,none)
	PATTERN_UNIFORM_F3(amf_uniform_03_DA_2,DA,none)
	PATTERN_UNIFORM_F3(amf_uniform_03_S_2,SERVAL,none)
	PATTERN_UNIFORM_F3(amf_uniform_03_MTP_2,MTP,none)

	// amf_felin
	PATTERN_HELMET(amf_felin_cover,            H_HelmetB,      amf_felin,ce,none,down)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD, amf_felin_cover,amf_felin,ce,od,down)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK,amf_felin_cover,amf_felin,ce,blk,down)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN,amf_felin_cover,amf_felin,ce,tan,down)

	PATTERN_HELMET(amf_felin_mount,            amf_felin_cover,amf_felin,mount,none,down)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD, amf_felin_mount,amf_felin,mount,od,down)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK,amf_felin_mount,amf_felin,mount,blk,down)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN,amf_felin_mount,amf_felin,mount,tan,down)

	PATTERN_HELMET(amf_felin,            amf_felin_cover,amf_felin,none,none,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_OD, amf_felin,      amf_felin,none,od,down)
	PATTERN_HELMET(AMF_FELIN_EARPROT_NLK,amf_felin,      amf_felin,none,blk,down)
	PATTERN_HELMET(AMF_FELIN_EARPROT_TAN,amf_felin,      amf_felin,none,tan,down)
	
	PATTERN_HELMET(amf_felin_cover_tan,            amf_felin_cover,amf_felin,tan,none,down)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD, amf_felin_cover,amf_felin,tan,od,down)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK,amf_felin_cover,amf_felin,tan,blk,down)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN,amf_felin_cover,amf_felin,tan,tan,down)

	PATTERN_HELMET(amf_felin_cover_ONU,            amf_felin_cover,amf_felin,ONU,none,down)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_OD, amf_felin_cover,amf_felin,ONU,od,down)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_BLK,amf_felin_cover,amf_felin,ONU,blk,down)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_TAN,amf_felin_cover,amf_felin,ONU,tan,down)

	PATTERN_HELMET(amf_felin_cover_CE_2,         amf_felin_cover,amf_felin,ce,none,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_OD_2, amf_felin_cover,amf_felin,ce,od,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_BLK_2,amf_felin_cover,amf_felin,ce,blk,none)
	PATTERN_HELMET(AMF_FELIN_COVER_EARPROT_TAN_2,amf_felin_cover,amf_felin,ce,tan,none)

	PATTERN_HELMET(amf_felin_mount_2,            amf_felin_cover,amf_felin,mount,none,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_OD_2, amf_felin_mount,amf_felin,mount,od,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_BLK_2,amf_felin_mount,amf_felin,mount,blk,none)
	PATTERN_HELMET(AMF_FELIN_MOUNT_EARPROT_TAN_2,amf_felin_mount,amf_felin,mount,tan,none)

	PATTERN_HELMET(amf_felin_2,            amf_felin_cover,amf_felin,none,none,down)
	PATTERN_HELMET(AMF_FELIN_EARPROT_OD_2, amf_felin,      amf_felin,none,od,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_NLK_2,amf_felin,      amf_felin,none,blk,none)
	PATTERN_HELMET(AMF_FELIN_EARPROT_TAN_2,amf_felin,      amf_felin,none,tan,none)
	
	PATTERN_HELMET(amf_felin_cover_tan_2,            amf_felin_cover,amf_felin,tan,none,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_OD_2, amf_felin_cover,amf_felin,tan,od,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_BLK_2,amf_felin_cover,amf_felin,tan,blk,none)
	PATTERN_HELMET(AMF_FELIN_COVER_TAN_EARPROT_TAN_2,amf_felin_cover,amf_felin,tan,tan,none)

	PATTERN_HELMET(amf_felin_cover_ONU_2,            amf_felin_cover,amf_felin,ONU,none,none)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_OD_2, amf_felin_cover,amf_felin,ONU,od,none)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_BLK_2,amf_felin_cover,amf_felin,ONU,blk,none)
	PATTERN_HELMET(AMF_FELIN_COVER_ONU_EARPROT_TAN_2,amf_felin_cover,amf_felin,ONU,tan,none)
	
	// amf_tc3000
	PATTERN_HELMET(AMF_TC3000,               H_HelmetB,amf_tc3000,grn,none,none)
	PATTERN_HELMET(AMF_TC3000_earprot_blk_f, H_HelmetB,amf_tc3000,grn,blk,none)
	PATTERN_HELMET(AMF_TC3000_earprot_od_f,  H_HelmetB,amf_tc3000,grn,od,none)
	PATTERN_HELMET(AMF_TC3000_earprot_tan_f, H_HelmetB,amf_tc3000,grn,tan,none)
	PATTERN_HELMET(AMF_TC3000_tan,               AMF_TC3000,    amf_tc3000,tan,none,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f, AMF_TC3000_tan,amf_tc3000,tan,blk,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f,  AMF_TC3000_tan,amf_tc3000,tan,od,none)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f, AMF_TC3000_tan,amf_tc3000,tan,tan,none)
	PATTERN_HELMET(AMF_TC3000_2,               H_HelmetB,amf_tc3000,grn,none,down)
	PATTERN_HELMET(AMF_TC3000_earprot_blk_f_2, H_HelmetB,amf_tc3000,grn,blk,down)
	PATTERN_HELMET(AMF_TC3000_earprot_od_f_2,  H_HelmetB,amf_tc3000,grn,od,down)
	PATTERN_HELMET(AMF_TC3000_earprot_tan_f_2, H_HelmetB,amf_tc3000,grn,tan,down)
	PATTERN_HELMET(AMF_TC3000_tan_2,               AMF_TC3000,    amf_tc3000,tan,none,down)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_blk_f_2, AMF_TC3000_tan,amf_tc3000,tan,blk,down)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_od_f_2,  AMF_TC3000_tan,amf_tc3000,tan,od,down)
	PATTERN_HELMET(AMF_TC3000_tan_earprot_tan_f_2, AMF_TC3000_tan,amf_tc3000,tan,tan,down)

	// amf_tc3001
	PATTERN_HELMET(AMF_TC3001,                          H_HelmetB,amf_tc3001,grn,none,none)
	PATTERN_HELMET(AMF_TC3001_earprot_blk_f,            H_HelmetB,amf_tc3001,grn,blk,none)
	PATTERN_HELMET(AMF_TC3001_earprot_od_f,             H_HelmetB,amf_tc3001,grn,od,none)
	PATTERN_HELMET(AMF_TC3001_earprot_tan_f,            H_HelmetB,amf_tc3001,grn,tan,none)
	PATTERN_HELMET(AMF_TC3001_tan,                 AMF_TC3001,    amf_tc3001,tan,none,none)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_blk_f,   AMF_TC3001_tan,amf_tc3001,tan,blk,none)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_od_f,    AMF_TC3001_tan,amf_tc3001,tan,od,none)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_tan_f,   AMF_TC3001_tan,amf_tc3001,tan,tan,none)
	PATTERN_HELMET(AMF_TC3001_2,                        H_HelmetB,amf_tc3001,grn,none,down)
	PATTERN_HELMET(AMF_TC3001_earprot_blk_f_2,          H_HelmetB,amf_tc3001,grn,blk,down)
	PATTERN_HELMET(AMF_TC3001_earprot_od_f_2,           H_HelmetB,amf_tc3001,grn,od,down)
	PATTERN_HELMET(AMF_TC3001_earprot_tan_f_2,          H_HelmetB,amf_tc3001,grn,tan,down)
	PATTERN_HELMET(AMF_TC3001_tan_2,               AMF_TC3001,    amf_tc3001,tan,none,down)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_blk_f_2, AMF_TC3001_tan,amf_tc3001,tan,blk,down)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_od_f_2,  AMF_TC3001_tan,amf_tc3001,tan,od,down)
	PATTERN_HELMET(AMF_TC3001_tan_earprot_tan_f_2, AMF_TC3001_tan,amf_tc3001,tan,tan,down)


	// amf_tc800
	PATTERN_HELMET(AMF_TC800,                   H_HelmetB,    amf_tc800,blk,none,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_BLK,       AMF_TC800,    amf_tc800,blk,blk,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_OD,        AMF_TC800,    amf_tc800,blk,od,none)
	PATTERN_HELMET(AMF_TC800_EARPROT_TAN,       AMF_TC800,    amf_tc800,blk,tan,none)
	PATTERN_HELMET(AMF_TC800_GRN,               AMF_TC800,    amf_tc800,grn,none,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK,   AMF_TC800_GRN,amf_tc800,grn,blk,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD,    AMF_TC800_GRN,amf_tc800,grn,od,none)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN,   AMF_TC800_GRN,amf_tc800,grn,tan,none)
	PATTERN_HELMET(AMF_TC800_TAN,               AMF_TC800,    amf_tc800,tan,none,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK,   AMF_TC800_TAN,amf_tc800,tan,blk,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD,    AMF_TC800_TAN,amf_tc800,tan,od,none)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN,   AMF_TC800_TAN,amf_tc800,tan,tan,none)
  //PATTERN_HELMET(AMF_TC800_2,                 H_HelmetB,    amf_tc800,blk,none,down) -- Missing
	PATTERN_HELMET(AMF_TC800_EARPROT_BLK_2,     AMF_TC800,    amf_tc800,blk,blk,down)
	PATTERN_HELMET(AMF_TC800_EARPROT_OD_2,      AMF_TC800,    amf_tc800,blk,od,down)
	PATTERN_HELMET(AMF_TC800_EARPROT_TAN_2,     AMF_TC800,    amf_tc800,blk,tan,down)
	PATTERN_HELMET(AMF_TC800_GRN_2,             AMF_TC800,    amf_tc800,grn,none,down)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_BLK_2, AMF_TC800_GRN,amf_tc800,grn,blk,down)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_OD_2,  AMF_TC800_GRN,amf_tc800,grn,od,down)
	PATTERN_HELMET(AMF_TC800_GRN_EARPROT_TAN_2, AMF_TC800_GRN,amf_tc800,grn,tan,down)
	PATTERN_HELMET(AMF_TC800_TAN_2,             AMF_TC800,    amf_tc800,tan,none,down)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_BLK_2, AMF_TC800_TAN,amf_tc800,tan,blk,down)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_OD_2,  AMF_TC800_TAN,amf_tc800,tan,od,down)
	PATTERN_HELMET(AMF_TC800_TAN_EARPROT_TAN_2, AMF_TC800_TAN,amf_tc800,tan,tan,down)
	
	// amf_tc801
	PATTERN_HELMET(AMF_TC801,                   H_HelmetB,    amf_tc801,blk,none,none)
	PATTERN_HELMET(AMF_TC801_EARPROT_BLK,       AMF_TC801,    amf_tc801,blk,blk,none)
	PATTERN_HELMET(AMF_TC801_EARPROT_OD,        AMF_TC801,    amf_tc801,blk,od,none)
	PATTERN_HELMET(AMF_TC801_EARPROT_TAN,       AMF_TC801,    amf_tc801,blk,tan,none)
	PATTERN_HELMET(AMF_TC801_GRN,               AMF_TC801,    amf_tc801,grn,none,none)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_BLK,   AMF_TC801_GRN,amf_tc801,grn,blk,none)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_OD,    AMF_TC801_GRN,amf_tc801,grn,od,none)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_TAN,   AMF_TC801_GRN,amf_tc801,grn,tan,none)
	PATTERN_HELMET(AMF_TC801_TAN,               AMF_TC801,    amf_tc801,tan,none,none)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_BLK,   AMF_TC801_TAN,amf_tc801,tan,blk,none)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_OD,    AMF_TC801_TAN,amf_tc801,tan,od,none)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_TAN,   AMF_TC801_TAN,amf_tc801,tan,tan,none)
  //PATTERN_HELMET(AMF_TC801_2,                 H_HelmetB,    amf_tc801,blk,none,down) -- Missing
	PATTERN_HELMET(AMF_TC801_EARPROT_BLK_2,     AMF_TC801,    amf_tc801,blk,blk,down)
	PATTERN_HELMET(AMF_TC801_EARPROT_OD_2,      AMF_TC801,    amf_tc801,blk,od,down)
	PATTERN_HELMET(AMF_TC801_EARPROT_TAN_2,     AMF_TC801,    amf_tc801,blk,tan,down)
	PATTERN_HELMET(AMF_TC801_GRN_2,             AMF_TC801,    amf_tc801,grn,none,down)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_BLK_2, AMF_TC801_GRN,amf_tc801,grn,blk,down)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_OD_2,  AMF_TC801_GRN,amf_tc801,grn,od,down)
	PATTERN_HELMET(AMF_TC801_GRN_EARPROT_TAN_2, AMF_TC801_GRN,amf_tc801,grn,tan,down)
	PATTERN_HELMET(AMF_TC801_TAN_2,             AMF_TC801,    amf_tc801,tan,none,down)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_BLK_2, AMF_TC801_TAN,amf_tc801,tan,blk,down)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_OD_2,  AMF_TC801_TAN,amf_tc801,tan,od,down)
	PATTERN_HELMET(AMF_TC801_TAN_EARPROT_TAN_2, AMF_TC801_TAN,amf_tc801,tan,tan,down)
	
	// amf_smb
	PATTERN_SMB(amf_smb_gr,           ItemCore,   amf_smb,TAN,LG,HK416,no)
	PATTERN_SMB(amf_smb_gr_famas,     amf_smb_gr, amf_smb,TAN,LG,FAMAS,no)
	PATTERN_SMB(amf_smb_gr_famas_grn, amf_smb_gr, amf_smb,OD, LG,FAMAS,no)
	PATTERN_SMB(amf_smb_gr_grn,       amf_smb_gr, amf_smb,OD, LG,HK416,no)
	PATTERN_SMB(amf_smb_grb,          ItemCore,   amf_smb,TAN,LG,HK416,yes)
	PATTERN_SMB(amf_smb_grb_famas,    amf_smb_grb,amf_smb,TAN,LG,FAMAS,yes)
	PATTERN_SMB(amf_smb_grb_famas_grn,amf_smb_grb,amf_smb,OD, LG,FAMAS,yes)
	PATTERN_SMB(amf_smb_grb_grn,      amf_smb_grb,amf_smb,OD, LG,HK416,yes)
	PATTERN_SMB(amf_smb_in,           ItemCore,   amf_smb,TAN,GV,HK416,no)
	PATTERN_SMB(amf_smb_in_famas,     amf_smb_in, amf_smb,TAN,GV,FAMAS,no)
	PATTERN_SMB(amf_smb_in_famas_grn, amf_smb_in, amf_smb,OD, GV,FAMAS,no)
	PATTERN_SMB(amf_smb_in_grn,       amf_smb_in, amf_smb,OD, GV,HK416,no)
	PATTERN_SMB(amf_smb_inb,          ItemCore,   amf_smb,TAN,GV,HK416,yes)
	PATTERN_SMB(amf_smb_inb_famas,    amf_smb_inb,amf_smb,TAN,GV,FAMAS,yes)
	PATTERN_SMB(amf_smb_inb_famas_grn,amf_smb_inb,amf_smb,OD, GV,FAMAS,yes)
	PATTERN_SMB(amf_smb_inb_grn,      amf_smb_inb,amf_smb,OD, GV,HK416,yes)
	PATTERN_SMB(amf_smb_me,           ItemCore,   amf_smb,TAN,SC2,HK416,no)
	PATTERN_SMB(amf_smb_me_famas,     amf_smb_me, amf_smb,TAN,SC2,FAMAS,no)
	PATTERN_SMB(amf_smb_me_famas_grn, amf_smb_me, amf_smb,OD, SC2,FAMAS,no)
	PATTERN_SMB(amf_smb_me_grn,       amf_smb_me, amf_smb,OD, SC2,HK416,no)
	PATTERN_SMB(amf_smb_meb,          ItemCore,   amf_smb,TAN,SC2,HK416,yes)
	PATTERN_SMB(amf_smb_meb_famas,    amf_smb_meb,amf_smb,TAN,SC2,FAMAS,yes)
	PATTERN_SMB(amf_smb_meb_famas_grn,amf_smb_meb,amf_smb,OD, SC2,FAMAS,yes)
	PATTERN_SMB(amf_smb_meb_grn,      amf_smb_meb,amf_smb,OD, SC2,HK416,yes)
	PATTERN_SMB(amf_smb_tl,           ItemCore,   amf_smb,TAN,CDG,HK416,no)
	PATTERN_SMB(amf_smb_tl_famas,     amf_smb_tl, amf_smb,TAN,CDG,FAMAS,no)
	PATTERN_SMB(amf_smb_tl_famas_grn, amf_smb_tl, amf_smb,OD, CDG,FAMAS,no)
	PATTERN_SMB(amf_smb_tl_grn,       amf_smb_tl, amf_smb,OD, CDG,HK416,no)
	PATTERN_SMB(amf_smb_tlb,          ItemCore,   amf_smb,TAN,CDG,HK416,yes)
	PATTERN_SMB(amf_smb_tlb_famas,    ItemCore,   amf_smb,TAN,CDG,FAMAS,yes)
	PATTERN_SMB(amf_smb_tlb_famas_grn,amf_smb_tlb,amf_smb,OD, CDG,FAMAS,yes)
	PATTERN_SMB(amf_smb_tlb_grn,      amf_smb_tlb,amf_smb,OD, CDG,HK416,yes)
	PATTERN_SMB(amf_smb_mc,           ItemCore,   amf_smb,TAN,AR,HK416,no)
	PATTERN_SMB(amf_smb_mc_grn,       amf_smb_mc, amf_smb,OD, AR,HK416,no)
	PATTERN_SMB(amf_smb_mcb,          ItemCore,   amf_smb,TAN,AR,HK416,yes)
	PATTERN_SMB(amf_smb_mcb_grn,      amf_smb_mcb,amf_smb,OD, AR,HK416,yes)
	
	PATTERN_SMB(amf_smb_tp_frf2,      amf_smb_grb,amf_smb_tp,TAN,TP,FRF2,no)
	PATTERN_SMB(amf_smb_tp_frf2_grn,  amf_smb_grb,amf_smb_tp,OD, TP,FRF2,no)
	PATTERN_SMB(amf_smb_tp_hk417,     amf_smb_grb,amf_smb_tp,TAN,TP,HK417,no)
	PATTERN_SMB(amf_smb_tp_hk417_grn, amf_smb_grb,amf_smb_tp,OD, TP,HK417,no)
	PATTERN_SMB(amf_smb_tp_scarh,     amf_smb_grb,amf_smb_tp,TAN,TP,SCARH,no)
	PATTERN_SMB(amf_smb_tp_scarh_grn, amf_smb_grb,amf_smb_tp,OD, TP,SCARH,no)


	PATTERN_HELMET(AMF_OPSCORE,       H_HelmetB,         amf_opscore_xp,blk,blk,none)

	PATTERN_HELMET(AMF_OPSCORE_TAN,       AMF_OPSCORE,    amf_opscore_xp,blk,od,none)
	PATTERN_HELMET(AMF_OPSCORE_TAN,       AMF_OPSCORE,    amf_opscore_xp,blk,tan,none)

	PATTERN_HELMET(AMF_opscore,         H_HelmetB,  amf_opscore_xp,od, blk,none)
	PATTERN_HELMET(AMF_OPSCORE_OD1,     AMF_OPSCORE,amf_opscore_xp,od, od, none)
	PATTERN_HELMET(AMF_OPSCORE_OD1_2,   AMF_OPSCORE,amf_opscore_xp,od, od, down)
	PATTERN_HELMET(AMF_OPSCORE_OD2,     AMF_OPSCORE,amf_opscore_xp,od, tan,none)
	PATTERN_HELMET(AMF_OPSCORE_OD2_2,   AMF_OPSCORE,amf_opscore_xp,od, tan,down)
	PATTERN_HELMET(AMF_OPSCORE_TAN,     AMF_OPSCORE,amf_opscore_xp,tan,blk,none)
	PATTERN_HELMET(AMF_OPSCORE_TAN_2,   AMF_OPSCORE,amf_opscore_xp,tan,blk,down)
	PATTERN_HELMET(AMF_OPSCORE_TAN1,    AMF_OPSCORE,amf_opscore_xp,tan,tan,none)
	PATTERN_HELMET(AMF_OPSCORE_TAN1_2,  AMF_OPSCORE,amf_opscore_xp,tan,tan,down)
	PATTERN_HELMET(AMF_OPSCORE_TAN2,    AMF_OPSCORE,amf_opscore_xp,tan,od, none)
	PATTERN_HELMET(AMF_OPSCORE_TAN2_2,  AMF_OPSCORE,amf_opscore_xp,tan,od, down)
	PATTERN_HELMET(AMF_OPSCORE_GREY,    AMF_OPSCORE,amf_opscore_xp,gry,blk,none)
	PATTERN_HELMET(AMF_OPSCORE_GREY_2,  AMF_OPSCORE,amf_opscore_xp,gry,blk,down)
	PATTERN_HELMET(AMF_OPSCORE_GREY1,   AMF_OPSCORE,amf_opscore_xp,gry,tan,none)
	PATTERN_HELMET(AMF_OPSCORE_GREY1_2, AMF_OPSCORE,amf_opscore_xp,gry,tan,down)
	PATTERN_HELMET(AMF_OPSCORE_GREY2,   AMF_OPSCORE,amf_opscore_xp,gry,od, none)
	PATTERN_HELMET(AMF_OPSCORE_GREY2_2, AMF_OPSCORE,amf_opscore_xp,gry,od, down)
	PATTERN_HELMET(AMF_OPSCORE_BLACK,   AMF_OPSCORE,amf_opscore_xp,blk,blk,none)
	PATTERN_HELMET(AMF_OPSCORE_BLACK_2, AMF_OPSCORE,amf_opscore_xp,blk,blk,down)
	PATTERN_HELMET(AMF_OPSCORE_BLACK1,  AMF_OPSCORE,amf_opscore_xp,blk,tan,none)
	PATTERN_HELMET(AMF_OPSCORE_BLACK1_2,AMF_OPSCORE,amf_opscore_xp,blk,tan,down)
	PATTERN_HELMET(AMF_OPSCORE_BLACK2,  AMF_OPSCORE,amf_opscore_xp,blk,od, none)
	PATTERN_HELMET(AMF_OPSCORE_BLACK2_2,AMF_OPSCORE,amf_opscore_xp,blk,od, down)


	PATTERN_OPSCB(AMF_opscore2,         H_HelmetB,   amf_opscore_bump,od, blk,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD1,     AMF_OPSCORE2,amf_opscore_bump,od, od, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD1_2,   AMF_OPSCORE2,amf_opscore_bump,od, od, down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD2,     AMF_OPSCORE2,amf_opscore_bump,od, tan,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_OD2_2,   AMF_OPSCORE2,amf_opscore_bump,od, tan,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN,     AMF_OPSCORE2,amf_opscore_bump,tan,blk,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN_2,   AMF_OPSCORE2,amf_opscore_bump,tan,blk,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN1,    AMF_OPSCORE2,amf_opscore_bump,tan,tan,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN1_2,  AMF_OPSCORE2,amf_opscore_bump,tan,tan,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN2,    AMF_OPSCORE2,amf_opscore_bump,tan,od, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_TAN2_2,  AMF_OPSCORE2,amf_opscore_bump,tan,od, down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY,    AMF_OPSCORE2,amf_opscore_bump,gry,blk,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY_2,  AMF_OPSCORE2,amf_opscore_bump,gry,blk,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY1,   AMF_OPSCORE2,amf_opscore_bump,gry,tan,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY1_2, AMF_OPSCORE2,amf_opscore_bump,gry,tan,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY2,   AMF_OPSCORE2,amf_opscore_bump,gry,od, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_GREY2_2, AMF_OPSCORE2,amf_opscore_bump,gry,od, down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK,   AMF_OPSCORE2,amf_opscore_bump,blk,blk,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK_2, AMF_OPSCORE2,amf_opscore_bump,blk,blk,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK1,  AMF_OPSCORE2,amf_opscore_bump,blk,tan,none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK1_2,AMF_OPSCORE2,amf_opscore_bump,blk,tan,down,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK2,  AMF_OPSCORE2,amf_opscore_bump,blk,od, none,irf)
	PATTERN_OPSCB(AMF_OPSCORE2_BLACK2_2,AMF_OPSCORE2,amf_opscore_bump,blk,od, down,irf)

	PATTERN_OPSCB(AMF_opscore3,         H_HelmetB,   amf_opscore_bump,od,blk, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD1,     AMF_OPSCORE3,amf_opscore_bump,od, od, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD1_2,   AMF_OPSCORE3,amf_opscore_bump,od, od, down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD2,     AMF_OPSCORE3,amf_opscore_bump,od, tan,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_OD2_2,   AMF_OPSCORE3,amf_opscore_bump,od, tan,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN,     AMF_OPSCORE3,amf_opscore_bump,tan,blk,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN_2,   AMF_OPSCORE3,amf_opscore_bump,tan,blk,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN1,    AMF_OPSCORE3,amf_opscore_bump,tan,tan,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN1_2,  AMF_OPSCORE3,amf_opscore_bump,tan,tan,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN2,    AMF_OPSCORE3,amf_opscore_bump,tan,od, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_TAN2_2,  AMF_OPSCORE3,amf_opscore_bump,tan,od, down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY,    AMF_OPSCORE3,amf_opscore_bump,gry,blk,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY_2,  AMF_OPSCORE3,amf_opscore_bump,gry,blk,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY1,   AMF_OPSCORE3,amf_opscore_bump,gry,tan,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY1_2, AMF_OPSCORE3,amf_opscore_bump,gry,tan,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY2,   AMF_OPSCORE3,amf_opscore_bump,gry,od, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_GREY2_2, AMF_OPSCORE3,amf_opscore_bump,gry,od, down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK,   AMF_OPSCORE3,amf_opscore_bump,blk,blk,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK_2, AMF_OPSCORE3,amf_opscore_bump,blk,blk,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK1,  AMF_OPSCORE3,amf_opscore_bump,blk,tan,none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK1_2,AMF_OPSCORE3,amf_opscore_bump,blk,tan,down,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK2,  AMF_OPSCORE3,amf_opscore_bump,blk,od, none,none)
	PATTERN_OPSCB(AMF_OPSCORE3_BLACK2_2,AMF_OPSCORE3,amf_opscore_bump,blk,od, down,none)


};