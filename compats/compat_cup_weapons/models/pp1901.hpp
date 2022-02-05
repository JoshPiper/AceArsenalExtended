class CUP_PP1901 {
    HDR(PP1901);
    options[] = {"rail", "ugl"};

    class rail: CUPRail {
        values[] = {"None", "Rear", "RIS"};
    };
    
    class ugl: CUPUGL {
        values[] = {"None", "FG"};
    };
};