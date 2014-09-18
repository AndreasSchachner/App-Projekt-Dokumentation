#import "UHDBuilding.h"
#import "UHDCampusRegion.h"

@implementation UHDBuilding

@dynamic buildingNumber;
@dynamic campusRegion;
@dynamic imageData;

#pragma mark - Computed Properties

- (NSString *)identifier {
    return [NSString stringWithFormat:@"%@ %@", self.campusRegion.identifier, self.buildingNumber];
}

- (UIImage *)image {
    return [UIImage imageWithData:self.imageData];
}

- (void)setImage:(UIImage *)image {
    self.imageData = UIImageJPEGRepresentation(image, 1);
}

#pragma mark - MKAnnotation Protocol

- (NSString *)subtitle {
    return self.identifier;
}

@end
