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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x348f95b5
- (BOOL)_isDeallocating;	// 0x348f9561
- (BOOL)_tryRetain;	// 0x348f954d
- (void)addObject:(id)object;	// 0x3487e3cd
- (Class)classForCoder;	// 0x348f95b9
- (id)copyWithZone:(NSZone *)zone;	// 0x34879fd1
- (unsigned)count;	// 0x3485696d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3486bf39
- (void)finalize;	// 0x348f9571
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x348812c5
- (unsigned)hash;	// 0x348f9549
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3487e401
- (BOOL)isEqual:(id)equal;	// 0x34888141
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34879e75
- (id)objectAtIndex:(unsigned)index;	// 0x34856971
- (oneway void)release;	// 0x3487bc11
- (void)removeLastObject;	// 0x348f95f9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3487efe9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34879e91
- (id)retain;	// 0x3487e319
- (unsigned)retainCount;	// 0x348f956d
@end

