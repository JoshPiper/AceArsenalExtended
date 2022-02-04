class CUP_g36 {
	HDR(g36);
	options[] = {"g36model", "camo", "rail", "ugl"};

    class g36model: CUPModel {
        values[] = {"G36", "G36A3", "G36C", "G36CA3", "G36E", "G36K", "G36KSK", "G36KA3", "MG36"};
    };

    class camo: CUPCamo {
        values[] = {"BLK", "DST", "WDL", "HEX"};
    };

	class rail: CUPRail {
		values[] = {"None", "RIS"};
	};

    class ugl: CUPUGL {
        values[] = {"None", "AG36", "FG", "AFG"};
    };
};
