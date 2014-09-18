#import "UHDRemoteManagedObject.h"

@interface UHDCampusRegion : UHDRemoteManagedObject <MKOverlay>

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *buildings;
@property (nonatomic) double_t overlayAngle;
@property (nonatomic) double_t centerLatitude;
@property (nonatomic) double_t centerLongitude;
@property (nonatomic) double_t deltaLatitude;
@property (nonatomic) double_t deltaLongitude;

- (MKCoordinateRegion)coordinateRegion;
- (NSMutableSet *)mutableBuildings;

@end
