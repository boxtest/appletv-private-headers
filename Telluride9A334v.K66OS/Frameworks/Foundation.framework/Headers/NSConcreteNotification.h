/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNotification.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification {
@private
	NSString *name;	// 4 = 0x4
	id object;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	BOOL dyingObject;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x305fa51d; converted property
@property(readonly, retain) id object;	// G=0x305fa52d; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x30600069; converted property
+ (id)newTempNotificationWithName:(id)name object:(id)object userInfo:(id)info;	// 0x305fa411
- (id)initWithName:(id)name object:(id)object userInfo:(id)info;	// 0x306175f1
- (void)dealloc;	// 0x305fa8c9
// converted property getter: - (id)name;	// 0x305fa51d
// converted property getter: - (id)object;	// 0x305fa52d
- (void)recycle;	// 0x305fa881
// converted property getter: - (id)userInfo;	// 0x30600069
@end

