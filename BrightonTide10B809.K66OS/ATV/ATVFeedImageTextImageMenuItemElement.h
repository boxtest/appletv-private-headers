/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMenuItemElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageTextImageMenuItemElement : ATVFeedMenuItemElement {
	NSString *_imageSeparatorText;	// 4 = 0x4
	ATVFeedImageElement *_leftImage;	// 8 = 0x8
	ATVFeedImageElement *_rightImage;	// 12 = 0xc
	BOOL _dimmed;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL dimmed;	// G=0x165f01; S=0x165f11; @synthesize=_dimmed
@property(copy, nonatomic) NSString *imageSeparatorText;	// G=0x165e9d; S=0x165eb1; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x165ec1; S=0x165ed1; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x165ee1; S=0x165ef1; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x165cb5
- (void)dealloc;	// 0x165e25
// declared property getter: - (BOOL)dimmed;	// 0x165f01
// declared property getter: - (id)imageSeparatorText;	// 0x165e9d
// declared property getter: - (id)leftImage;	// 0x165ec1
// declared property getter: - (id)rightImage;	// 0x165ee1
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x165f11
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x165eb1
// declared property setter: - (void)setLeftImage:(id)image;	// 0x165ed1
// declared property setter: - (void)setRightImage:(id)image;	// 0x165ef1
@end
