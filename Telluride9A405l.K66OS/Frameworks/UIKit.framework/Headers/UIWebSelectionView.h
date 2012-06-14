/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWebSelectionGraph, UIWebTextRangeView, UIWebDocumentView, UIWebSelectionHandle, UIWebSelectionOutline, UIWebSelection, NSTimer, UIWebSelectionNode;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView {
@private
	UIView *_center;	// 48 = 0x30
	CGRect _selectionFrame;	// 52 = 0x34
	UIWebSelectionHandle *_top;	// 68 = 0x44
	UIWebSelectionHandle *_right;	// 72 = 0x48
	UIWebSelectionHandle *_bottom;	// 76 = 0x4c
	UIWebSelectionHandle *_left;	// 80 = 0x50
	UIWebSelectionOutline *_outline;	// 84 = 0x54
	UIWebTextRangeView *_textRangeView;	// 88 = 0x58
	UIWebDocumentView *_documentView;	// 92 = 0x5c
	UIWebSelectionNode *_selectionNode;	// 96 = 0x60
	UIWebSelectionGraph *_selectionGraph;	// 100 = 0x64
	float _growThreshold;	// 104 = 0x68
	float _shrinkThreshold;	// 108 = 0x6c
	struct {
		UIWebSelectionHandle *scrollingHandle;
		double startTime;
		int direction;
		NSTimer *timer;
	} _autoscrollData;	// 112 = 0x70
	struct {
		UIWebSelectionHandle *activeHandle;
		CGPoint handleCenterStart;
		float handleOffset;
	} _blockSelectionData;	// 132 = 0x84
	struct {
		UIWebSelectionHandle *start;
		UIWebSelectionHandle *end;
		CGSize startingOffset;
		BOOL anchorAtStart;
		struct {
			BOOL flipPossible;
			BOOL rectsChanged;
			CGRect originalSelectionRect;
		} flipData;
	} _rangedSelectionData;	// 148 = 0x94
	BOOL _creatingSelection;	// 188 = 0xbc
	int _nestedLayoutCalls;	// 192 = 0xc0
	BOOL _calloutBarIsHiddenBeforeRotation;	// 196 = 0xc4
	BOOL _rotating;	// 197 = 0xc5
	int _selectionInFixedPosition;	// 200 = 0xc8
}
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x32dcd725; 
@property(assign, nonatomic) CGRect selectionFrame;	// G=0x32f4bc19; S=0x32e1e695; 
@property(retain, nonatomic) UIWebSelectionNode *selectionNode;	// G=0x32dcd74d; S=0x32f4f26d; @synthesize=_selectionNode
- (id)initWithWebDocumentView:(id)webDocumentView;	// 0x32d203e5
- (void)_didScroll;	// 0x32f4dd39
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x32f4dd79
- (id)activeHandle;	// 0x32f4edb1
- (BOOL)activelyManipulatingBlockSelectionHandle;	// 0x32f4eea5
- (BOOL)activelyManipulatingTextSelectionHandle;	// 0x32f4ee65
- (void)animateSloppyReleaseOfHandleInText:(id)text withMagnifier:(id)magnifier;	// 0x32f4e005
- (int)autoscrollDirectionsForHandle:(id)handle;	// 0x32f4da1d
- (void)autoscrollTimerFired:(id)fired;	// 0x32f4dd7d
- (void)calloutBar:(id)bar selectedCommand:(id)command;	// 0x32f4b6a1
- (BOOL)canFlip;	// 0x32f4d47d
- (void)clearSelection;	// 0x32e1e5d9
- (void)computeExpandAndContractThresholdsForActiveHandle;	// 0x32f4d521
- (void)considerFlipping;	// 0x32f4d3b9
- (void)contractForActiveHandle;	// 0x32f4d975
- (void)dealloc;	// 0x32e1fbb1
- (CGRect)desiredBox;	// 0x32f4e1bd
- (void)didEndScrollingOverflow;	// 0x32f4b8ed
- (void)didEndScrollingPage;	// 0x32f4b8b1
- (void)endSelectionCreationWithPoint:(CGPoint)point;	// 0x32f4e921
- (void)expandForActiveHandle;	// 0x32f4d8cd
- (CGRect)fetchSelectionBoundingRect;	// 0x32f4bc95
- (CGRect)fetchSelectionBoundingTextSelectionRect;	// 0x32f4bc3d
- (id)handleWithPosition:(int)position;	// 0x32d208ed
- (id)handles;	// 0x32f4c269
- (void)hideControls;	// 0x32e1e5ad
- (void)hideControlsBeforeRotation;	// 0x32f4bb81
- (void)hideCopyCallout;	// 0x32e1e5bd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32f4c22d
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x32f4f111
- (id)nodeInPristineGraphAtPoint:(CGPoint)point;	// 0x32f4e451
- (void)onAfterScrollShowingSelection:(BOOL)selection;	// 0x32f4b7c9
- (void)onBeforeScrollHidingSelection:(BOOL)selection;	// 0x32f4b70d
- (void)removeFromSuperview;	// 0x32dc0255
- (void)resetSelection;	// 0x32f4c0fd
- (void)scaleChanged;	// 0x32f4ecd9
// declared property getter: - (id)selection;	// 0x32dcd725
- (void)selectionChanged;	// 0x32f4e3c5
// declared property getter: - (CGRect)selectionFrame;	// 0x32f4bc19
// declared property getter: - (id)selectionNode;	// 0x32dcd74d
- (void)setHandleCenters;	// 0x32e1e769
// declared property setter: - (void)setSelectionFrame:(CGRect)frame;	// 0x32e1e695
- (void)setSelectionFrame:(CGRect)frame animated:(BOOL)animated;	// 0x32f4c049
// declared property setter: - (void)setSelectionNode:(id)node;	// 0x32f4f26d
- (void)shiftWebRangeSelectionAnimationDidStop:(id)shiftWebRangeSelectionAnimation finished:(id)finished;	// 0x32f4dff1
- (BOOL)shouldContractForActiveHandle;	// 0x32f4d80d
- (BOOL)shouldExpandForActiveHandle;	// 0x32f4d74d
- (BOOL)shouldSwitchToBlockModeForHandle:(id)handle;	// 0x32f4ce05
- (void)showControls;	// 0x32f4b941
- (void)showControlsAfterRotation;	// 0x32f4b901
- (void)showCopyCalloutWithAnimation:(BOOL)animation;	// 0x32f4b5e1
- (void)startSelectionCreationWithPoint:(CGPoint)point;	// 0x32f4e521
- (void)stopAnyAutoscrolling;	// 0x32f4df5d
- (void)switchToBlockModeForHandle:(id)handle;	// 0x32f4cf55
- (void)switchToTextModeForHandle:(id)handle;	// 0x32f4d0cd
- (id)tintView;	// 0x32d205d5
- (void)touchChanged:(id)changed forHandle:(id)handle;	// 0x32f4c2e1
- (void)touchChanged:(id)changed forHandleInText:(id)text;	// 0x32f4c9d5
- (void)updateAutoscrollForHandle:(id)handle;	// 0x32f4dc1d
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;	// 0x32f4ef61
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;	// 0x32f4eee5
- (void)updateFrameAndHandlesWithAnimation:(BOOL)animation;	// 0x32f4bd5d
- (BOOL)updateRectForCalloutBar:(id)calloutBar inWindow:(id)window;	// 0x32f4b34d
- (void)updateSelectionCreationWithPoint:(CGPoint)point;	// 0x32f4e7d1
- (void)updateSelectionRects;	// 0x32f4e355
- (void)updateTextRangeViewSelectionRects;	// 0x32f4bced
- (void)willStartScrollingOverflow;	// 0x32f4b8d9
- (void)willStartScrollingPage;	// 0x32f4b889
@end
