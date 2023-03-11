class CUP_SVD {
    HDR(SVD);
    options[] = {"camo", "rail"};

    class camo: CUPCamo {
        
        //WD is wood, potentially needs adding

        values[] = {"WD", "DST", "WDL"};
    };
    
    class rail: CUPRail {
        values[] = {"None", "RIS"};
    };
};