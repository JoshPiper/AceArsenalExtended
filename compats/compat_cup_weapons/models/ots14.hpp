class CUP_OTs14 {
	HDR(OTs14);
	options[] = {"caliber", "ugl", "handguard"};

    class caliber: CUPCaliber {
        values[] = {"Caliber762_39", "Caliber939"};
    };

    class ugl: CUPUGL {
        values[] = {"None", "GP25"};
    };

    class handguard: CUPHandguard {
        values[] = {"Standard", "Extended"};
    };
};