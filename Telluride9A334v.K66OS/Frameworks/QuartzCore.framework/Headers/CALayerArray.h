/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CALayerArray : NSArray {
@private
	CALayerArrayIvars _ivars;	// 4 = 0x4
}
- (id)initWithLayers:(id *)layers count:(unsigned long)count retain:(BOOL)retain;	// 0x31b2f795
- (id)copyWithZone:(NSZone *)zone;	// 0x31a976d1
- (unsigned)count;	// 0x31a717ed
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31a6f381
- (void)dealloc;	// 0x31a71d99
- (void)getObjects:(id *)objects;	// 0x31b2f749
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31b2f76d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a71801
- (id)objectAtIndex:(unsigned)index;	// 0x31aa0efd
@end

