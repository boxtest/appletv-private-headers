/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTableElement : ATVFeedElement {
	NSArray *_columnDefinitions;	// 4 = 0x4
	NSArray *_rows;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *columnDefinitions;	// G=0x14c6dd; S=0x14c6ed; @synthesize=_columnDefinitions
@property(retain, nonatomic) NSArray *rows;	// G=0x14c6fd; S=0x14c70d; @synthesize=_rows
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14c3f5
// declared property getter: - (id)columnDefinitions;	// 0x14c6dd
- (void)dealloc;	// 0x14c679
// declared property getter: - (id)rows;	// 0x14c6fd
// declared property setter: - (void)setColumnDefinitions:(id)definitions;	// 0x14c6ed
// declared property setter: - (void)setRows:(id)rows;	// 0x14c70d
@end
