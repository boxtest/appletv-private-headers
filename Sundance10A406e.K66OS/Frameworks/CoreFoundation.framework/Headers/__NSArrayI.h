/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayI : NSArray {
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x33a46b25
+ (id)allocWithZone:(NSZone *)zone;	// 0x33aefaf5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33aefaf1
- (id)copyWithZone:(NSZone *)zone;	// 0x33a4927d
- (unsigned)count;	// 0x33a46b81
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33a4928d
- (void)dealloc;	// 0x33a479c5
- (void)finalize;	// 0x33aefa91
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x33a4c561
- (id)objectAtIndex:(unsigned)index;	// 0x33a46de9
@end
