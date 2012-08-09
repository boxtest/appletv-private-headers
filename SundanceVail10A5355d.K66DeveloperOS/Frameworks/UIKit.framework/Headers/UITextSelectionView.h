/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextSelection, UITextInteractionAssistant, UITextRangeView, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView {
	UITextInteractionAssistant *m_interactionAssistant;	// 84 = 0x54
	UITextSelection *m_selection;	// 88 = 0x58
	NSTimer *m_caretTimer;	// 92 = 0x5c
	UIView *m_caretView;	// 96 = 0x60
	UITextRangeView *m_rangeView;	// 100 = 0x64
	BOOL m_caretBlinks;	// 104 = 0x68
	BOOL m_caretShowingNow;	// 105 = 0x69
	BOOL m_visible;	// 106 = 0x6a
	BOOL m_activated;	// 107 = 0x6b
	BOOL m_wasShowingCommands;	// 108 = 0x6c
	BOOL m_delayShowingCommands;	// 109 = 0x6d
	BOOL m_dictationReplacementsMode;	// 110 = 0x6e
	int m_showingCommandsCounter;	// 112 = 0x70
	NSArray *m_replacements;	// 116 = 0x74
	BOOL m_deferSelectionCommands;	// 120 = 0x78
	CFRunLoopObserverRef m_observer;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x33ca668d; S=0x33a74805; @synthesize=m_caretBlinks
@property(readonly, assign, nonatomic) UIView *caretView;	// G=0x33a19449; @synthesize=m_caretView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x33ca6f05; @synthesize=m_interactionAssistant
@property(readonly, assign, nonatomic) UITextRangeView *rangeView;	// G=0x33ae3de9; 
@property(retain, nonatomic) NSArray *replacements;	// G=0x33ae3dd5; S=0x33ae3ced; @synthesize=m_replacements
@property(readonly, assign, nonatomic) UITextSelection *selection;	// G=0x33acb161; 
@property(readonly, assign, nonatomic) BOOL selectionCommandsShowing;	// G=0x33ad9799; 
@property(assign, nonatomic) BOOL visible;	// G=0x33a197ed; S=0x33a74525; @synthesize=m_visible
- (id)initWithInteractionAssistant:(id)interactionAssistant;	// 0x33ca6229
- (void)activate;	// 0x33acc615
- (BOOL)affectedByScrollerNotification:(id)notification;	// 0x33ac8c69
- (void)appearOrFadeIfNecessary;	// 0x33a74549
- (void)calculateAndShowReplacements:(id)replacements;	// 0x33ca67a9
- (void)cancelDelayedCommandRequests;	// 0x33acb12d
- (void)caretBlinkTimerFired:(id)fired;	// 0x33a19291
// declared property getter: - (BOOL)caretBlinks;	// 0x33ca668d
// declared property getter: - (id)caretView;	// 0x33a19449
- (void)clearCaret;	// 0x33add525
- (void)clearCaretBlinkTimer;	// 0x33acc209
- (void)clearRange;	// 0x33acc8cd
- (CGRect)clippedTargetRect:(CGRect)rect;	// 0x33ae910d
- (void)configureForHighlightMode;	// 0x33ca68e5
- (void)configureForReplacementMode;	// 0x33ca6911
- (void)configureForSelectionMode;	// 0x33b57f09
- (void)deactivate;	// 0x33afc3e9
- (void)dealloc;	// 0x33b1a43d
- (void)deferredUpdateSelectionCommands;	// 0x33ca65ed
- (void)deferredUpdateSelectionRects;	// 0x33acb3a9
- (void)detach;	// 0x33acc1f5
- (void)didRotate:(id)rotate;	// 0x33ca6e29
- (void)doneMagnifying;	// 0x33ca6d01
- (void)hideCaret:(int)caret;	// 0x33a1937d
- (void)hideSelectionCommands;	// 0x33acb0e5
- (void)hideSelectionCommandsAfterDelay:(double)delay;	// 0x33ca689d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33adea65
- (void)inputViewDidAnimate;	// 0x33ac277d
- (void)inputViewDidChange;	// 0x33add0a9
- (void)inputViewDidMove;	// 0x33ac2755
- (void)inputViewWillAnimate;	// 0x33ac13b1
- (void)inputViewWillChange;	// 0x33ad96a9
- (void)inputViewWillMove;	// 0x33ac1301
- (void)installIfNecessary;	// 0x33acc8ed
// declared property getter: - (id)interactionAssistant;	// 0x33ca6f05
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x33ca6c35
- (void)prepareForMagnification;	// 0x33ca6c65
// declared property getter: - (id)rangeView;	// 0x33ae3de9
- (void)removeFromSuperview;	// 0x33acc0f9
// declared property getter: - (id)replacements;	// 0x33ae3dd5
- (void)scaleDidChange:(id)scale;	// 0x33b57535
- (void)scaleWillChange:(id)scale;	// 0x33b5723d
- (id)scrollView;	// 0x33ae9839
// declared property getter: - (id)selection;	// 0x33acb161
- (CGRect)selectionBoundingBox;	// 0x33ca6985
- (void)selectionChanged;	// 0x33a749cd
// declared property getter: - (BOOL)selectionCommandsShowing;	// 0x33ad9799
- (void)selectionDidScroll:(id)selection;	// 0x33ac8d41
- (void)selectionWillScroll:(id)selection;	// 0x33ac8b85
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x33a74805
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x33ae3ced
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x33a74525
- (BOOL)shouldBeVisible;	// 0x33a74699
- (void)showCalloutBarAfterDelay:(double)delay;	// 0x33ae3cfd
- (void)showCaret:(int)caret;	// 0x33a1a4e9
- (void)showCommandsWithReplacements:(id)replacements;	// 0x33ae7cbd
- (void)showReplacementsWithGenerator:(id)generator forDictation:(BOOL)dictation afterDelay:(double)delay;	// 0x33ca67e9
- (void)showSelectionCommands;	// 0x33ca6719
- (void)showSelectionCommandsAfterDelay:(double)delay;	// 0x33ae3cb1
- (void)startCaretBlinkIfNeeded;	// 0x33ca6959
- (void)textSelectionViewActivated:(id)activated;	// 0x33acc6fd
- (void)touchCaretBlinkTimer;	// 0x33a748a5
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x33ca6eb9
- (BOOL)updateCalloutBarRects:(id)rects effectsWindow:(id)window;	// 0x33ae8b3d
- (void)updateSelectionCommands;	// 0x33ca66a1
- (void)updateSelectionDots;	// 0x33ca660d
- (void)updateSelectionRects;	// 0x33acba89
- (void)updateSelectionRectsIfNeeded;	// 0x33add4ad
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x33ca6edd
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x33ca6cb1
- (void)viewAnimate:(id)animate;	// 0x33a19595
// declared property getter: - (BOOL)visible;	// 0x33a197ed
- (void)willRotate:(id)rotate;	// 0x33ca6d4d
- (void)windowDidResignOrBecomeKey;	// 0x33ca65b1
@end
