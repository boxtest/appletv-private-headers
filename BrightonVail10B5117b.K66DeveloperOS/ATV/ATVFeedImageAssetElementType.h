/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageAssetElementType : ATVFeedElement {
	float _width;	// 4 = 0x4
	float _height;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_src;	// 16 = 0x10
}
@property(assign, nonatomic) float height;	// G=0x3eedfd; S=0x3eee0d; @synthesize=_height
@property(retain, nonatomic) NSString *name;	// G=0x3eee1d; S=0x3eee2d; @synthesize=_name
@property(retain, nonatomic) NSString *src;	// G=0x3eee55; S=0x3eee65; @synthesize=_src
@property(assign, nonatomic) float width;	// G=0x3eeddd; S=0x3eeded; @synthesize=_width
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3eec65
- (void).cxx_destruct;	// 0x3eee8d
// declared property getter: - (float)height;	// 0x3eedfd
// declared property getter: - (id)name;	// 0x3eee1d
// declared property setter: - (void)setHeight:(float)height;	// 0x3eee0d
// declared property setter: - (void)setName:(id)name;	// 0x3eee2d
// declared property setter: - (void)setSrc:(id)src;	// 0x3eee65
// declared property setter: - (void)setWidth:(float)width;	// 0x3eeded
// declared property getter: - (id)src;	// 0x3eee55
// declared property getter: - (float)width;	// 0x3eeddd
@end
