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
@property(readonly, assign) VMURange addressRange;	// G=0x30bb87f5; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x30bb8819; converted property
+ (id)memoryWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x30bb88c9
- (id)initWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x30bb882d
// converted property getter: - (VMURange)addressRange;	// 0x30bb87f5
// converted property getter: - (id)architecture;	// 0x30bb8819
- (void)dealloc;	// 0x30bb8985
- (id)description;	// 0x30bb8a25
- (void)finalize;	// 0x30bb8925
- (BOOL)isContiguous;	// 0x30bb8829
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x30bb8cf9
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x30bb8b59
- (id)swappedView;	// 0x30bb8aa1
- (id)view;	// 0x30bb8afd
@end

