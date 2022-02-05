class CUP_MP5A5 {
	HDR(MP5A5);
	options[] = {"rail", "ugl"};

    class rail: CUPRail {
        values[] = {"None", "RIS"};
    };

    class ugl: CUPUGL {
        values[] = {"AFG", "FG"};
    };
};
