/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, UIImage, NSNumber;

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
@property(readonly, assign) BOOL legacySuppressOptionsBackground;	// G=0x30df72a9; converted property
@property(retain, nonatomic) UIImage *optionsBackgroundImage;	// G=0x30df76f9; S=0x30df7709; @synthesize=_optionsBackgroundImage
- (id)init;	// 0x30df70fd
- (id)anyDividerImage;	// 0x30df6e59
- (id)anyDividerImageForMini:(BOOL)mini;	// 0x30df6dc5
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x30df6bc1
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x30df6aed
- (id)backgroundPositionAdjustmentInMiniBar:(BOOL)miniBar;	// 0x30df6819
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x30df69c9
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar noFallback:(BOOL)fallback;	// 0x30df693d
- (void)dealloc;	// 0x30df6ff9
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x30df6e89
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x30df6ce9
// converted property getter: - (BOOL)legacySuppressOptionsBackground;	// 0x30df72a9
// declared property getter: - (id)optionsBackgroundImage;	// 0x30df76f9
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x30df69ed
- (void)setBackgroundPositionAdjustment:(id)adjustment inMiniBar:(BOOL)miniBar;	// 0x30df6749
- (void)setContentPositionOffset:(id)offset forSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x30df683d
- (void)setDetail:(XXStruct_wXTbsB *)detail;	// 0x30df72b9
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x30df6be5
- (void)setIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;	// 0x30df76c9
// declared property setter: - (void)setOptionsBackgroundImage:(id)image;	// 0x30df7709
- (void)setTextAttributes:(id)attributes forState:(unsigned)state;	// 0x30df6ead
- (void)takeTextAttributesFrom:(XXStruct_V3NSMA)from forState:(unsigned)state;	// 0x30df714d
- (id)textAttributesForState:(unsigned)state;	// 0x30df6fb1
- (BOOL)wantsTrackingSuppressed;	// 0x30df66ad
@end
