/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardImplGeometryDelegate.h"

@class UIImage, UITextInputTraits;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 44 = 0x2c
	UITextInputTraits *m_defaultTraits;	// 48 = 0x30
	BOOL m_typingDisabled;	// 52 = 0x34
	BOOL m_minimized;	// 53 = 0x35
	BOOL m_respondingToImplGeometryChange;	// 54 = 0x36
	int m_orientation;	// 56 = 0x38
}
@property(retain) id defaultTextInputTraits;	// G=0x321337c5; S=0x32133745; converted property
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x3205836d; S=0x32133595; 
@property(readonly, assign) int orientation;	// G=0x32051e09; converted property
@property(assign) BOOL returnKeyEnabled;	// G=0x3213385d; S=0x3213381d; converted property
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x32132eb1; S=0x32058ff1; 
+ (void)initImplementationNow;	// 0x321339ed
+ (void)_clearActiveKeyboard;	// 0x32132e91
+ (id)activeKeyboard;	// 0x31fff7a1
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x3206861d
+ (CGSize)defaultSize;	// 0x320a0175
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32051545
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x32134001
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32133fb9
+ (void)removeAllDynamicDictionaries;	// 0x321339cd
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32133fdd
- (id)initWithDefaultSize;	// 0x32134025
- (id)initWithFrame:(CGRect)frame;	// 0x32051641
- (void)_acceptCurrentCandidate;	// 0x32132fa5
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x3213316d
- (void)_changeToKeyplane:(id)keyplane;	// 0x321330ed
- (void)_clearCurrentInputManager;	// 0x32134145
- (void)_disableDynamicDictionary:(BOOL)dictionary;	// 0x32132ee9
- (id)_getAutocorrection;	// 0x32132fd1
- (id)_getCurrentKeyboardName;	// 0x32133209
- (id)_getCurrentKeyplaneName;	// 0x32133235
- (id)_getLocalizedInputMode;	// 0x321331dd
- (BOOL)_hasCandidates;	// 0x32132f49
- (BOOL)_isAutomaticKeyboard;	// 0x32218245
- (id)_keyplaneForKey:(id)key;	// 0x3213312d
- (int)_positionInCandidateList:(id)candidateList;	// 0x32132f19
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x32132ffd
- (void)_setInputMode:(id)mode;	// 0x3213302d
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x3213305d
- (void)acceptAutocorrection;	// 0x32133919
- (void)activate;	// 0x32058a59
- (void)autoAdjustOrientation;	// 0x32053e59
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x32053c89
- (BOOL)canDismiss;	// 0x32132ee5
- (void)clearSnapshot;	// 0x321336e1
- (void)deactivate;	// 0x321335fd
- (void)dealloc;	// 0x32133a0d
// converted property getter: - (id)defaultTextInputTraits;	// 0x321337c5
- (id)delegate;	// 0x32133709
- (void)displayLayer:(id)layer;	// 0x320591c1
- (void)geometryChangeDone:(BOOL)done;	// 0x3205a109
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x321341b9
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x321342e1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3205ab4d
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x32133aa1
- (int)interfaceOrientation;	// 0x32132ea1
- (BOOL)isActive;	// 0x32058a45
// declared property getter: - (BOOL)isMinimized;	// 0x3205836d
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x32133c2d
- (void)manualKeyboardWasOrderedIn;	// 0x321332c1
- (void)manualKeyboardWasOrderedOut;	// 0x32133261
- (void)manualKeyboardWillBeOrderedIn;	// 0x321332f1
- (void)manualKeyboardWillBeOrderedOut;	// 0x32133291
- (void)maximize;	// 0x32133ce1
- (void)minimize;	// 0x32133e4d
- (void)movedFromSuperview:(id)superview;	// 0x320588ed
// converted property getter: - (int)orientation;	// 0x32051e09
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3205a869
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3205a825
- (void)prepareForGeometryChange;	// 0x32058d21
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x32133ba1
- (void)removeAutocorrectPrompt;	// 0x32133955
- (void)removeFromSuperview;	// 0x3206b439
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x3213385d
- (void)setCaretBlinks:(BOOL)blinks;	// 0x321338d9
- (void)setCaretVisible:(BOOL)visible;	// 0x32133899
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x32133745
- (void)setFrame:(CGRect)frame;	// 0x32051745
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x32133595
- (void)setNeedsDisplay;	// 0x32051885
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x3213381d
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x32058ff1
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x32058331
- (void)takeSnapshot;	// 0x32134089
- (int)textEffectsVisibilityLevel;	// 0x32132ec9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32132ed9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32098cc1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32132ee1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32132edd
// declared property getter: - (BOOL)typingEnabled;	// 0x32132eb1
- (void)updateLayout;	// 0x32133991
@end
