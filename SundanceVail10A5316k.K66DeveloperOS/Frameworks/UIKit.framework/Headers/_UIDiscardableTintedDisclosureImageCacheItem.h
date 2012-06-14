/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSDiscardableContent.h"

@class UIImage, UIColor;

__attribute__((visibility("hidden")))
@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {
@private
	UIImage *_tintedImage;	// 4 = 0x4
	UIColor *_tintColor;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) UIColor *tintColor;	// G=0x302c8dd5; @synthesize=_tintColor
@property(readonly, assign, nonatomic) UIImage *tintedImage;	// G=0x302c8dc5; @synthesize=_tintedImage
- (id)initWithPressed:(BOOL)pressed tintColor:(id)color;	// 0x302c8919
- (id)_tintedDisclosureImage:(BOOL)image;	// 0x302c8ae1
- (BOOL)beginContentAccess;	// 0x302c8bd1
- (void)dealloc;	// 0x302c8991
- (void)discardContentIfPossible;	// 0x302c8d69
- (void)endContentAccess;	// 0x302c8cc9
- (unsigned)hash;	// 0x302c8a11
- (BOOL)isContentDiscarded;	// 0x302c8db1
- (BOOL)isEqual:(id)equal;	// 0x302c8a4d
// declared property getter: - (id)tintColor;	// 0x302c8dd5
// declared property getter: - (id)tintedImage;	// 0x302c8dc5
@end
