#import "UHDRemoteManagedObject.h"
#import "UHDBuilding.h"

@interface UHDLocationCategory : UHDRemoteManagedObject 

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSSet *locations;

- (NSMutableSet *)mutableLocations;

@end
