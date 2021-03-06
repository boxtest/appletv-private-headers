/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Task : VMUMemory_Base <VMUMemory> {
	char *_data;	// 4 = 0x4
	VMURange _addressRange;	// 8 = 0x8
	VMUArchitecture *_architecture;	// 24 = 0x18
}
@property(readonly, assign) VMURange addressRange;	// G=0x3016ff81; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x3016ff9d; converted property
+ (id)memoryWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x301700dd
- (id)initWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x30170061
// converted property getter: - (VMURange)addressRange;	// 0x3016ff81
// converted property getter: - (id)architecture;	// 0x3016ff9d
- (void)dealloc;	// 0x30170371
- (id)description;	// 0x30170191
- (void)finalize;	// 0x30170139
- (BOOL)isContiguous;	// 0x3016ffad
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x30170211
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x30170419
- (id)swappedView;	// 0x3016ffb1
- (id)view;	// 0x30170009
@end

