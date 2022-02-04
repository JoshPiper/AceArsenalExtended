class CUP_MK48 {
	HDR(MK48);
	options[] = {"camo", "handguard"};

    class camo: CUPCamo {
        values[] = {"DST", "OD", "TAN", "BLK", "WDL"};
    };

    class handguard: CUPHandguard{
        values[] = {"None", "Heatguard"};
    };

};