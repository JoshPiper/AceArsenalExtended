class CUP_CZBREN2 {
	HDR(CZBREN2);
	options[] = {"camo", "length", "ugl"};

	class camo: CUPCamo {
		values[] = {"BLK", "GRN", "TAN"};
	};

	class length: CUPLength {
		values[] = {"Inches14", "Inches11", "Inches8"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "G1"};
	};
};
