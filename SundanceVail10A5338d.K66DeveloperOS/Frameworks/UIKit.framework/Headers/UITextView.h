/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextInput.h"
#import "UITextLinkInteraction.h"
#import "UIScrollView.h"

@class UITextRange, NSAttributedString, NSDictionary, UITextPosition, UIWebDocumentView, DOMHTMLElement, UIColor, UITextInteractionAssistant, NSString, UIDelayedAction, WebFrame, UIFont;
@protocol UITextInputDelegate, UITextInputTokenizer, UITextViewDelegate;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInput> {
	WebFrame *m_frame;	// 444 = 0x1bc
	DOMHTMLElement *m_body;	// 448 = 0x1c0
	int m_marginTop;	// 452 = 0x1c4
	UIDelayedAction *m_selectionTimer;	// 456 = 0x1c8
	UIDelayedAction *m_longPressAction;	// 460 = 0x1cc
	BOOL m_editable;	// 464 = 0x1d0
	BOOL m_editing;	// 465 = 0x1d1
	BOOL m_becomesEditableWithGestures;	// 466 = 0x1d2
	BOOL m_reentrancyGuard;	// 467 = 0x1d3
	BOOL m_readyForScroll;	// 468 = 0x1d4
	BOOL m_hasExplicitTextAlignment;	// 469 = 0x1d5
	BOOL m_hasExplicitLineHeight;	// 470 = 0x1d6
	UITextInteractionAssistant *m_interactionAssistant;	// 472 = 0x1d8
	UIWebDocumentView *m_webView;	// 476 = 0x1dc
	UIFont *m_font;	// 480 = 0x1e0
	UIColor *m_textColor;	// 484 = 0x1e4
	int m_textAlignment;	// 488 = 0x1e8
	UIView *m_inputView;	// 492 = 0x1ec
	UIView *m_inputAccessoryView;	// 496 = 0x1f0
	float m_lineHeight;	// 500 = 0x1f4
	BOOL m_skipScrollContainingView;	// 504 = 0x1f8
	BOOL m_allowsEditingTextAttributes;	// 505 = 0x1f9
	BOOL m_usesAttributedText;	// 506 = 0x1fa
	BOOL m_clearsOnInsertion;	// 507 = 0x1fb
}
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x30e0750d; S=0x30e074e5; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x30e0751d; S=0x30e07979; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x30d8ddf1; S=0x30d8de01; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x30e08a31; 
@property(assign) float bottomBufferHeight;	// G=0x30e084b5; S=0x30e083c1; converted property
@property(assign, nonatomic) BOOL clearsOnInsertion;	// G=0x30e0661d; S=0x30e06555; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x30d8a221; S=0x30d894d9; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x30d89599; S=0x30d8dbe9; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x30d89a6d; S=0x30d8eeb5; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x30d8f769; 
@property(retain, nonatomic) UIFont *font;	// G=0x30e07ca9; S=0x30d895a9; 
@property(retain) UIView *inputAccessoryView;	// G=0x30d8e701; S=0x30d8a945; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x30e08b19; S=0x30e08b41; 
@property(retain) UIView *inputView;	// G=0x30d8e6e9; S=0x30d8a935; @synthesize=m_inputView
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x30d8ec65; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x30e07ebd; S=0x30e07ecd; converted property
@property(assign) int marginTop;	// G=0x30e07ea9; S=0x30d8e279; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x30e08955; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x30e0897d; S=0x30e089a5; 
@property(assign) CGPoint offset;	// G=0x30e08581; S=0x30e08571; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x30e085c1; S=0x30e085b1; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x30d8efd5; S=0x30e07d85; 
@property(copy) UITextRange *selectedTextRange;	// G=0x30d8e789; S=0x30e088d9; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x30e08da9; S=0x30e08dd1; 
@property(assign) int selectionGranularity;	// G=0x30e08e45; S=0x30d8f795; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x30e08521; S=0x30e084ed; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x30d89c7d; S=0x30d89ee1; 
@property(assign, nonatomic) int textAlignment;	// G=0x30e07d45; S=0x30e07d55; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x30e07ce5; S=0x30d89b15; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x30d8f73d; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x30d8df6d; converted property
+ (id)_bestInterpretationForDictationResult:(id)dictationResult;	// 0x30e06515
- (id)initWithCoder:(id)coder;	// 0x30e05a2d
- (id)initWithFrame:(CGRect)frame;	// 0x30d88901
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x30d8db71
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x30e059d9
- (void)_addShortcut:(id)shortcut;	// 0x30e06c21
- (unsigned)_allowedLinkTypes;	// 0x30e080c1
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x30e062a5
- (id)_automationValue;	// 0x30d8f95d
- (void)_dealloc;	// 0x30d8a7d1
- (void)_define:(id)define;	// 0x30e06c01
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x30e08dfd
- (id)_keyboardResponder;	// 0x30d8e775
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30e05e3d
- (Class)_printFormatterClass;	// 0x30f69e5d
- (void)_promptForReplace:(id)replace;	// 0x30e06bc9
- (id)_proxyTextInput;	// 0x30e086b1
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x30d8e745
- (void)_setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x30e063d9
- (void)_showTextStyleOptions:(id)options;	// 0x30e06ca1
- (void)_transferAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x30e077e1
- (void)_transferTextViewPropertiesFromText:(id)text;	// 0x30e07839
- (void)_updateForNewSize:(CGSize)newSize withOldSize:(CGSize)oldSize;	// 0x30e06d5d
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x30e0750d
// declared property getter: - (id)attributedText;	// 0x30e0751d
- (id)automaticallySelectedOverlay;	// 0x30d91a45
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x30e08bcd
- (BOOL)becomeFirstResponder;	// 0x30d8e2a5
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x30d8ddf1
- (void)beginSelectionChange;	// 0x30d8f635
// declared property getter: - (id)beginningOfDocument;	// 0x30e08a31
// converted property getter: - (float)bottomBufferHeight;	// 0x30e084b5
- (BOOL)canBecomeFirstResponder;	// 0x30d8e675
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30d8f821
- (BOOL)canResignFirstResponder;	// 0x30d8f8ad
- (void)cancelDataDetectorsWithWebLock;	// 0x30d8a8ed
- (void)cancelInteractionWithLink;	// 0x30e08169
- (CGRect)caretRectForPosition:(id)position;	// 0x30d8f0b1
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x30e08d35
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x30e08b9d
// declared property getter: - (BOOL)clearsOnInsertion;	// 0x30e0661d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x30d8f695
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x30e08cb9
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x30d88a6d
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x30e08ab9
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x30e062e9
- (id)contentAsHTMLString;	// 0x30d95b11
- (void)copy:(id)copy;	// 0x30e06b35
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x30e0695d
- (void)cut:(id)cut;	// 0x30e06b15
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x30d8a221
- (void)dealloc;	// 0x30d8a6b1
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x30e090c5
- (void)delayedUpdateForKeyboardDidShow;	// 0x30d8f041
- (void)deleteBackward;	// 0x30e08701
- (void)didMoveToSuperview;	// 0x30d89bd5
- (void)disableClearsOnInsertion;	// 0x30e0662d
- (void)displayScrollerIndicators;	// 0x30e08561
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x30e06cfd
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30e0900d
- (void)encodeWithCoder:(id)coder;	// 0x30e05e91
// declared property getter: - (id)endOfDocument;	// 0x30d8f769
- (void)endSelectionChange;	// 0x30d8f7c1
- (void)ensureSelection;	// 0x30d8ef4d
- (CGRect)firstRectForRange:(id)range;	// 0x30e08c2d
// declared property getter: - (id)font;	// 0x30e07ca9
- (void)forwardInvocation:(id)invocation;	// 0x30d8ed4d
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x30e08811
- (BOOL)hasText;	// 0x30e07d21
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30d8f5f9
// declared property getter: - (id)inputAccessoryView;	// 0x30d8e701
// declared property getter: - (id)inputDelegate;	// 0x30e08b19
// declared property getter: - (id)inputView;	// 0x30d8e6e9
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x30e08755
- (id)insertDictationResultPlaceholder;	// 0x30e087b9
- (void)insertText:(id)text;	// 0x30e08729
// converted property getter: - (id)interactionAssistant;	// 0x30d8ec65
- (BOOL)isAccessibilityElementByDefault;	// 0x30e7dc8d
// declared property getter: - (BOOL)isEditable;	// 0x30d89599
// declared property getter: - (BOOL)isEditing;	// 0x30d89a6d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30e7dc91
- (BOOL)isFirstResponder;	// 0x30d8e61d
- (BOOL)isInteractingWithLink;	// 0x30e081a9
- (void)keyboardDidShow:(id)keyboard;	// 0x30d8f00d
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x30d914c9
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x30d94ed1
- (BOOL)keyboardInputChanged:(id)changed;	// 0x30d91731
- (void)keyboardInputChangedSelection:(id)selection;	// 0x30d8ee21
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30e081f5
// converted property getter: - (float)lineHeight;	// 0x30e07ebd
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x30e06ad1
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x30e06ab1
// converted property getter: - (int)marginTop;	// 0x30e07ea9
// declared property getter: - (id)markedTextRange;	// 0x30e08955
// declared property getter: - (id)markedTextStyle;	// 0x30e0897d
- (id)metadataDictionariesForDictationResults;	// 0x30e08855
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30d8ecfd
- (BOOL)mightHaveLinks;	// 0x30d8ddd5
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x30e06981
// converted property getter: - (CGPoint)offset;	// 0x30e08581
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x30e08ae9
- (void)paste:(id)paste;	// 0x30e06b55
- (void)performBecomeEditableTasks;	// 0x30d8eec9
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x30e08a89
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x30e08a59
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x30e08b6d
- (void)recalculateStyle;	// 0x30d89689
- (CGRect)rectForSelection:(NSRange)selection;	// 0x30e07449
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x30d893b9
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x30e087e1
- (void)removeFromSuperview;	// 0x30d8a641
- (void)replace:(id)replace;	// 0x30e06af1
- (void)replaceRange:(id)range withText:(id)text;	// 0x30e088a9
- (void)resetDataDetectorsResultsWithWebLock;	// 0x30d8edd9
- (BOOL)resignFirstResponder;	// 0x30d8a491
- (BOOL)respondsToSelector:(SEL)selector;	// 0x30d88955
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x30e07f55
- (void)scrollRectToVisibleInContainingScrollView;	// 0x30d8f221
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x30d8f141
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x30e086a1
// converted property getter: - (BOOL)scrollingEnabled;	// 0x30e085c1
- (void)select:(id)select;	// 0x30e06b75
- (void)selectAll;	// 0x30e06a89
- (void)selectAll:(id)all;	// 0x30e06b9d
// declared property getter: - (NSRange)selectedRange;	// 0x30d8efd5
- (id)selectedText;	// 0x30e06a4d
// declared property getter: - (id)selectedTextRange;	// 0x30d8e789
// declared property getter: - (int)selectionAffinity;	// 0x30e08da9
// converted property getter: - (int)selectionGranularity;	// 0x30e08e45
- (id)selectionRectsForRange:(id)range;	// 0x30e08e71
- (id)selectionView;	// 0x30d894ad
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x30e074e5
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x30e085d9
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x30e085a1
// declared property setter: - (void)setAttributedText:(id)text;	// 0x30e07979
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x30e08bfd
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x30d8de01
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x30e083c1
- (void)setBounds:(CGRect)bounds;	// 0x30e06f31
- (void)setCenter:(CGPoint)center;	// 0x30e06fed
// declared property setter: - (void)setClearsOnInsertion:(BOOL)insertion;	// 0x30e06555
- (void)setContentToHTMLString:(id)htmlstring;	// 0x30d8e0dd
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x30d894d9
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x30d8dbe9
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x30d8eeb5
// declared property setter: - (void)setFont:(id)font;	// 0x30d895a9
- (void)setFrame:(CGRect)frame;	// 0x30d889d9
- (void)setHidesSelection:(BOOL)selection;	// 0x30e06551
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x30d8a945
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x30e08b41
// declared property setter: - (void)setInputView:(id)view;	// 0x30d8a935
// converted property setter: - (void)setLineHeight:(float)height;	// 0x30e07ecd
// converted property setter: - (void)setMarginTop:(int)top;	// 0x30d8e279
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x30e089d1
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x30e089a5
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x30e08571
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x30e085e9
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x30e085b1
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x30e07d85
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x30e088d9
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x30e08dd1
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x30d8f795
- (void)setSelectionToEnd;	// 0x30e07321
- (void)setSelectionToStart;	// 0x30e07225
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x30e084ed
// declared property setter: - (void)setText:(id)text;	// 0x30d89ee1
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x30e07d55
// declared property setter: - (void)setTextColor:(id)color;	// 0x30d89b15
- (void)setTypingAttributes:(id)attributes;	// 0x30e06641
- (BOOL)shouldScrollEnclosingScrollView;	// 0x30d89a7d
- (BOOL)shouldStartDataDetectors;	// 0x30d8a241
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x30e08521
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30e070a5
- (void)startDataDetectorsWithWebLock;	// 0x30d8de6d
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30e08109
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30e08189
- (id)styleString;	// 0x30d8904d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x30d8f4fd
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x30e080e9
// declared property getter: - (id)text;	// 0x30d89c7d
// declared property getter: - (int)textAlignment;	// 0x30e07d45
// declared property getter: - (id)textColor;	// 0x30e07ce5
- (id)textInRange:(id)range;	// 0x30e0887d
- (id)textInputTraits;	// 0x30d889b5
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x30d8f709
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x30d89225
- (void)toggleBoldface:(id)boldface;	// 0x30e06c41
- (void)toggleItalics:(id)italics;	// 0x30e06c61
- (void)toggleUnderline:(id)underline;	// 0x30e06c81
// declared property getter: - (id)tokenizer;	// 0x30d8f73d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30e069e5
- (id)undoManager;	// 0x30e06cc1
- (id)undoManagerForWebView:(id)webView;	// 0x30d91721
- (void)unmarkText;	// 0x30e08a09
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x30d8942d
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30e08129
- (void)updateSelection;	// 0x30e06a15
- (void)updateWebViewObjects;	// 0x30d892a5
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30e08149
- (CGRect)visibleRect;	// 0x30d8f421
- (CGRect)visibleTextRect;	// 0x30d8f33d
// converted property getter: - (id)webView;	// 0x30d8df6d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30e082cd
- (void)webViewDidChange:(id)webView;	// 0x30d896f9
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x30e081cd
@end
