/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSUndoObject.h"


__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark : _NSUndoObject {
	id _groupIdentifier;	// 16 = 0x10
	BOOL _isDiscardable;	// 20 = 0x14
}
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x3467b1f9; S=0x3470ea29; converted property
@property(retain) id groupIdentifier;	// G=0x3470ea19; S=0x3467acf1; converted property
- (void)dealloc;	// 0x3467b585
- (id)description;	// 0x3470ea3d
// converted property getter: - (id)groupIdentifier;	// 0x3470ea19
- (BOOL)isBeginMark;	// 0x3467aa99
// converted property getter: - (BOOL)isDiscardable;	// 0x3467b1f9
// converted property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x3470ea29
// converted property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x3467acf1
@end
