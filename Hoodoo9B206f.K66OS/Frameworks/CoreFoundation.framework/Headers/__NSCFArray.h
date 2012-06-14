/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a57585
- (BOOL)_isDeallocating;	// 0x31a57531
- (BOOL)_tryRetain;	// 0x31a5751d
- (void)addObject:(id)object;	// 0x319dc39d
- (Class)classForCoder;	// 0x31a57589
- (id)copyWithZone:(NSZone *)zone;	// 0x319d7fa1
- (unsigned)count;	// 0x319b4935
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319c9f09
- (void)finalize;	// 0x31a57541
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x319df295
- (unsigned)hash;	// 0x31a57519
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x319dc3d1
- (BOOL)isEqual:(id)equal;	// 0x319e6111
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x319d7e45
- (id)objectAtIndex:(unsigned)index;	// 0x319b4939
- (oneway void)release;	// 0x319d9be1
- (void)removeLastObject;	// 0x31a575c9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x319dcfb9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x319d7e61
- (id)retain;	// 0x319dc2e9
- (unsigned)retainCount;	// 0x31a5753d
@end
