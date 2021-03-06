/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTableElement : ATVFeedElement {
@private
	NSArray *_columnDefinitions;	// 28 = 0x1c
	NSArray *_rows;	// 32 = 0x20
}
@property(retain, nonatomic) NSArray *columnDefinitions;	// G=0x34306951; S=0x34306961; @synthesize=_columnDefinitions
@property(retain, nonatomic) NSArray *rows;	// G=0x34306985; S=0x34306995; @synthesize=_rows
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x34306681
// declared property getter: - (id)columnDefinitions;	// 0x34306951
- (void)dealloc;	// 0x343068f1
// declared property getter: - (id)rows;	// 0x34306985
// declared property setter: - (void)setColumnDefinitions:(id)definitions;	// 0x34306961
// declared property setter: - (void)setRows:(id)rows;	// 0x34306995
@end

