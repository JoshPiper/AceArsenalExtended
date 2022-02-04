class CUP_MK17 {
	HDR(MK17);
	options[] = {"length", "camo", "ugl"};

	class length: CUPLength {
		values[] = {"CQC", "Standard", "SV"};
	};

    class ugl: CUPUGL{
        values[] = {"None", "FG", "AFG", "Surefire", "EGLM"};
    };

    class camo: CUPCamo{
        values[] = {"BLK", "WDL", "TAN"};
    };
};
