#import "UHDRemoteManagedLocation.h"

@implementation UHDRemoteManagedLocation

@dynamic title;
@dynamic latitude, longitude;
@dynamic category;

#pragma mark - MKAnnotation Protocol

- (CLLocationCoordinate2D)coordinate {
    return CLLocationCoordinate2DMake(self.latitude, self.longitude);
}

@end
