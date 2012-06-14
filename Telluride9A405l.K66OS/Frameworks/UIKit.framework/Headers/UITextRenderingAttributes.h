/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {
	UIFont *_font;	// 4 = 0x4
	float _minimumFontSize;	// 8 = 0x8
	float _actualFontSize;	// 12 = 0xc
	float _lineSpacing;	// 16 = 0x10
	int _lineBreakMode;	// 20 = 0x14
	int _baselineAdjustment;	// 24 = 0x18
	float _trackingAdjustment;	// 28 = 0x1c
	float _minimumTrackingAdjustment;	// 32 = 0x20
	float _actualTrackingAdjustment;	// 36 = 0x24
	int _alignment;	// 40 = 0x28
	BOOL _includeEmoji;	// 44 = 0x2c
	CGRect _truncationRect;	// 48 = 0x30
	BOOL _drawUnderline;	// 64 = 0x40
@private
	id *renderString;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) float actualFontSize;	// G=0x32d00369; @synthesize=_actualFontSize
@property(readonly, assign, nonatomic) float actualTrackingAdjustment;	// G=0x32e30981; @synthesize=_actualTrackingAdjustment
@property(assign, nonatomic) int alignment;	// G=0x32d4d1e9; S=0x32e30991; @synthesize=_alignment
@property(assign, nonatomic) int baselineAdjustment;	// G=0x32d00379; S=0x32c85a25; @synthesize=_baselineAdjustment
@property(assign, nonatomic) BOOL drawUnderline;	// G=0x32e309d5; S=0x32e309e5; @synthesize=_drawUnderline
@property(retain, nonatomic) UIFont *font;	// G=0x32cffe75; S=0x32c859cd; @synthesize=_font
@property(assign, nonatomic) BOOL includeEmoji;	// G=0x32d00051; S=0x32ce376d; @synthesize=_includeEmoji
@property(assign, nonatomic) int lineBreakMode;	// G=0x32e30971; S=0x32c85a05; @synthesize=_lineBreakMode
@property(assign, nonatomic) float lineSpacing;	// G=0x32d4d1f9; S=0x32e30961; @synthesize=_lineSpacing
@property(assign, nonatomic) float minimumFontSize;	// G=0x32d00349; S=0x32c859f5; @synthesize=_minimumFontSize
@property(assign, nonatomic) float minimumTrackingAdjustment;	// G=0x32d00359; S=0x32c85a15; @synthesize=_minimumTrackingAdjustment
@property(assign, nonatomic) id *renderString;	// G=0x32d00061; S=0x32e309c5; @synthesize
@property(assign, nonatomic) float trackingAdjustment;	// G=0x32cffe95; S=0x32d50b09; @synthesize=_trackingAdjustment
@property(assign, nonatomic) CGRect truncationRect;	// G=0x32e309a1; S=0x32d00005; @synthesize=_truncationRect
+ (id)attributesWithSystemFontOfSize:(float)size;	// 0x32d4b19d
- (id)init;	// 0x32c8598d
// declared property getter: - (float)actualFontSize;	// 0x32d00369
// declared property getter: - (float)actualTrackingAdjustment;	// 0x32e30981
// declared property getter: - (int)alignment;	// 0x32d4d1e9
// declared property getter: - (int)baselineAdjustment;	// 0x32d00379
- (id)copyWithZone:(NSZone *)zone;	// 0x32cffeb5
- (void)dealloc;	// 0x32c86989
// declared property getter: - (BOOL)drawUnderline;	// 0x32e309d5
- (int)ellipsisStyle;	// 0x32d00021
// declared property getter: - (id)font;	// 0x32cffe75
// declared property getter: - (BOOL)includeEmoji;	// 0x32d00051
- (float)letterSpacing;	// 0x32d00041
// declared property getter: - (int)lineBreakMode;	// 0x32e30971
// declared property getter: - (float)lineSpacing;	// 0x32d4d1f9
// declared property getter: - (float)minimumFontSize;	// 0x32d00349
// declared property getter: - (float)minimumTrackingAdjustment;	// 0x32d00359
// declared property getter: - (id *)renderString;	// 0x32d00061
- (void)setActualFontSize:(float)size;	// 0x32cffe85
- (void)setActualTrackingAdjustment:(float)adjustment;	// 0x32cffea5
// declared property setter: - (void)setAlignment:(int)alignment;	// 0x32e30991
// declared property setter: - (void)setBaselineAdjustment:(int)adjustment;	// 0x32c85a25
// declared property setter: - (void)setDrawUnderline:(BOOL)underline;	// 0x32e309e5
// declared property setter: - (void)setFont:(id)font;	// 0x32c859cd
// declared property setter: - (void)setIncludeEmoji:(BOOL)emoji;	// 0x32ce376d
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x32c85a05
// declared property setter: - (void)setLineSpacing:(float)spacing;	// 0x32e30961
// declared property setter: - (void)setMinimumFontSize:(float)size;	// 0x32c859f5
// declared property setter: - (void)setMinimumTrackingAdjustment:(float)adjustment;	// 0x32c85a15
// declared property setter: - (void)setRenderString:(id *)string;	// 0x32e309c5
// declared property setter: - (void)setTrackingAdjustment:(float)adjustment;	// 0x32d50b09
// declared property setter: - (void)setTruncationRect:(CGRect)rect;	// 0x32d00005
// declared property getter: - (float)trackingAdjustment;	// 0x32cffe95
// declared property getter: - (CGRect)truncationRect;	// 0x32e309a1
@end
