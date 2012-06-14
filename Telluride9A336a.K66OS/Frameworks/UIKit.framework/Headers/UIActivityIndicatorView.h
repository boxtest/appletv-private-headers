/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, NSString, NSArray;

@interface UIActivityIndicatorView : UIView <NSCoding> {
@private
	double _duration;	// 48 = 0x30
	BOOL _animating;	// 56 = 0x38
	int _activityIndicatorViewStyle;	// 60 = 0x3c
	int _actualActivityIndicatorViewStyle;	// 64 = 0x40
	BOOL _hidesWhenStopped;	// 68 = 0x44
	float _width;	// 72 = 0x48
	BOOL _hasShadow;	// 76 = 0x4c
	UIColor *_color;	// 80 = 0x50
	int _spokeCount;	// 84 = 0x54
	CGSize _shadowOffset;	// 88 = 0x58
	UIColor *_shadowColor;	// 96 = 0x60
	float _innerRadius;	// 100 = 0x64
	int _spokeFrameRatio;	// 104 = 0x68
	NSArray *_spokeImages;	// 108 = 0x6c
	BOOL _clockWise;	// 112 = 0x70
	BOOL _spinning;	// 113 = 0x71
	float _spinningDuration;	// 116 = 0x74
	BOOL _useArtwork;	// 120 = 0x78
	NSString *_artBackupKeyString;	// 124 = 0x7c
	UIImageView *_internalView;	// 128 = 0x80
}
@property(assign, nonatomic) int activityIndicatorViewStyle;	// G=0x3533c475; S=0x3517e311; @synthesize=_activityIndicatorViewStyle
@property(assign, getter=isAnimating) BOOL animating;	// G=0x3517bd25; S=0x3533c42d; converted property
@property(readonly, assign, nonatomic) NSString *artBackupKeyString;	// G=0x3533c591; @synthesize=_artBackupKeyString
@property(assign, nonatomic) BOOL clockWise;	// G=0x3533c531; S=0x3533b905; @synthesize=_clockWise
@property(retain, nonatomic) UIColor *color;	// G=0x3533c4b5; S=0x3533b6bd; @synthesize=_color
@property(assign) BOOL hasShadow;	// G=0x3533c495; S=0x3533c4a5; @synthesize=_hasShadow
@property(assign, nonatomic) BOOL hidesWhenStopped;	// G=0x352006a1; S=0x3517bcdd; @synthesize=_hidesWhenStopped
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x3533b5f5; S=0x3533b619; converted property
@property(assign, nonatomic) float innerRadius;	// G=0x3533c501; S=0x3533b895; @synthesize=_innerRadius
@property(readonly, assign, nonatomic) UIImageView *internalView;	// G=0x3533c5a1; @synthesize=_internalView
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x3533c4f1; S=0x3533b75d; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x3533c4d5; S=0x3533b7f9; @synthesize=_shadowOffset
@property(assign) BOOL spinning;	// G=0x3533c541; S=0x3533c551; @synthesize=_spinning
@property(assign, nonatomic) float spinningDuration;	// G=0x3533c561; S=0x3533b935; @synthesize=_spinningDuration
@property(assign, nonatomic) int spokeCount;	// G=0x3533c4c5; S=0x3533b869; @synthesize=_spokeCount
@property(assign, nonatomic) int spokeFrameRatio;	// G=0x3533c511; S=0x3533b8d1; @synthesize=_spokeFrameRatio
@property(readonly, assign) NSArray *spokeImages;	// G=0x3533c521; @synthesize=_spokeImages
@property(assign, nonatomic) BOOL useArtwork;	// G=0x3533c571; S=0x3533c581; @synthesize=_useArtwork
@property(assign, nonatomic) float width;	// G=0x3533c485; S=0x3533b681; @synthesize=_width
+ (id)_loadResourcesForStyle:(int)style;	// 0x3517cb41
+ (CGSize)defaultSizeForStyle:(int)style;	// 0x3517b999
+ (CGSize)size;	// 0x3533c3f9
- (id)initWithActivityIndicatorStyle:(int)activityIndicatorStyle;	// 0x3517b8f9
- (id)initWithCoder:(id)coder;	// 0x3533b291
- (id)initWithFrame:(CGRect)frame;	// 0x3533b255
- (float)_alphaValueForStep:(int)step;	// 0x3533ba95
- (void)_applicationDidEnterBackground:(id)_application;	// 0x3517fa39
- (void)_applicationWillEnterForeground:(id)_application;	// 0x3533b229
- (id)_artBackupKey;	// 0x3517c839
- (BOOL)_canCustomize;	// 0x3533c3d5
- (BOOL)_canCustomizeStyle:(int)style;	// 0x3533c39d
- (id)_commonInitWithFrame:(CGRect)frame;	// 0x3517b9d5
- (int)_customStyleForStyle:(int)style;	// 0x3533c375
- (id)_defaulColorForStyle:(int)style;	// 0x3517c409
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x351ffa09
- (void)_feedTheGear;	// 0x3517bd35
- (id)_generateImages;	// 0x3533c0c9
- (id)_imageForStep:(int)step;	// 0x3533bb39
- (BOOL)_isArtWorkBased;	// 0x3517c819
- (id)_layoutInfosForStyle:(int)style;	// 0x3517c2b1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3533b4a9
- (void)_setUpAnimation;	// 0x351ffd31
- (BOOL)_shouldGoBackToBaseStyle;	// 0x3517c755
- (BOOL)_shouldGoToCustomStyle;	// 0x3517c5c5
- (float)_spokeLengthForGearWidth:(float)gearWidth;	// 0x3533ba09
- (float)_spokeWidthForGearWidth:(float)gearWidth;	// 0x3533b95d
- (id)_styleNameForStyle:(int)style;	// 0x3533c071
- (void)_tearDownAnimation;	// 0x35200709
- (void)_updateInternalViewFrameWithBounds:(CGRect)bounds;	// 0x3517bb79
- (float)_widthForGearWidth:(float)gearWidth;	// 0x3533ba6d
// declared property getter: - (int)activityIndicatorViewStyle;	// 0x3533c475
- (id)artBackupKey;	// 0x3533c029
// declared property getter: - (id)artBackupKeyString;	// 0x3533c591
// declared property getter: - (BOOL)clockWise;	// 0x3533c531
// declared property getter: - (id)color;	// 0x3533c4b5
- (void)dealloc;	// 0x35204809
- (void)encodeWithCoder:(id)coder;	// 0x3533b4fd
- (void)generateImages;	// 0x3533c3c5
// declared property getter: - (BOOL)hasShadow;	// 0x3533c495
// declared property getter: - (BOOL)hidesWhenStopped;	// 0x352006a1
// declared property getter: - (float)innerRadius;	// 0x3533c501
// declared property getter: - (id)internalView;	// 0x3533c5a1
// converted property getter: - (BOOL)isAnimating;	// 0x3517bd25
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3534051d
// converted property getter: - (BOOL)isHighlighted;	// 0x3533b5f5
// declared property setter: - (void)setActivityIndicatorViewStyle:(int)style;	// 0x3517e311
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x3533c42d
- (void)setAnimationDuration:(double)duration;	// 0x351ff879
- (void)setBounds:(CGRect)bounds;	// 0x3533c159
// declared property setter: - (void)setClockWise:(BOOL)wise;	// 0x3533b905
// declared property setter: - (void)setColor:(id)color;	// 0x3533b6bd
- (void)setFrame:(CGRect)frame;	// 0x3517bb01
// declared property setter: - (void)setHasShadow:(BOOL)shadow;	// 0x3533c4a5
// declared property setter: - (void)setHidesWhenStopped:(BOOL)stopped;	// 0x3517bcdd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3533b619
// declared property setter: - (void)setInnerRadius:(float)radius;	// 0x3533b895
// declared property setter: - (void)setShadowColor:(id)color;	// 0x3533b75d
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x3533b7f9
// declared property setter: - (void)setSpinning:(BOOL)spinning;	// 0x3533c551
// declared property setter: - (void)setSpinningDuration:(float)duration;	// 0x3533b935
// declared property setter: - (void)setSpokeCount:(int)count;	// 0x3533b869
// declared property setter: - (void)setSpokeFrameRatio:(int)ratio;	// 0x3533b8d1
- (void)setStyle:(int)style;	// 0x3533c41d
// declared property setter: - (void)setUseArtwork:(BOOL)artwork;	// 0x3533c581
// declared property setter: - (void)setWidth:(float)width;	// 0x3533b681
// declared property getter: - (id)shadowColor;	// 0x3533c4f1
// declared property getter: - (CGSize)shadowOffset;	// 0x3533c4d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3517e469
// declared property getter: - (BOOL)spinning;	// 0x3533c541
// declared property getter: - (float)spinningDuration;	// 0x3533c561
// declared property getter: - (int)spokeCount;	// 0x3533c4c5
// declared property getter: - (int)spokeFrameRatio;	// 0x3533c511
// declared property getter: - (id)spokeImages;	// 0x3533c521
- (void)startAnimating;	// 0x351ffcd1
- (void)startAnimation;	// 0x3533c455
- (void)stopAnimating;	// 0x352006b1
- (void)stopAnimation;	// 0x3533c465
// declared property getter: - (BOOL)useArtwork;	// 0x3533c571
// declared property getter: - (float)width;	// 0x3533c485
@end
