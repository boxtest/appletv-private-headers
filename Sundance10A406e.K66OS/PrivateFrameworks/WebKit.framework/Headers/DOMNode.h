/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <DOMNode.h> // Unknown library


@interface DOMNode (WebDOMNodeOperations)
- (id)webArchive;	// 0x30808c85
@end

@interface DOMNode (WebDOMNodeOperationsPendingPublic)
- (CGRect)_renderRect:(bool *)rect;	// 0x30808f15
- (id)markupString;	// 0x30808dc1
@end

@interface DOMNode (WebDOMNodeOperationsPrivate)
- (void)hidePlaceholder;	// 0x30809115
- (BOOL)isHorizontalWritingMode;	// 0x308090e1
- (void)showPlaceholderIfNecessary;	// 0x30809189
- (id)webArchiveByFilteringSubframes:(id)subframes;	// 0x30808f3d
@end

@interface DOMNode (WebDOMNodeOperationsInternal)
- (id)_subresourceURLs;	// 0x308091fd
@end

@interface DOMNode (VisiblePositionExtensions)
- (id)endPosition;	// 0x30864b1d
- (id)rangeOfContents;	// 0x3086482d
- (id)startPosition;	// 0x308648a9
@end
