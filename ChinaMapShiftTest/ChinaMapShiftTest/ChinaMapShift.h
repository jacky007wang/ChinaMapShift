//
//  ChinaMapShift.h
//  ChinaMapShift
//
//  Most code created by someone anonymous.
//  transformFromGCJToWGS() added by Fengzee (fengzee@fengzee.com).
//

#ifndef ChinaMapShift_ChinaMapShift_h
#define ChinaMapShift_ChinaMapShift_h

typedef struct {
    double lng;
    double lat;
} Location;

Location transformFromWGSToGCJ(Location wgLoc);
Location transformFromGCJToWGS(Location gcLoc);
Location bd_encrypt(Location gcLoc);
Location bd_decrypt(Location bdLoc);

#endif
