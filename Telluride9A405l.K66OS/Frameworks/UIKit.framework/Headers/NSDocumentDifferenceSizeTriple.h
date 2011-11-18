/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDocumentDifferenceSize;

__attribute__((visibility("hidden")))
@interface NSDocumentDifferenceSizeTriple : NSObject {
@private
	NSDocumentDifferenceSize *_dueToRecentChangesBeforeSaving;	// 4 = 0x4
	NSDocumentDifferenceSize *_betweenPreservingPreviousVersionAndSaving;	// 8 = 0x8
	NSDocumentDifferenceSize *_betweenPreviousSavingAndSaving;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving;	// G=0x32ff06d1; @synthesize=_betweenPreservingPreviousVersionAndSaving
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving;	// G=0x32ff06e1; @synthesize=_betweenPreviousSavingAndSaving
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving;	// G=0x32ff06c1; @synthesize=_dueToRecentChangesBeforeSaving
- (id)init;	// 0x32ff0539
// declared property getter: - (id)betweenPreservingPreviousVersionAndSaving;	// 0x32ff06d1
// declared property getter: - (id)betweenPreviousSavingAndSaving;	// 0x32ff06e1
- (void)dealloc;	// 0x32ff05e5
- (id)description;	// 0x32ff0659
// declared property getter: - (id)dueToRecentChangesBeforeSaving;	// 0x32ff06c1
@end

