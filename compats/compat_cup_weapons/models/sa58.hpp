class CUP_SA58 {
	HDR(SA58);
	options[] = {"rail"};

	class rail: CUPRail {
		// Rear = Dust Cover.
		// Front = Gas Tube.
		values[] = {"None", "Rear", "Front", "Both"};
	};
};
