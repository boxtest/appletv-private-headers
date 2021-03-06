/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHeaderElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_subtitle;	// 32 = 0x20
	ATVFeedImageElement *_image;	// 36 = 0x24
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x342dff3d; S=0x342dff4d; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x342dff09; S=0x342dff19; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x342dfed5; S=0x342dfee5; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x342dfd49
- (void)dealloc;	// 0x342dfe61
// declared property getter: - (id)image;	// 0x342dff3d
// declared property setter: - (void)setImage:(id)image;	// 0x342dff4d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x342dff19
// declared property setter: - (void)setTitle:(id)title;	// 0x342dfee5
// declared property getter: - (id)subtitle;	// 0x342dff09
// declared property getter: - (id)title;	// 0x342dfed5
@end

