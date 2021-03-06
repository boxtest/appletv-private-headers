/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuSectionElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_menuItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x163b45; S=0x163b55; @synthesize=_header
@property(retain, nonatomic) NSArray *menuItems;	// G=0x163b65; S=0x163b75; @synthesize=_menuItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1638f1
- (void)dealloc;	// 0x163ae1
// declared property getter: - (id)header;	// 0x163b45
// declared property getter: - (id)menuItems;	// 0x163b65
// declared property setter: - (void)setHeader:(id)header;	// 0x163b55
// declared property setter: - (void)setMenuItems:(id)items;	// 0x163b75
@end

