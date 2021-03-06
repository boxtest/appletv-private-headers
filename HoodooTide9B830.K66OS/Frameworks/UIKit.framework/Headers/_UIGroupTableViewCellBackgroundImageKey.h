/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
@private
	BOOL _opaque;	// 4 = 0x4
	BOOL _selected;	// 5 = 0x5
	CGSize _size;	// 8 = 0x8
	UIColor *_backgroundColor;	// 16 = 0x10
	UIColor *_sectionBorderColor;	// 20 = 0x14
	UIColor *_separatorColor;	// 24 = 0x18
	UIColor *_topShadowColor;	// 28 = 0x1c
	UIColor *_bottomShadowColor;	// 32 = 0x20
	UIColor *_fillColor;	// 36 = 0x24
	UIColor *_selectionColor;	// 40 = 0x28
	float _leftPhase;	// 44 = 0x2c
	float _rightPhase;	// 48 = 0x30
	int _sectionLocation;	// 52 = 0x34
	int _selectionStyle;	// 56 = 0x38
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x300f20b5; S=0x300f1fb5; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x300f215d; S=0x300f2091; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x300f2f15; S=0x300f224d; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x300f2ef5; S=0x300f22a5; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x300f2eb5; S=0x300f216d; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x300f2f05; S=0x300f22b5; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x300f2f25; S=0x300f21e1; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x300f2e15; S=0x300f22c5; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x300f2e25; S=0x300f1eb5; @synthesize=_selected
@property(retain, nonatomic) UIColor *selectionColor;	// G=0x302e15f5; S=0x300f2281; @synthesize=_selectionColor
@property(assign, nonatomic) int selectionStyle;	// G=0x302e1605; S=0x300f22d5; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x301a12e5; S=0x300f2205; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x300f2df9; S=0x300f1ec5; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x300f3005; S=0x300f2229; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x300f20b5
// declared property getter: - (id)bottomShadowColor;	// 0x300f215d
- (id)copyWithZone:(NSZone *)zone;	// 0x300f3015
- (void)dealloc;	// 0x300f3449
- (id)description;	// 0x302e13dd
// declared property getter: - (id)fillColor;	// 0x300f2f15
- (unsigned)hash;	// 0x300f3025
- (BOOL)isEqual:(id)equal;	// 0x300f3209
// declared property getter: - (float)leftPhase;	// 0x300f2ef5
// declared property getter: - (BOOL)opaque;	// 0x300f2eb5
// declared property getter: - (float)rightPhase;	// 0x300f2f05
// declared property getter: - (id)sectionBorderColor;	// 0x300f2f25
// declared property getter: - (int)sectionLocation;	// 0x300f2e15
// declared property getter: - (BOOL)selected;	// 0x300f2e25
// declared property getter: - (id)selectionColor;	// 0x302e15f5
// declared property getter: - (int)selectionStyle;	// 0x302e1605
// declared property getter: - (id)separatorColor;	// 0x301a12e5
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x300f1fb5
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x300f2091
// declared property setter: - (void)setFillColor:(id)color;	// 0x300f224d
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x300f22a5
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x300f216d
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x300f22b5
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x300f21e1
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x300f22c5
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x300f1eb5
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x300f2281
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x300f22d5
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x300f2205
// declared property setter: - (void)setSize:(CGSize)size;	// 0x300f1ec5
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x300f2229
// declared property getter: - (CGSize)size;	// 0x300f2df9
// declared property getter: - (id)topShadowColor;	// 0x300f3005
@end

