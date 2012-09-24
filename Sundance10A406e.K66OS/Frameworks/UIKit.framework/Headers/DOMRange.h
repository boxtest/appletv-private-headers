/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebSelectionBlock.h"
#import <DOMRange.h> // Unknown library


@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x30ba3ad1
- (id)asDomRange;	// 0x30ba3ae1
- (CGRect)boundingRect;	// 0x30ba35a9
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x30ba371d
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x30ba3bf1
- (BOOL)containsBlock:(id)block;	// 0x30ba39ad
- (BOOL)containsRange:(id)range;	// 0x30ba3ae5
- (id)enclosingDocument;	// 0x30ba3bf9
- (BOOL)isSameBlock:(id)block;	// 0x30ba390d
- (id)largerParent;	// 0x30ba38e5
- (id)parentBlock;	// 0x30ba38a1
- (id)rangeOfContents;	// 0x30ba3bf5
- (BOOL)rendersAsBlock;	// 0x30ba3aa5
- (BOOL)selectable;	// 0x30ba3aa9
- (BOOL)strictlyContainsBlock:(id)block;	// 0x30ba3a29
- (void)unionWithRange:(id)range;	// 0x30ba3469
- (id)webFrame;	// 0x30ba3581
@end
