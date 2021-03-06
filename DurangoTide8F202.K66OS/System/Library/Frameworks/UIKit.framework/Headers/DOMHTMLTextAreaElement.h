/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <DOMHTMLTextAreaElement.h> // Unknown library
#import "UIKit-Structs.h"


@interface DOMHTMLTextAreaElement (UITextInputAdditions)
- (BOOL)isTextControl;	// 0x30768fad
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30768fb1
- (id)textInputTraits;	// 0x3076b65d
@end

@interface DOMHTMLTextAreaElement (UIWebInteraction)
- (BOOL)nodeCanBecomeFirstResponder;	// 0x307cefad
@end

@interface DOMHTMLTextAreaElement (UIWebBrowserViewPrivate)
- (BOOL)_requiresAccessoryView;	// 0x30840381
- (BOOL)_requiresInputView;	// 0x30840385
- (void)_startAssistingDocumentView:(id)view;	// 0x308412b5
- (void)_stopAssistingDocumentView:(id)view;	// 0x3084129d
- (BOOL)_supportsAutoFill;	// 0x30840389
- (id)_textFormElement;	// 0x3084038d
@end

