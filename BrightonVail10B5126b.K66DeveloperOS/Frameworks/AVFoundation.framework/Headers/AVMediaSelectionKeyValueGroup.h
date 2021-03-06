/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

@interface AVMediaSelectionKeyValueGroup : AVMediaSelectionGroup {
	AVAsset *_asset;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_options;	// 16 = 0x10
	AVMediaSelectionOption *_defaultOption;	// 20 = 0x14
}
@property(readonly, retain) AVAsset *asset;	// G=0x302ca375; converted property
@property(readonly, retain) NSDictionary *dictionary;	// G=0x302ca395; converted property
@property(readonly, retain) NSArray *options;	// G=0x302ca385; converted property
- (id)initWithAsset:(id)asset dictionary:(id)dictionary;	// 0x302ca051
- (id)_defaultOption;	// 0x302ca3a9
- (BOOL)_isKeyValueGroup;	// 0x302ca3a5
// converted property getter: - (id)asset;	// 0x302ca375
- (void)dealloc;	// 0x302ca25d
// converted property getter: - (id)dictionary;	// 0x302ca395
- (unsigned)hash;	// 0x302ca355
- (BOOL)isEqual:(id)equal;	// 0x302ca2d5
// converted property getter: - (id)options;	// 0x302ca385
@end

