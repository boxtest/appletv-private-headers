/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSLock : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x35591229; S=0x355911ed; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x35504fed
- (id)init;	// 0x35504ff5
- (void)dealloc;	// 0x355077f9
- (id)description;	// 0x35591129
- (void)finalize;	// 0x35590e59
- (void)lock;	// 0x35500451
- (BOOL)lockBeforeDate:(id)date;	// 0x35590f59
// converted property getter: - (id)name;	// 0x35591229
// converted property setter: - (void)setName:(id)name;	// 0x355911ed
- (BOOL)tryLock;	// 0x355910f9
- (void)unlock;	// 0x355004d5
@end

