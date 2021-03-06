/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextSelection, UITextRangeView, NSArray, NSTimer;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView {
@private
	UIView<UITextSelectingContainer> *m_view;	// 48 = 0x30
	UITextSelection *m_selection;	// 52 = 0x34
	NSTimer *m_caretTimer;	// 56 = 0x38
	UIView *m_caretView;	// 60 = 0x3c
	UITextRangeView *m_rangeView;	// 64 = 0x40
	BOOL m_caretBlinks;	// 68 = 0x44
	BOOL m_caretShowingNow;	// 69 = 0x45
	BOOL m_visible;	// 70 = 0x46
	BOOL m_activated;	// 71 = 0x47
	BOOL m_wasShowingCommands;	// 72 = 0x48
	BOOL m_delayShowingCommands;	// 73 = 0x49
	BOOL m_dictationReplacementsMode;	// 74 = 0x4a
	int m_showingCommandsCounter;	// 76 = 0x4c
	NSArray *m_replacements;	// 80 = 0x50
	BOOL m_deferSelectionCommands;	// 84 = 0x54
	CFRunLoopObserverRef m_observer;	// 88 = 0x58
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x355d2a5d; S=0x35392c21; @synthesize=m_caretBlinks
@property(readonly, assign, nonatomic) UIView *caretView;	// G=0x35331f21; @synthesize=m_caretView
@property(readonly, assign, nonatomic) UITextRangeView *rangeView;	// G=0x3540a865; 
@property(retain, nonatomic) NSArray *replacements;	// G=0x3540a855; S=0x3540a75d; @synthesize=m_replacements
@property(readonly, assign, nonatomic) UITextSelection *selection;	// G=0x353eeb79; 
@property(readonly, assign, nonatomic) BOOL selectionCommandsShowing;	// G=0x353fe681; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *view;	// G=0x3533222d; @synthesize=m_view
@property(assign, nonatomic) BOOL visible;	// G=0x3533223d; S=0x35392979; @synthesize=m_visible
- (id)initWithView:(id)view;	// 0x353925dd
- (void)activate;	// 0x353effdd
- (BOOL)affectedByScrollerNotification:(id)notification;	// 0x353ec83d
- (void)appearOrFadeIfNecessary;	// 0x35392999
- (void)calculateAndShowReplacements:(id)replacements;	// 0x355d2b71
- (void)cancelDelayedCommandRequests;	// 0x353eeb49
- (void)caretBlinkTimerFired:(id)fired;	// 0x35331d85
// declared property getter: - (BOOL)caretBlinks;	// 0x355d2a5d
// declared property getter: - (id)caretView;	// 0x35331f21
- (void)clearCaret;	// 0x354028f5
- (void)clearCaretBlinkTimer;	// 0x353efbb9
- (void)clearRange;	// 0x353f0205
- (CGRect)clippedTargetRect:(CGRect)rect;	// 0x354100dd
- (void)configureForHighlightMode;	// 0x355d2cad
- (void)configureForReplacementMode;	// 0x355d2cd9
- (void)configureForSelectionMode;	// 0x354848b5
- (void)deactivate;	// 0x354231fd
- (void)dealloc;	// 0x35443209
- (void)deferredUpdateSelectionCommands;	// 0x355d29c5
- (void)deferredUpdateSelectionRects;	// 0x353eee25
- (void)detach;	// 0x353efba9
- (void)didRotate:(id)rotate;	// 0x355d3179
- (void)doneMagnifying;	// 0x355d3051
- (void)hideCaret:(int)caret;	// 0x35331e55
- (void)hideSelectionCommands;	// 0x353eeb05
- (void)hideSelectionCommandsAfterDelay:(double)delay;	// 0x355d2c65
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35403cbd
- (void)inputViewDidAnimate;	// 0x353e6915
- (void)inputViewDidChange;	// 0x35401f39
- (void)inputViewDidMove;	// 0x353e68e9
- (void)inputViewWillAnimate;	// 0x353e58b1
- (void)inputViewWillChange;	// 0x353fe595
- (void)inputViewWillMove;	// 0x353e580d
- (void)installIfNecessary;	// 0x353f0225
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x355d2f8d
- (void)prepareForMagnification;	// 0x355d2fbd
// declared property getter: - (id)rangeView;	// 0x3540a865
- (void)removeFromSuperview;	// 0x353efab1
// declared property getter: - (id)replacements;	// 0x3540a855
- (void)scaleDidChange:(id)scale;	// 0x35483e8d
- (void)scaleWillChange:(id)scale;	// 0x35483ba1
- (id)scrollView;	// 0x35410739
// declared property getter: - (id)selection;	// 0x353eeb79
- (CGRect)selectionBoundingBox;	// 0x355d2d45
- (void)selectionChanged;	// 0x35392df1
// declared property getter: - (BOOL)selectionCommandsShowing;	// 0x353fe681
- (void)selectionDidScroll:(id)selection;	// 0x353ec8dd
- (void)selectionWillScroll:(id)selection;	// 0x353ec77d
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x35392c21
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x3540a75d
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x35392979
- (BOOL)shouldBeVisible;	// 0x35392ae5
- (void)showCalloutBarAfterDelay:(double)delay;	// 0x3540a781
- (void)showCaret:(int)caret;	// 0x35332dc9
- (void)showCommandsWithReplacements:(id)replacements;	// 0x3540ed59
- (void)showReplacementsWithGenerator:(id)generator forDictation:(BOOL)dictation afterDelay:(double)delay;	// 0x355d2be5
- (void)showSelectionCommands;	// 0x355d2ae1
- (void)showSelectionCommandsAfterDelay:(double)delay;	// 0x3540a725
- (void)startCaretBlinkIfNeeded;	// 0x355d2d19
- (void)textSelectionViewActivated:(id)activated;	// 0x353f0075
- (void)touchCaretBlinkTimer;	// 0x35392cc9
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x355d3209
- (BOOL)updateCalloutBarRects:(id)rects effectsWindow:(id)window;	// 0x3540fb41
- (void)updateSelectionCommands;	// 0x355d2a6d
- (void)updateSelectionDots;	// 0x355d29e5
- (void)updateSelectionRects;	// 0x353ef48d
- (void)updateSelectionRectsIfNeeded;	// 0x35402879
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x355d3235
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x355d3005
// declared property getter: - (id)view;	// 0x3533222d
- (void)viewAnimate:(id)animate;	// 0x35332045
// declared property getter: - (BOOL)visible;	// 0x3533223d
- (void)willRotate:(id)rotate;	// 0x355d3099
@end

