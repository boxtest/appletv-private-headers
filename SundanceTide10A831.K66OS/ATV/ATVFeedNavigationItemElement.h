/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedNavigationItemElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_url;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *title;	// G=0x15e679; S=0x15e68d; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x15e69d; S=0x15e6b1; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15e559
- (void)dealloc;	// 0x15e615
// declared property setter: - (void)setTitle:(id)title;	// 0x15e68d
// declared property setter: - (void)setUrl:(id)url;	// 0x15e6b1
// declared property getter: - (id)title;	// 0x15e679
// declared property getter: - (id)url;	// 0x15e69d
@end
