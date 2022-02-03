class CUP_CZ807 {
	HDR(CZ807);
	options[] = {"camo", "length", "ugl"};

	class length: CUPLength {
		values[] = {"Inches14", "Inches8"};
	};

	class camo: CUPCamo {
		values[] = {"BLK", "GRN", "TAN"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "G1"};
	};
};
