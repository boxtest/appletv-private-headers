/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedHeaderElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedHeaderWithCountAndButtonsElement : ATVFeedHeaderElement {
	NSArray *_buttons;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *buttons;	// G=0x3fc039; S=0x3fc049; @synthesize=_buttons
@property(assign, nonatomic) unsigned count;	// G=0x3fc071; S=0x3fc081; @synthesize=_count
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3fbe11
- (void).cxx_destruct;	// 0x3fc091
// declared property getter: - (id)buttons;	// 0x3fc039
// declared property getter: - (unsigned)count;	// 0x3fc071
// declared property setter: - (void)setButtons:(id)buttons;	// 0x3fc049
// declared property setter: - (void)setCount:(unsigned)count;	// 0x3fc081
@end

