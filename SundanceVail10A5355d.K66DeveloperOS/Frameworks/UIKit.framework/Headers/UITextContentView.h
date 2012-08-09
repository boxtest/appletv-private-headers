/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextInput.h"
#import "UITextLinkInteraction.h"

@class UIDelayedAction, UIWebDocumentView, NSAttributedString, WebFrame, UITextRange, NSDictionary, UITextPosition, DOMHTMLElement, UIFont, UIColor, UITextInteractionAssistant, NSString;
@protocol UITextContentViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <UITextInput, UITextLinkInteraction, UITextInputTraits> {
	id m_delegate;	// 84 = 0x54
	WebFrame *m_frame;	// 88 = 0x58
	DOMHTMLElement *m_body;	// 92 = 0x5c
	int m_marginTop;	// 96 = 0x60
	UIDelayedAction *m_scrollToVisibleTimer;	// 100 = 0x64
	UIEdgeInsets m_selectionInset;	// 104 = 0x68
	float m_bottomBufferHeight;	// 120 = 0x78
	BOOL m_editable;	// 124 = 0x7c
	BOOL m_editing;	// 125 = 0x7d
	BOOL m_becomesEditableWithGestures;	// 126 = 0x7e
	BOOL m_becomingFirstResponder;	// 127 = 0x7f
	BOOL m_reentrancyGuard;	// 128 = 0x80
	BOOL m_scrollsSelectionOnWebDocumentChanges;	// 129 = 0x81
	BOOL m_hasExplicitTextAlignment;	// 130 = 0x82
	BOOL m_allowsEditingTextAttributes;	// 131 = 0x83
	BOOL m_usesAttributedText;	// 132 = 0x84
	UITextInteractionAssistant *m_interactionAssistant;	// 136 = 0x88
	UIWebDocumentView *m_webView;	// 140 = 0x8c
	UIFont *m_font;	// 144 = 0x90
	UIColor *m_textColor;	// 148 = 0x94
	int m_textAlignment;	// 152 = 0x98
}
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x33cb2671; S=0x33cb2649; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x33cb2681; S=0x33cb2a39; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x33cb2e81; S=0x33a756d1; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x33cb38f1; 
@property(assign) float bottomBufferHeight;	// G=0x33cb35c1; S=0x33cb35ad; converted property
@property(assign) unsigned dataDetectorTypes;	// G=0x33abed6d; S=0x33a74ddd; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x33a75529; S=0x33a75821; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x33a74eb1; S=0x33ac7da9; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x33abed91; S=0x33afd521; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x33cb3919; 
@property(retain, nonatomic) UIFont *font;	// G=0x33cb2c81; S=0x33a74f11; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x33cb3a01; S=0x33cb3a29; 
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x33afd6fd; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x33cb2e91; S=0x33cb2ea1; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x33cb3815; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x33cb383d; S=0x33cb3865; 
@property(assign) CGPoint offset;	// G=0x33cb35e5; S=0x33cb35e1; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x33cb3605; S=0x33cb3601; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x33a75cb9; S=0x33a74091; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x33afb361; S=0x33cb2dc1; 
@property(copy) UITextRange *selectedTextRange;	// G=0x33afb7a1; S=0x33b3e001; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x33cb3c91; S=0x33cb3cb9; 
@property(assign) int selectionGranularity;	// G=0x33cb3d2d; S=0x33afd70d; converted property
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x33adc571; S=0x33b3b41d; @synthesize=m_selectionInset
@property(assign) BOOL showScrollerIndicators;	// G=0x33cb35d9; S=0x33cb35d5; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x33a764a1; S=0x33abeac1; 
@property(assign, nonatomic) int textAlignment;	// G=0x33cb2d81; S=0x33cb2d91; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x33cb2cb9; S=0x33cb2cf1; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x33afd6d5; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x33a756e5; converted property
- (id)initWithCoder:(id)coder;	// 0x33cb1411
- (id)initWithFrame:(CGRect)frame;	// 0x33a717d1
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x33b3b3c9
- (void)_addShortcut:(id)shortcut;	// 0x33cb2111
- (unsigned)_allowedLinkTypes;	// 0x33cb32fd
- (id)_automationValue;	// 0x33cb3d59
- (void)_define:(id)define;	// 0x33cb20f1
- (void)_didScroll;	// 0x33b3c9d5
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x33cb3ce5
- (void)_hideSelectionCommands;	// 0x33cb1f21
- (id)_keyboardResponder;	// 0x33afcf35
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33cb1649
- (void)_promptForReplace:(id)replace;	// 0x33cb20b9
- (id)_proxyTextInput;	// 0x33cb3611
- (void)_removeAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x33cb2871
- (void)_removeTextViewPropertiesFromText:(id)text;	// 0x33cb28f9
- (void)_scrollViewDidEndDecelerating;	// 0x33b3c9fd
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x33b3c9f9
- (void)_scrollViewWillBeginDragging;	// 0x33b3c9cd
- (void)_showTextStyleOptions:(id)options;	// 0x33cb2191
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x33cb2671
// declared property getter: - (id)attributedText;	// 0x33cb2681
- (id)automaticallySelectedOverlay;	// 0x33cb1949
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x33cb3ab5
- (BOOL)becomeFirstResponder;	// 0x33afb945
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x33cb2e81
- (void)beginSelectionChange;	// 0x33ac7f59
// declared property getter: - (id)beginningOfDocument;	// 0x33cb38f1
// converted property getter: - (float)bottomBufferHeight;	// 0x33cb35c1
- (BOOL)canBecomeFirstResponder;	// 0x33afbbc1
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x33b3f351
- (BOOL)canResignFirstResponder;	// 0x33b41961
- (void)cancelAutoscroll;	// 0x33cb1a1d
- (void)cancelDataDetectorsWithWebLock;	// 0x33b3cc89
- (void)cancelInteractionWithLink;	// 0x33cb33a5
- (CGRect)caretRectForPosition:(id)position;	// 0x33afb7c9
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x33cb1a3d
- (unsigned short)characterBeforeCaretSelection;	// 0x33cb1e79
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x33cb3c1d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x33cb3a85
- (void)clearScrollToVisibleTimer;	// 0x33adc9f9
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x33cb1d55
- (id)closestPositionToPoint:(CGPoint)point;	// 0x33afd62d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x33cb3ba1
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x33a71a01
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x33cb39a1
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x33cb1859
- (id)contentAsAttributedString;	// 0x33cb2585
- (id)contentAsHTMLString;	// 0x33a76475
- (void)copy:(id)copy;	// 0x33cb2005
- (void)cut:(id)cut;	// 0x33cb1fe5
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x33abed6d
- (void)dealloc;	// 0x33b3caa5
// declared property getter: - (id)delegate;	// 0x33a75529
- (void)deleteBackward;	// 0x33cb3661
- (void)didMoveToSuperview;	// 0x33a75c41
- (void)displayScrollerIndicators;	// 0x33cb35dd
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x33cb21dd
- (void)encodeWithCoder:(id)coder;	// 0x33cb169d
// declared property getter: - (id)endOfDocument;	// 0x33cb3919
- (void)endSelectionChange;	// 0x33ac8931
- (void)ensureSelection;	// 0x33afd5b9
- (CGRect)firstRectForRange:(id)range;	// 0x33cb3b15
// declared property getter: - (id)font;	// 0x33cb2c81
- (id)fontForCaretSelection;	// 0x33cb1f01
- (void)forwardInvocation:(id)invocation;	// 0x33a75769
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x33cb3771
- (BOOL)hasMarkedText;	// 0x33cb1ded
- (BOOL)hasSelection;	// 0x33cb19d9
- (BOOL)hasText;	// 0x33a19b35
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33afb751
// declared property getter: - (id)inputDelegate;	// 0x33cb3a01
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x33cb36b5
- (id)insertDictationResultPlaceholder;	// 0x33cb3719
- (void)insertText:(id)text;	// 0x33cb3689
// converted property getter: - (id)interactionAssistant;	// 0x33afd6fd
// declared property getter: - (BOOL)isEditable;	// 0x33a74eb1
// declared property getter: - (BOOL)isEditing;	// 0x33abed91
- (BOOL)isFirstResponder;	// 0x33afb8e9
- (BOOL)isInteractingWithLink;	// 0x33cb33e5
- (BOOL)isSMSTextView;	// 0x33ac858d
- (void)keyboardDidShow:(id)keyboard;	// 0x33add161
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x33b3e111
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x33b3e7d9
- (BOOL)keyboardInputChanged:(id)changed;	// 0x33affcf5
- (void)keyboardInputChangedSelection:(id)selection;	// 0x33afd2c1
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x33cb3431
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x33cb1fc5
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x33cb1fa5
// converted property getter: - (int)marginTop;	// 0x33cb2e91
- (id)markedText;	// 0x33cb1e19
// declared property getter: - (id)markedTextRange;	// 0x33cb3815
// declared property getter: - (id)markedTextStyle;	// 0x33cb383d
- (id)metadataDictionariesForDictationResults;	// 0x33cb37b5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33a75719
- (BOOL)mightHaveLinks;	// 0x33cb32e1
// converted property getter: - (CGPoint)offset;	// 0x33cb35e5
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x33cb39d1
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x33cb1dcd
- (void)paste:(id)paste;	// 0x33cb2025
- (void)performBecomeEditableTasks;	// 0x33afd531
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x33adc34d
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x33cb3971
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x33cb3941
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x33cb3a55
- (void)recalculateStyle;	// 0x33a74fc5
- (CGRect)rectContainingCaretSelection;	// 0x33cb1ecd
- (CGRect)rectForScrollToVisible;	// 0x33cb2409
- (CGRect)rectForSelection:(NSRange)selection;	// 0x33cb236d
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x33a74289
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x33cb3741
- (void)removeFromSuperview;	// 0x33b3ca31
- (void)replace:(id)replace;	// 0x33cb2099
- (void)replaceRange:(id)range withText:(id)text;	// 0x33cb37e1
- (void)resetDataDetectorsResultsWithWebLock;	// 0x33cb3295
- (BOOL)resignFirstResponder;	// 0x33ac241d
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x33cb316d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x33adc449
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x33ac853d
- (void)scrollToVisibleTimerAction;	// 0x33adc319
- (id)scrollView;	// 0x33a755fd
// converted property getter: - (BOOL)scrollingEnabled;	// 0x33cb3605
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x33a75cb9
- (void)select:(id)select;	// 0x33cb2045
- (void)selectAll;	// 0x33cb21b5
- (void)selectAll:(id)all;	// 0x33cb206d
// declared property getter: - (NSRange)selectedRange;	// 0x33afb361
- (id)selectedText;	// 0x33cb1d19
// declared property getter: - (id)selectedTextRange;	// 0x33afb7a1
// declared property getter: - (int)selectionAffinity;	// 0x33cb3c91
// converted property getter: - (int)selectionGranularity;	// 0x33cb3d2d
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x33adc571
- (NSRange)selectionRange;	// 0x33cb1e9d
- (id)selectionRectsForRange:(id)range;	// 0x33cb1ab5
- (id)selectionView;	// 0x33a744fd
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x33cb2649
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x33cb3609
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x33cb35fd
// declared property setter: - (void)setAttributedText:(id)text;	// 0x33cb2a39
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x33cb3ae5
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x33a756d1
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x33cb35ad
- (void)setContentToAttributedString:(id)attributedString;	// 0x33cb24d9
- (void)setContentToHTMLString:(id)htmlstring;	// 0x33ac7b31
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x33a74ddd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33a75821
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x33ac7da9
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x33afd521
// declared property setter: - (void)setFont:(id)font;	// 0x33a74f11
- (void)setFrame:(CGRect)frame;	// 0x33a71825
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x33cb3a29
// converted property setter: - (void)setMarginTop:(int)top;	// 0x33cb2ea1
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x33cb3891
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x33cb3865
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x33cb35e1
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x33cb360d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x33cb3601
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x33a74091
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x33cb2dc1
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x33b3e001
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x33cb3cb9
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x33a74025
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x33afd70d
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x33b3b41d
- (void)setSelectionToEnd;	// 0x33ac7cd1
- (void)setSelectionToStart;	// 0x33cb2291
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x33cb223d
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x33cb35d5
// declared property setter: - (void)setText:(id)text;	// 0x33abeac1
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x33cb2d91
// declared property setter: - (void)setTextColor:(id)color;	// 0x33cb2cf1
- (BOOL)shouldStartDataDetectors;	// 0x33abedb5
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x33cb35d9
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x33cb19fd
- (void)startDataDetectorsWithWebLock;	// 0x33cb3229
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33cb3345
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33cb33c5
- (id)styleString;	// 0x33a71eb5
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x33b3f3dd
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x33cb3325
// declared property getter: - (id)text;	// 0x33a764a1
// declared property getter: - (int)textAlignment;	// 0x33cb2d81
// declared property getter: - (id)textColor;	// 0x33cb2cb9
- (id)textInRange:(id)range;	// 0x33b3f2f5
- (id)textInputTraits;	// 0x33a757f1
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x33afd6a1
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x33a73e2d
- (void)toggleBoldface:(id)boldface;	// 0x33cb2131
- (void)toggleItalics:(id)italics;	// 0x33cb2151
- (void)toggleUnderline:(id)underline;	// 0x33cb2171
// declared property getter: - (id)tokenizer;	// 0x33afd6d5
- (void)touchScrollToVisibleTimer;	// 0x33ac85e1
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x33ac8601
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33cb196d
- (id)undoManager;	// 0x33cb1f69
- (id)undoManagerForWebView:(id)webView;	// 0x33cb1f59
- (void)unmarkText;	// 0x33cb38c9
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x33a742f9
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33cb3365
- (void)updateSelection;	// 0x33cb19a1
- (void)updateWebViewObjects;	// 0x33a73f15
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33cb3385
- (CGRect)visibleRect;	// 0x33cb2ec9
- (CGRect)visibleTextRect;	// 0x33cb308d
// converted property getter: - (id)webView;	// 0x33a756e5
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x33cb34b9
- (void)webViewDidChange:(id)webView;	// 0x33a75191
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x33cb3409
- (id)wordContainingCaretSelection;	// 0x33cb1e39
- (id)wordRangeContainingCaretSelection;	// 0x33cb1e59
@end
