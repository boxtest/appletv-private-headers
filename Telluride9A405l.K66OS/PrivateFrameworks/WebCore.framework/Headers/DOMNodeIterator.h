/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

__attribute__((visibility("hidden")))
@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x307314ed; 
@property(readonly, retain) id<DOMNodeFilter> filter;	// G=0x30731761; 
@property(readonly, assign) BOOL pointerBeforeReferenceNode;	// G=0x3073151d; 
@property(readonly, retain) DOMNode *referenceNode;	// G=0x307316a5; 
@property(readonly, retain) DOMNode *root;	// G=0x3073181d; 
@property(readonly, assign) unsigned whatToShow;	// G=0x307314c1; 
- (void)dealloc;	// 0x3064ffe1
- (void)detach;	// 0x30650075
// declared property getter: - (BOOL)expandEntityReferences;	// 0x307314ed
// declared property getter: - (id)filter;	// 0x30731761
- (void)finalize;	// 0x307318d9
- (id)nextNode;	// 0x3064f2d1
// declared property getter: - (BOOL)pointerBeforeReferenceNode;	// 0x3073151d
- (id)previousNode;	// 0x3073154d
// declared property getter: - (id)referenceNode;	// 0x307316a5
// declared property getter: - (id)root;	// 0x3073181d
// declared property getter: - (unsigned)whatToShow;	// 0x307314c1
@end
