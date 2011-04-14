/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSMutableArray.h> // Unknown library


@interface NSMutableArray (SortedArrayExtensions)
- (unsigned)mf_insertObject:(id)object usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context allowDuplicates:(BOOL)duplicates;	// 0x346b5c71
- (unsigned)mf_removeObject:(id)object usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x346b5c31
@end

@interface NSMutableArray (Convenience)
- (BOOL)mf_addObjectIfAbsent:(id)absent;	// 0x346b5d31
- (BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)equals;	// 0x346b5cf5
@end
