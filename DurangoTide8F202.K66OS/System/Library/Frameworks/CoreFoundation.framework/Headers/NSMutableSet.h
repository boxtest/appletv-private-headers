/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSSet.h"


@interface NSMutableSet : NSSet {
}
+ (id)setWithCapacity:(unsigned)capacity;	// 0x31cca879
- (id)initWithCapacity:(unsigned)capacity;	// 0x31d1cd39
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x31d1ce25
- (void)_setObject:(id)object;	// 0x31d1c65d
- (void)addObject:(id)object;	// 0x31d1cd79
- (void)addObjectsFromArray:(id)array;	// 0x31cad1a5
- (void)intersectSet:(id)set;	// 0x31cba705
- (void)minusSet:(id)set;	// 0x31c8d2cd
- (void)removeAllObjects;	// 0x31d1dfdd
- (void)removeObject:(id)object;	// 0x31d1cd59
- (void)removeObjectsInArray:(id)array;	// 0x31d1d02d
- (void)replaceObject:(id)object;	// 0x31d1c69d
- (void)setSet:(id)set;	// 0x31d1cf51
- (void)unionSet:(id)set;	// 0x31c80741
@end

