class CUP_G3A3 {
	HDR(G3A3);
	options[] = {"camo", "handguard", "ugl"};

    class camo: CUPCamo {
        values[] = {"BLK", "OD"};
    };

    class handguard: CUPHandguard {
        values[] = {"Standard", "Wide"};
    };

	class ugl: CUPUGL {
		values[] = {"None", "FG"};
	};
};
