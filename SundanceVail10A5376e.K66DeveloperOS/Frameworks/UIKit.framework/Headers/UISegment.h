/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class NSArray, _UISegmentedControlAppearanceStorage, _UIBadgeView, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView {
	UIView *_info;	// 96 = 0x60
	_UISegmentedControlAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	float _width;	// 104 = 0x68
	CGSize _contentOffset;	// 108 = 0x6c
	UIColor *_tintColor;	// 116 = 0x74
	int _barStyle;	// 120 = 0x78
	unsigned _rightSegmentState;	// 124 = 0x7c
	NSString *_badgeValue;	// 128 = 0x80
	_UIBadgeView *_badgeView;	// 132 = 0x84
	id _objectValue;	// 136 = 0x88
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned isDisclosure : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
	} _segmentFlags;	// 140 = 0x8c
	NSArray *_infoConstraints;	// 144 = 0x90
}
@property(copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints;	// G=0x3042c395; S=0x3042c3a9; @synthesize
@property(copy, nonatomic) NSString *badgeValue;	// G=0x3042b6f9; S=0x3042b709; 
@property(readonly, assign) UIView *badgeView;	// G=0x302e9b3d; 
@property(assign) int controlSize;	// G=0x3042b7e9; S=0x3036e1fd; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x302e37f9; S=0x3042b68d; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x3042b7d5; S=0x302e5bb9; 
@property(retain) id objectValue;	// G=0x3042c29d; S=0x3042bfe1; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x302e8f09; S=0x302e8bb5; 
- (id)initWithCoder:(id)coder;	// 0x3042aacd
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x302e35d9
- (float)_barHeight;	// 0x302e98d1
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x302e38e9
- (CGRect)_contentRectForBounds:(CGRect)bounds;	// 0x3042b981
- (id)_currentOptionsStyleTextColor;	// 0x303726f5
- (id)_currentOptionsStyleTextShadowColor;	// 0x30372865
- (id)_dividerImage;	// 0x302e4aed
- (id)_dividerImageIsCustom:(BOOL *)custom;	// 0x302e4b01
- (float)_idealWidth;	// 0x302e9719
// declared property getter: - (id)_infoConstraints;	// 0x3042c395
- (void)_invalidateInfoConstraints;	// 0x3042bbd9
- (BOOL)_isInMiniBar;	// 0x302e4921
- (UIEdgeInsets)_paddingInsets;	// 0x302e9905
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3042acf5
- (void)_positionInfo;	// 0x302e4649
- (unsigned)_segmentState;	// 0x302e45a9
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x302e5a71
// declared property setter: - (void)_setInfoConstraints:(id)constraints;	// 0x3042c3a9
- (id)_texturedFillImage;	// 0x3042b21d
- (id)_texturedLeftCapImage;	// 0x3042b185
- (id)_texturedRightCapImage;	// 0x3042b1d1
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x3042b075
- (void)_updateBackgroundImage;	// 0x302e4eb9
- (void)_updateTextColors;	// 0x302e3a35
- (void)_updateTexturedBackgroundImage;	// 0x303951c1
- (void)animateAdd:(BOOL)add;	// 0x3042b801
- (void)animateRemoveForWidth:(float)width;	// 0x3042b83d
// declared property getter: - (id)badgeValue;	// 0x3042b6f9
// declared property getter: - (id)badgeView;	// 0x302e9b3d
- (CGRect)contentRect;	// 0x302e48c1
- (CGSize)contentSize;	// 0x302e97ad
// declared property getter: - (int)controlSize;	// 0x3042b7e9
- (void)dealloc;	// 0x30370399
- (id)disabledTextColor;	// 0x3042b3b9
- (void)encodeWithCoder:(id)coder;	// 0x3042ad79
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3042c311
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3037b0b9
- (id)infoName;	// 0x3042c2ad
- (void)insertDividerView;	// 0x302e4949
// converted property getter: - (BOOL)isHighlighted;	// 0x302e37f9
// declared property getter: - (BOOL)isMomentary;	// 0x3042b7d5
// declared property getter: - (BOOL)isSelected;	// 0x302e8f09
// converted property getter: - (id)objectValue;	// 0x3042c29d
- (void)setAutosizeText:(BOOL)text;	// 0x3042b625
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x3042b709
- (void)setBarStyle:(int)style;	// 0x3042b50d
- (void)setBounds:(CGRect)bounds;	// 0x3042bf09
- (void)setContentOffset:(CGSize)offset;	// 0x3037cf0d
// declared property setter: - (void)setControlSize:(int)size;	// 0x3036e1fd
- (void)setEnabled:(BOOL)enabled;	// 0x302e5a11
- (void)setFrame:(CGRect)frame;	// 0x302e3811
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3042b68d
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x302e5bb9
// converted property setter: - (void)setObjectValue:(id)value;	// 0x3042bfe1
- (void)setPosition:(unsigned)position;	// 0x302e9a49
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x302e8bb5
- (void)setShowDivider:(BOOL)divider;	// 0x302e9ac5
- (void)setTintColor:(id)color;	// 0x3036ed99
- (void)updateConstraints;	// 0x3042bc71
- (void)updateDividerViewForChangedSegment:(id)changedSegment;	// 0x302e8c25
- (void)updateForAppearance:(id)appearance style:(int)style;	// 0x3036ebd1
- (BOOL)useBlockyMagnificationInClassic;	// 0x3042c381
- (id)viewForBaselineLayout;	// 0x3042c385
@end
