/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVRateControl : BRControl {
	BRImageControl *_backgroundImageControl;	// 80 = 0x50
	BRImageControl *_arrowImageControl;	// 84 = 0x54
	BRTextControl *_rateTextControl;	// 88 = 0x58
	BRTextControl *_saveTextControl;	// 92 = 0x5c
	BRTextControl *_titleControl;	// 96 = 0x60
	BRImageControl *_starImageControl;	// 100 = 0x64
	int _ratingType;	// 104 = 0x68
	int _integerRating;	// 108 = 0x6c
	float _normalizedRating;	// 112 = 0x70
	id _onRatingSelectedBlock;	// 116 = 0x74
	id _onCancelBlock;	// 120 = 0x78
}
@property(copy, nonatomic) id onCancel;	// G=0x1182f1; S=0x118305; @synthesize=_onCancelBlock
@property(copy, nonatomic) id onRatingSelected;	// G=0x1182cd; S=0x1182e1; @synthesize=_onRatingSelectedBlock
- (id)init;	// 0x117a91
- (id)_imageForKey:(id)key;	// 0x118315
- (void)_setIntegerRating:(int)rating shouldSpeak:(BOOL)speak;	// 0x117e05
- (id)_starImageForRating:(int)rating predicted:(BOOL)predicted;	// 0x118369
- (void)_updateStarsShouldSpeak:(BOOL)_updateStars;	// 0x118439
- (id)accessibilityLabel;	// 0x1184e5
- (BOOL)brEventAction:(id)action;	// 0x118175
- (void)dealloc;	// 0x117cdd
- (BOOL)isAccessibilityElement;	// 0x1184e1
- (void)layoutSubcontrols;	// 0x117ee9
// declared property getter: - (id)onCancel;	// 0x1182f1
// declared property getter: - (id)onRatingSelected;	// 0x1182cd
- (void)setInitialRating:(float)rating;	// 0x117e59
- (void)setInitialRatingType:(int)type;	// 0x117ec9
// declared property setter: - (void)setOnCancel:(id)cancel;	// 0x118305
// declared property setter: - (void)setOnRatingSelected:(id)selected;	// 0x1182e1
- (void)setTitle:(id)title;	// 0x117db9
@end

