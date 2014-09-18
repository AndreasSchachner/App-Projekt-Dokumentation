#import "UHDRemoteManagedLocation.h"

@class UHDCampusRegion;

@interface UHDBuilding : UHDRemoteManagedLocation

@property (nonatomic, retain) UHDCampusRegion *campusRegion;
@property (nonatomic, retain) NSString *buildingNumber;
@property (nonatomic, retain) NSData *imageData;

@property (readonly) NSString *identifier;
@property (nonatomic) UIImage *image;

@end
