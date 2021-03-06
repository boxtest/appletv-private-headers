/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedHeadToHeadBannerElement : ATVFeedElement {
	ATVFeedImageElement *_backgroundImage;	// 4 = 0x4
	ATVFeedImageElement *_leftImage;	// 8 = 0x8
	ATVFeedImageElement *_rightImage;	// 12 = 0xc
	NSString *_imageSeparatorText;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFeedImageElement *backgroundImage;	// G=0x167149; S=0x167159; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *imageSeparatorText;	// G=0x1671a9; S=0x1671b9; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x167169; S=0x167179; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x167189; S=0x167199; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x166f45
// declared property getter: - (id)backgroundImage;	// 0x167149
- (void)dealloc;	// 0x1670bd
// declared property getter: - (id)imageSeparatorText;	// 0x1671a9
// declared property getter: - (id)leftImage;	// 0x167169
// declared property getter: - (id)rightImage;	// 0x167189
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x167159
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x1671b9
// declared property setter: - (void)setLeftImage:(id)image;	// 0x167179
// declared property setter: - (void)setRightImage:(id)image;	// 0x167199
@end

