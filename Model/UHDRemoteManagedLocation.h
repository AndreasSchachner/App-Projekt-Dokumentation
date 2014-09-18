#import "UHDRemoteManagedObject.h"

@class UHDLocationCategory;

@interface UHDRemoteManagedLocation : UHDRemoteManagedObject <MKAnnotation>

@property (nonatomic, retain) NSString *title;
@property (nonatomic) double_t latitude;
@property (nonatomic) double_t longitude;
@property (nonatomic, retain) UHDLocationCategory *category;

@end
