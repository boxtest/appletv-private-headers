/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSIndexPath, NSDate;

__attribute__((visibility("hidden")))
@interface ATVFeedInitialSelectionElement : ATVFeedElement {
	NSIndexPath *_indexPath;	// 4 = 0x4
	NSDate *_relevanceDate;	// 8 = 0x8
}
@property(retain, nonatomic) NSIndexPath *indexPath;	// G=0x13282d; S=0x13283d; @synthesize=_indexPath
@property(retain, nonatomic) NSDate *relevanceDate;	// G=0x132865; S=0x132875; @synthesize=_relevanceDate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x132491
- (void).cxx_destruct;	// 0x13289d
// declared property getter: - (id)indexPath;	// 0x13282d
// declared property getter: - (id)relevanceDate;	// 0x132865
// declared property setter: - (void)setIndexPath:(id)path;	// 0x13283d
// declared property setter: - (void)setRelevanceDate:(id)date;	// 0x132875
@end

