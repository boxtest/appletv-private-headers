/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSDate, NSIndexPath;

__attribute__((visibility("hidden")))
@interface ATVFeedInitialSelectionElement : ATVFeedElement {
	NSDate *_relevanceDate;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
}
@property(retain, nonatomic) NSIndexPath *indexPath;	// G=0x1606f5; S=0x160705; @synthesize=_indexPath
@property(retain, nonatomic) NSDate *relevanceDate;	// G=0x1606d5; S=0x1606e5; @synthesize=_relevanceDate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1603dd
- (void)dealloc;	// 0x160671
// declared property getter: - (id)indexPath;	// 0x1606f5
// declared property getter: - (id)relevanceDate;	// 0x1606d5
// declared property setter: - (void)setIndexPath:(id)path;	// 0x160705
// declared property setter: - (void)setRelevanceDate:(id)date;	// 0x1606e5
@end

