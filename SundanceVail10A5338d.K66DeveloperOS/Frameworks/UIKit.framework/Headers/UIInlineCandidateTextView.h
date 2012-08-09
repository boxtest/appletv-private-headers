/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSArray, InlineCandidateCell;

__attribute__((visibility("hidden")))
@interface UIInlineCandidateTextView : UIView {
	int m_type;	// 84 = 0x54
	int m_edgeType;	// 88 = 0x58
	BOOL m_animating;	// 92 = 0x5c
	NSMutableArray *_candidateCellArray;	// 96 = 0x60
	NSArray *_candidates;	// 100 = 0x64
	id _target;	// 104 = 0x68
	SEL _action;	// 108 = 0x6c
	unsigned _selectedItem;	// 112 = 0x70
	InlineCandidateCell *_currentlyPushedItem;	// 116 = 0x74
	BOOL _showingArrow;	// 120 = 0x78
	BOOL _arrowHighlighted;	// 121 = 0x79
	BOOL _phraseEditable;	// 122 = 0x7a
}
@property(assign) int edgeType;	// G=0x30e7dfa1; S=0x30e7dfc1; converted property
@property(assign) unsigned selectedItem;	// G=0x30e7e845; S=0x30e7e7a5; converted property
- (id)initWithFrame:(CGRect)frame candidates:(id)candidates type:(int)type maxScreenWidth:(float)width hasExtensionCandidates:(BOOL)candidates5;	// 0x30e7dce9
- (BOOL)_arrowHighlighted;	// 0x30e7e751
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x30e7f025
- (void)_cellSelected:(id)selected;	// 0x30e7e0c1
- (float)_layoutCandidates:(id)candidates maxCount:(int)count height:(float)height maxScreenWidth:(float)width hasExtensionCandidates:(BOOL)candidates5;	// 0x30e7e149
- (void)_mouseUp:(GSEventRef)up wasCancelled:(BOOL)cancelled;	// 0x30e7eec9
- (void)dealloc;	// 0x30e7df3d
- (void)drawRect:(CGRect)rect;	// 0x30e7e855
// converted property getter: - (int)edgeType;	// 0x30e7dfa1
- (id)findCell:(CGPoint)cell;	// 0x30e7eb51
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30e7f445
- (void)mouseDown:(GSEventRef)down;	// 0x30e7ec8d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30e7ed69
- (void)mouseUp:(GSEventRef)up;	// 0x30e7f011
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x30e7f53d
- (unsigned)numberOfShownItems;	// 0x30e7e731
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30e7f1b1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30e7f319
- (void)redrawArrow;	// 0x30e7ec49
// converted property getter: - (unsigned)selectedItem;	// 0x30e7e845
- (void)setAnimating:(BOOL)animating;	// 0x30e7e0b1
// converted property setter: - (void)setEdgeType:(int)type;	// 0x30e7dfc1
// converted property setter: - (void)setSelectedItem:(unsigned)item;	// 0x30e7e7a5
- (void)setTarget:(id)target action:(SEL)action;	// 0x30e7e129
- (void)showHighlightedArrow;	// 0x30e7e761
- (int)textEffectsVisibilityLevel;	// 0x30e7dfb1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30e7f479
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30e7f509
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30e7f4d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30e7f4a9
@end
