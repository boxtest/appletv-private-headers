/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSDiscardableContent.h"

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {
	UIImage *_tintedImage;	// 4 = 0x4
	UIColor *_tintColor;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) UIColor *tintColor;	// G=0x30b213bd; @synthesize=_tintColor
@property(readonly, assign, nonatomic) UIImage *tintedImage;	// G=0x30b213ad; @synthesize=_tintedImage
- (id)initWithPressed:(BOOL)pressed tintColor:(id)color;	// 0x30b20f01
- (id)_tintedDisclosureImage:(BOOL)image;	// 0x30b210c9
- (BOOL)beginContentAccess;	// 0x30b211b9
- (void)dealloc;	// 0x30b20f79
- (void)discardContentIfPossible;	// 0x30b21351
- (void)endContentAccess;	// 0x30b212b1
- (unsigned)hash;	// 0x30b20ff9
- (BOOL)isContentDiscarded;	// 0x30b21399
- (BOOL)isEqual:(id)equal;	// 0x30b21035
// declared property getter: - (id)tintColor;	// 0x30b213bd
// declared property getter: - (id)tintedImage;	// 0x30b213ad
@end

