class CUP_MAG60 {
	HDR(MAG60);
	options[] = {"rail", "stock"};

	class rail: CUPRail {
		values[] = {"None", "RIS"};
	};

    class stock: CUPStock {
        values[] = {"Wood", "Plastic"};
    };
};
