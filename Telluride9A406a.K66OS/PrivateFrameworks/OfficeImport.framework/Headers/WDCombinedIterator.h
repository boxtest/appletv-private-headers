/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDIterator.h"


__attribute__((visibility("hidden")))
@interface WDCombinedIterator : WDIterator {
@private
	WDIterator *mParentIterator;	// 4 = 0x4
	WDIterator *mChildIterator;	// 8 = 0x8
}
@property(retain, nonatomic) WDIterator *childIterator;	// G=0x32aaa219; S=0x32aaa3a5; @synthesize=mChildIterator
- (id)initWithParentIterator:(id)parentIterator;	// 0x32aaa33d
// declared property getter: - (id)childIterator;	// 0x32aaa219
- (id)childIteratorFrom:(id)from;	// 0x32aaa1f9
- (void)dealloc;	// 0x32aaa429
- (BOOL)hasNext;	// 0x32aaa201
- (void)incrementChildIterator;	// 0x32aaa489
- (id)newChildIteratorFrom:(id)from;	// 0x32aaa1fd
- (id)next;	// 0x32aaa3cd
// declared property setter: - (void)setChildIterator:(id)iterator;	// 0x32aaa3a5
@end

