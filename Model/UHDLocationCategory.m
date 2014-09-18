#import "UHDLocationCategory.h"

@implementation UHDLocationCategory

@dynamic title;
@dynamic locations;

#pragma mark - Mutable To-Many Accessors

- (NSMutableSet *)mutableLocations {
    return [self mutableSetValueForKey:@"locations"];
}

@end
