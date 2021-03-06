/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class UITextSelection, UIWebDocumentView;
@protocol UIWebSelectionBlock;

__attribute__((visibility("hidden")))
@interface UIWebSelection : NSObject {
	UIWebDocumentView *_documentView;	// 4 = 0x4
	id<UIWebSelectionBlock> _base;	// 8 = 0x8
	id<UIWebSelectionBlock> _extent;	// 12 = 0xc
	CGSize _desiredSize;	// 16 = 0x10
	UITextSelection *_textSelection;	// 24 = 0x18
}
@property(retain, nonatomic) id<UIWebSelectionBlock> base;	// G=0x2f74ae39; S=0x2f74ae49; @synthesize=_base
@property(readonly, assign, nonatomic) CGRect boundingRect;	// G=0x2f748719; @dynamic
@property(assign, nonatomic) CGSize desiredSize;	// G=0x2f74ae89; S=0x2f74aea1; @synthesize=_desiredSize
@property(readonly, assign, nonatomic) UIWebDocumentView *documentView;	// G=0x2f74ae29; @synthesize=_documentView
@property(retain, nonatomic) id<UIWebSelectionBlock> extent;	// G=0x2f74ae59; S=0x2f74ae69; @synthesize=_extent
@property(readonly, assign, nonatomic, getter=isTextOnly) BOOL textOnly;	// G=0x2f74a4c5; 
@property(readonly, assign, nonatomic) UITextSelection *textSelection;	// G=0x2f74ae79; @synthesize=_textSelection
@property(readonly, assign, nonatomic) BOOL valid;	// G=0x2f7486fd; 
- (id)initWithDocumentView:(id)documentView;	// 0x2f7481a1
- (void)adjustSelectionFromPoint:(CGPoint)point towardsPoint:(CGPoint)point2 withNewRect:(CGRect)newRect;	// 0x2f7489e5
- (void)applySelectionToWebDocumentView;	// 0x2f74ab21
- (id)asDomRange;	// 0x2f74aa45
// declared property getter: - (id)base;	// 0x2f74ae39
- (id)blockAtPoint:(CGPoint)point;	// 0x2f748a81
- (BOOL)blockContainsPoint:(CGPoint)point;	// 0x2f74ab75
- (id)blockOfSameWidthAtPoint:(CGPoint)point;	// 0x2f748ca9
// declared property getter: - (CGRect)boundingRect;	// 0x2f748719
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x2f74873d
- (CGRect)boundingTextSelectionRect;	// 0x2f74a6dd
- (CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int *)position;	// 0x2f74a701
- (void)dealloc;	// 0x2f748239
- (id)description;	// 0x2f74ac4d
// declared property getter: - (CGSize)desiredSize;	// 0x2f74ae89
- (float)distanceBetweenFirstRect:(CGRect)rect second:(CGRect)second edge:(int)edge;	// 0x2f748db1
// declared property getter: - (id)documentView;	// 0x2f74ae29
- (id)domDocument;	// 0x2f7488f5
- (id)duplicate;	// 0x2f74a395
- (id)elementAtPoint:(CGPoint)point;	// 0x2f748c11
// declared property getter: - (id)extent;	// 0x2f74ae59
- (void)growFromEdge:(int)edge;	// 0x2f748e29
- (void)growSelectionTowardsPoint:(CGPoint)point;	// 0x2f749a45
- (BOOL)isEqual:(id)equal;	// 0x2f7498e9
- (BOOL)isEqualToSelection:(id)selection;	// 0x2f74ad5d
// declared property getter: - (BOOL)isTextOnly;	// 0x2f74a4c5
- (void)moveEdge:(int)edge outwards:(BOOL)outwards;	// 0x2f749a1d
- (void)selectionChanged;	// 0x2f74a975
// declared property setter: - (void)setBase:(id)base;	// 0x2f74ae49
// declared property setter: - (void)setDesiredSize:(CGSize)size;	// 0x2f74aea1
// declared property setter: - (void)setExtent:(id)extent;	// 0x2f74ae69
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x2f7482b1
- (void)setSelectionWithPoint:(CGPoint)point ignoringLargeBlocks:(BOOL)blocks;	// 0x2f7482d5
- (void)shrinkFromEdge:(int)edge;	// 0x2f749369
- (void)shrinkSelectionFromPoint:(CGPoint)point towardsPoint:(CGPoint)point2 withNewRect:(CGRect)newRect;	// 0x2f749ef9
- (id)textRepresentation;	// 0x2f74891d
// declared property getter: - (id)textSelection;	// 0x2f74ae79
- (id)textSelectionRects;	// 0x2f74a51d
- (BOOL)tryToShrinkToBaseAndExtent;	// 0x2f749d95
- (void)useBlock;	// 0x2f74a4f1
// declared property getter: - (BOOL)valid;	// 0x2f7486fd
- (id)webArchive;	// 0x2f748965
- (id)webFrame;	// 0x2f7488cd
- (id)webView;	// 0x2f7488a5
@end

