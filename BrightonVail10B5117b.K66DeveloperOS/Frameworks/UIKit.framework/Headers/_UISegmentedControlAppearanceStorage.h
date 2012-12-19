/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject {
	UIImage *_optionsBackgroundImage;	// 4 = 0x4
	NSMutableDictionary *_backgroundImages;	// 8 = 0x8
	NSMutableDictionary *_miniBackgroundImages;	// 12 = 0xc
	NSMutableDictionary *_dividerImages;	// 16 = 0x10
	NSMutableDictionary *_miniDividerImages;	// 20 = 0x14
	NSMutableDictionary *_textAttributesForState;	// 24 = 0x18
	NSNumber *_backgroundPositionAdjustmentInBar;	// 28 = 0x1c
	NSNumber *_backgroundPositionAdjustmentInMiniBar;	// 32 = 0x20
	NSMutableDictionary *_contentPositionOffsets;	// 36 = 0x24
	NSMutableDictionary *_miniContentPositionOffsets;	// 40 = 0x28
	BOOL _legacyDontHighlight;	// 44 = 0x2c
	BOOL _legacySuppressOptionsBackground;	// 45 = 0x2d
	BOOL _isTiled;	// 46 = 0x2e
	unsigned _leftCapWidth;	// 48 = 0x30
	unsigned _rightCapWidth;	// 52 = 0x34
}
@property(readonly, assign) BOOL legacySuppressOptionsBackground;	// G=0x32de4ac9; converted property
@property(retain, nonatomic) UIImage *optionsBackgroundImage;	// G=0x32ea12f1; S=0x32ea1301; @synthesize=_optionsBackgroundImage
- (id)init;	// 0x32de4395
- (id)anyDividerImage;	// 0x32ea0d21
- (id)anyDividerImageForMini:(BOOL)mini;	// 0x32de4add
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x32de4659
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x32de467d
- (id)backgroundPositionAdjustmentInMiniBar:(BOOL)miniBar;	// 0x32e0fad9
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x32de4751
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar noFallback:(BOOL)fallback;	// 0x32de43e5
- (void)dealloc;	// 0x32de6231
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x32e0bd49
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x32de4579
// converted property getter: - (BOOL)legacySuppressOptionsBackground;	// 0x32de4ac9
// declared property getter: - (id)optionsBackgroundImage;	// 0x32ea12f1
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x32e0b9f5
- (void)setBackgroundPositionAdjustment:(id)adjustment inMiniBar:(BOOL)miniBar;	// 0x32ea0c51
- (void)setContentPositionOffset:(id)offset forSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x32de4475
- (void)setDetail:(XXStruct_wXTbsB *)detail;	// 0x32ea0eb1
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x32e0bd6d
- (void)setIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;	// 0x32ea12c1
// declared property setter: - (void)setOptionsBackgroundImage:(id)image;	// 0x32ea1301
- (void)setTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32e0bc45
- (void)takeTextAttributesFrom:(XXStruct_V3NSMA)from forState:(unsigned)state;	// 0x32ea0d55
- (id)textAttributesForState:(unsigned)state;	// 0x32e0bbf9
- (BOOL)wantsTrackingSuppressed;	// 0x32e0fafd
@end
