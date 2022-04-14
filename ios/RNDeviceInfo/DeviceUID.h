#import <Foundation/Foundation.h>

@interface DeviceUID : NSObject
+ (NSString *)resetUid;
+ (NSString *)syncUid;
+ (NSString *)uid;
@end
